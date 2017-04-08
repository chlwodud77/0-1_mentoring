#include <stdio.h>

int main(){
	int L,P,N;
	int i;
	scanf("%d %d",&L,&P);
	for(i=0; i<5; i++){
		scanf("%d",&N);
		printf("%d ",N-L*P);
	}

	return 0;
}