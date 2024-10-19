#include <stdio.h>

int main()
{
    int horaInicial, horaFinal, duracao;
    scanf("%d %d", &horaInicial, &horaFinal);
    if(horaInicial < horaFinal)
    {
        duracao = horaFinal - horaInicial;
    } else {
        duracao = 24 - horaInicial + horaFinal;
    }
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
    return 0;
}