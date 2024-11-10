#include <stdio.h>
 
int main() {
    int numeroCasos, resto, f1, f2;

    scanf("%d", &numeroCasos);
    for(int i = 0; i < numeroCasos; i++){
        scanf("%d %d", &f1, &f2);
        while (f2 != 0){
            resto = f1 % f2;
            f1 = f2;
            f2 = resto;
        }
        printf("%d\n", f1);
    }
    
    return 0;
}