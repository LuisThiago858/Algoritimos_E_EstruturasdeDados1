#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 5
int main(){
	
	int A[tam], i,j, num;
	time_t t;
	srand((unsigned)time(&t));
	
	for(i=0;i<tam;i++){
		A[i]=rand()%10+1;
		for(j=0;j<i;j++){
			if(A[j]==A[i]){
				i--;
				break;
			}
		}
	}
	
	for(i=0; i<tam; i++){
		printf("%d ", A[i]);
	}
	return 0;
}