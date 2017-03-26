#include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);

	int i,j,k;

	for(i=1; i<=N; i++){
		for(j=i; j<N; j++){
			printf(" ");
		}

		for(k=1; k<=2*i-1; k++){
			printf("*");
		}

		printf("\n");
	}

		for(i=N-1; i>=1; i--){

		for(j=0; j<N-i; j++){
					printf(" ");
				}


		for(k=1; k<=2*i-1; k++){
			printf("*");
		}




		printf("\n");
	}

	return 0;
}
