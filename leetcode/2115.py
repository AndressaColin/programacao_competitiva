from collections import deque

class Solution(object):
    def findAllRecipes(self, recipes, ingredients, supplies):    
        grafo = {
            recipe: set(ing) for recipe, ing in zip(recipes, ingredients)
        }

        grau_entrada = {
            recipe: len(ing) for recipe, ing in zip(recipes, ingredients)
        } 

        disponiveis = set(supplies)
        fila = deque(r for r in recipes 
                     if grau_entrada[r] == 0 or all(ing in disponiveis for ing in grafo[r]))
        
        resultado = []
        
        while fila:
            receita = fila.popleft()
            if receita in disponiveis:
                continue

            resultado.append(receita)
            disponiveis.add(receita)
            
            for r in recipes:
                if receita in grafo[r]:
                    grau_entrada[r] -= 1
                    if grau_entrada[r] == 0 or all(ing in disponiveis for ing in grafo[r]):
                        fila.append(r)
        
        return resultado


    


recipes = ["bread"]
ingredients = [["yeast","flour"]]
supplies = ["yeast","flour","corn"]
result = Solution().findAllRecipes(recipes, ingredients, supplies)
print(result)