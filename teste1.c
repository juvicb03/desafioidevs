#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char var[101];
    printf("Escrever palavra:");
    gets(var);
    printf(var);
    int i=0, soma=0;

    // while que percorre a palavra até encontrar o caracter espaço,
    // e comparando cada posição do vetor e somando com seu respectivo valor

    while(var[i]!='\0')
    {
        if(var[i]=='a' || var[i]=='e' || var[i]=='i' || var[i]=='o' || var[i]=='u' || var[i]=='l' || var[i]=='n' || var[i]=='r' || var[i]=='s' || var[i]=='t')
        {
            soma=soma+1;
        }
        else if(var[i]=='d' || var[i]=='g')
        {
            soma=soma+2;
        }
        else if(var[i]=='b' || var[i]=='c' || var[i]=='m' || var[i]=='p')
        {
            soma=soma+3;
        }
        else if(var[i]=='f' || var[i]=='h' || var[i]=='v' || var[i]=='w' || var[i]=='y')
        {
            soma=soma+4;
        }
        else if(var[i]=='k')
        {
            soma=soma+5;
        }
        else if(var[i]=='j' || var[i]=='x')
        {
            soma=soma+8;
        }
        else if(var[i]=='q' || var[i]=='z')
        {
            soma=soma+10;
        }
        i++;
    }

    printf("\n");
    printf("%d",soma);

    return 0;
}
