#include <stdio.h>

int main(){
	int A,B,C,D;
	int total = 0;
	int i;
	for(i=0; i<4; i++){
		int N;
		scanf("%d",&N);
		total += N;
	}
	printf("%d\n%d\n",total/60,total%60);
	return 0;
}