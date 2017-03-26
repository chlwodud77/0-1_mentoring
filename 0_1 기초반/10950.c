#include <stdio.h>

int main(){
	int A,B;
	int T;
	int i;

	scanf("%d",&T);
	for(i = 0; i < T; i++){
		scanf("%d %d",&A,&B);
		printf("%d\n",A+B);
	}

	return 0;

}