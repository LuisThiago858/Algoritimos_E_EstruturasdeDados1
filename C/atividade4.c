#include <stdio.h>
#include <stdlib.h>

int main(){
    int aluno, matricula;
    int aprovado=0, reprovado=0, recuperacao=0;
    double nota1, nota2, nota3, media;
    printf("Digite o número de alunos: ");
    scanf("%d", &aluno);
    for(int i=1; i<=aluno; i++){
        printf("Digite o número de matricula: ");
        scanf("%d", &matricula);
        scanf("%lf", &nota1);
        scanf("%lf", &nota2);
        scanf("%lf", &nota3);

        media=(nota1+nota2+nota3)/3;

        if(media>=7.0){
            aprovado++;
            printf("Aluno %d aprovado \n", matricula);
        }else if (media>=5.0 && media<7.0){
            recuperacao++;
            printf("Aluno %d em recuperacao \n", matricula);
        }else{
            reprovado++;
            printf("Aluno %d reprovado \n", matricula);
        } 
        printf("%.1lf\n", media);
    }
    printf("Total de aprovados: %d\n", aprovado);
    printf("Total de recuperacao: %d\n", recuperacao);
    printf("Total de reprovados: %d\n", reprovado);
    
    return 0;
}