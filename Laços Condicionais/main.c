#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int contador = 0;
    char c;
    do
    {
        contador += 1;
        printf("Digite 0 para sair do looping\n");
        printf("%i\n", contador);
        c = getchar();

    }

    while(c!='0');
//Se a condi��o for verdadeira ele sa� do looping
// Se for false ele volta pro loop e repete inumeras vezes, tudo que estiver dentro das chaves
//at� que a condi��o dele seja verdadeira


    return 0;
}
