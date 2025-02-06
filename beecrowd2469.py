n = int(input())
lista = input().split()

seen = set()
dup = []

for x in lista:
    if x in seen:
        dup.append(x)
    else:
        seen.add(x)

maior = max(dup, key=int)
print(maior)
