#include <stdio.h>

int main(){

	int T;
	scanf("%d",&T);
	int i;

	for(i=0 ; i<T; i++){
		int A,B;
		scanf("%d %d",&A,&B);
		printf("Case %d: %d\n",i+1,A+B);
	}

	return 0;
}