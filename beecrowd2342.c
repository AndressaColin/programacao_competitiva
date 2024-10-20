#include <stdio.h>

int main() {
    unsigned N, P, Q;
    char C;
    
    scanf("%u", &N);
     scanf("%u %c %u", &P, &C, &Q);
     if(C == '+')
        if(P + Q <= N)
                printf("OK\n");
            else
                printf("OVERFLOW\n");
    else
        if(P * Q <= N)
                printf("OK\n");
            else
                printf("OVERFLOW\n");

    return 0;
}