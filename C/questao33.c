/*Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa
cidade. Para cada casa visitada é fornecido o número do canal (4, 5, 7 e 12) e o
número de pessoas que estavam assistindo naquela casa. Ler um número
indeterminado de dados (o últimó dado possui canal igual a zero) e calcule e
imprima para cada emissora a respectiva porcentagem de audiência.*/

#include <stdio.h>

int main() {
    
    int pessoas, canal=1;
    float cont4=0, cont5=0, cont7=0, cont12=0;
    while(canal!=0){
        printf("digite o canal: ");
        scanf("%i", &canal);
        if(canal!=0){
            switch (canal){
                case (4):
                    printf("Quantas pessoas assistiam: ");
                    scanf("%f", &pessoas);
                    cont4=cont4+pessoas;
                    break;
                case (5):
                    printf("Quantas pessoas assistiam: ");
                    scanf("%f", &pessoas);
                    cont5=cont5+pessoas;
                    break;
                case (7):
                    printf("Quantas pessoas assistiam: ");
                    scanf("%f", &pessoas);
                    cont7=cont7+pessoas;
                    break;
                case (12):
                    printf("Quantas pessoas assistiam: ");
                    scanf("%f", &pessoas);
                    cont12=cont12+pessoas;
                    break;
                default:
                    printf("Canal inexistente");
                    break;
            }
        }

    }
    printf("O canl 4 teve %.2f por cento de audiencia\n", (cont4/(cont4+cont5+cont7+cont12)*100));
    printf("O canl 4 teve %.2f por cento de audiencia\n", (cont5/(cont4+cont5+cont7+cont12)*100));
    printf("O canl 4 teve %.2f por cento de audiencia\n", (cont7/(cont4+cont5+cont7+cont12)*100));
    printf("O canl 4 teve %.2f por cento de audiencia\n", (cont12/(cont4+cont5+cont7+cont12)*100));
    return 0;
}