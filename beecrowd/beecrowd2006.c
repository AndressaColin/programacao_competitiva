#include <stdio.h>
 
int main() {
    int cont = 0;
    int i, T, r[5];
    
    scanf("%d", &T);
    for(i=0;i<5;i++)
    {
        scanf("%d", &r[i]);
        if(r[i] == T) //erro estava aqui, uso das chaves
            cont++;
    }
    printf("%d\n", cont);
    return 0;
}