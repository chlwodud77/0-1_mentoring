#include <stdio.h>

int main(){
	int N;
	int i;
	int a_cont = 0;
	int b_cont = 0;
	scanf("%d",&N);
	for(i=0; i<N; i++){
		int A,B;
		scanf("%d %d",&A,&B);
		if(A > B) a_cont +=1;
		else if(A < B) b_cont +=1;

	}
	printf("%d %d\n",a_cont,b_cont);

	return 0;
}