#include <stdio.h>

int main(){
	int score[5];
	int i;
	int max = 10;
	int max_count;
	for(i=0; i<5; i++){
		score[i] = 0;
	}
	for(i=0; i< 5; i++){
		int N;
		int j;
		for(j=0; j<4; j++){
			scanf("%d",&N);
			score[i] += N;
		}
	}

	for(i=0; i<5; i++){
		if(score[i] > max){
			max = score[i];
			max_count = i+1;
		}
	}

	printf("%d %d\n",max_count,max);

	return 0;

}