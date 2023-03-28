/*O número 3025 possui a seguinte característica:
30 + 25 = 55 55^2= 3025

Pesquise e imprima todos os números de quatro algarismos que apresentam tal
característica.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, num1, num2, num3, num4;
    int aux, Pdezena, Sdezena, soma, potencia;
    printf("Digite um numero de quatro algarismos:");
    scanf("%d", &x);
    if((x<1000) || (x>9999)){
        while (x<=9999){
            num1=x/1000;
            aux=x%1000;
            num2=x/100;
            aux=aux%100;
            num3=aux/10;
            num4=aux%10;

            Pdezena=(num1*10)+num2;
            Sdezena=(num3*10)+num4;
            soma = Pdezena+Sdezena;
            potencia=pow(soma,2);

            if(potencia==x){
                printf("O número %d possui essa caracteristica");
            }
            x++;
        }
    }else{
       printf("Digite um numero de quatro algarismos:");
       scanf("%d", &x); 
    }
    return 0;
}
/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, num1, num2, num3, num4;
    int aux, Pdezena, Sdezena, soma, potencia;
    for(x=1000; x<=9999; x++){
            num1=x/1000;
            aux=x%1000;
            num2=x/100;
            aux=aux%100;
            num3=aux/10;
            num4=aux%10;

            Pdezena=(num1*10)+num2;
            Sdezena=(num3*10)+num4;
            soma = Pdezena+Sdezena;
            potencia=pow(soma,2);

            if(potencia==x){
                printf("O número %d possui essa caracteristica\n", x);
            }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int x, num1, num2, num3, num4;
    int aux1, aux2, aux3, aux4, Pdezena, Sdezena, soma, potencia;
    printf("Digite um numero de quatro algarismos:");
    scanf("%d", &x);
    if((x>=1000) && (x<=9999)){
        num1=x/10;
        aux1=x%10;
        num2=num1/10;
        aux2=num1%10;
        num3=num2/10;
        aux3=num2%10;
        num4=num3/10;
        aux4=num3%10;
        Pdezena=aux1+aux2;
        Sdezena=aux3+aux4;
        soma = Pdezena+Sdezena;
        potencia=pow(soma, 2);
        if(potencia==x){
            printf("O número %d possui essa caracteristica", x);
        }else{
            printf("O numero não possui essa caracteristica");
        }
    }else{
        printf("O número digitado não possui quatro algarismos.\n");
    }
    return 0;
}
*/