#include <stdio.h>

int main(){
	int i;
	int odd_sum = 0;
	int odd_min = 101;
	int odd_count = 0;
	for(i=0 ; i<7; i++){
		int N;
		scanf("%d",&N);
		if(N % 2 != 0){
			odd_sum += N;
			odd_count++;
			if( N < odd_min){
				odd_min = N;
			}
		}
	}

	if( odd_count == 0){
		printf("-1");
	}else {
		printf("%d\n",odd_sum);
		printf("%d\n",odd_min);
	}

	return 0;

}