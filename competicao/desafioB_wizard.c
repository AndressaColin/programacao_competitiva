#include <stdio.h>
 
int main() {
    
    int M, A, B, C, idadeMaisVelho;
    
    scanf("%d", &M);
    if(M >= 40  && M <= 110)
    {
       scanf("%d", &A);
       if(A >= 1 && A < M)
       {
          scanf("%d", &B); 
          if((B >= 1 && B < M) && (B != A))
          {
                C = M - (A + B);
                if(C >= 1 && C < M)
                {
                    if(A > B && A > C){
                        idadeMaisVelho = A;
                    } else if(B > A && B > C){
                        idadeMaisVelho = B;
                    } else {
                        idadeMaisVelho = C;
                    }
                }
          }
        }
    }
    printf("%d\n", idadeMaisVelho);
    return 0;
}