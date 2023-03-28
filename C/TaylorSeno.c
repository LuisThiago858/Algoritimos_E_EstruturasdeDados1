#include <stdio.h>
int main(){
    int fat(int n){
        int i=1;
        int acc=1;
        while(i<=n){
            acc=acc*i;
            i++;
        }
        return acc
    }
    double pot(){
        int i;
        double a =base;
        int b =expoente;
        double resposta=1.0;
        i=0;
        while(i<b){
            resposta *=a;
            i++;
        }
        return resposta;
    }
    double seno(double x){
        int n=0;
        double acc =0;
        while(n<=10){
            acc+=pot(-1.0, n)*pot(x, 2*n+1)/fat(2*n+1);
            printf("n=%d\n", n);
            n++;
        }
        return 0;
    }


}