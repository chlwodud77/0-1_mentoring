#include <stdio.h>

int main(){

	int i;
	int max = 0;
	int count;

	for(i=0; i<9; i++){
		int N;
		scanf("%d",&N);
		if(N > max){
			max = N;
			count = i;
		}
	}

	printf("%d\n%d\n",max,count+1);
	return 0;
}