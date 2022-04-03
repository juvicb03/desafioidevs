#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int div1=1, div2, i, j;

    //inicializar o divisor 1 com considerando para o numero 1

    for(i=1;i<10000;i++)
    {
        div2=0;
        for(j=1;j<i;j++)    //for para calcular a quantidade de divisores de n+1
        {
            if(i%j==0)
            {
                div2++;
            }
        }

        if(div1==div2)      //comparar os divisores e se for igual printar o valor i-1 que é o numero anterior
        {
            printf("%d\n", i-1);
        }
        div1=div2;          //substituir o divisor 1 pelo valor do 2, passando pra frente no vetor
    }

    return 0;
}
