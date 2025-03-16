#include <stdio.h>

int main() {
    int N, P, Q, resultado; 
    char C; 

    scanf("%d", &N);
    if (N > 0 && N < 500000) {
        scanf("%d", &P);
        if (P > 0 && P < 1000) {
            scanf(" %c", &C); // Espaço antes de %c para descartar caracteres em branco
            if (C == '+' || C == '*') {
                scanf("%d", &Q);
                if (Q > 0 && Q < 1000) {
                    if (C == '+') {
                        resultado = P + Q;
                        if (resultado <= N) {
                            printf("\nOK\n");
                        } else {
                            printf("\nOVERFLOW\n"); 
                        }
                    } else if (C == '*') {
                        resultado = P * Q;
                        if (resultado <= N) {
                            printf("\nOK\n");
                        } else {
                            printf("\nOVERFLOW\n"); 
                        }
                    }
                }
            }
        }
    }

    return 0;
}
