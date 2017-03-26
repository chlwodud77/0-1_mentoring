#include <stdio.h>

int main(){
	int T;
	int i;

	scanf("%d",&T);

	for(i=0 ; i<T; i++){
		int A,B;
		scanf("%d %d",&A,&B);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n",A/B,A%B);

	}

	return 0;
}
