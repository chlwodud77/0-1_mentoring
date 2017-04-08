#include <stdio.h>

int main(){
	int N;
	int i;
	scanf("%d",&N);
	int list[N];
	int score;
	for(i=0; i<N; i++){
		scanf("%d",&score);
		list[i] = score;
	}
	int temp;
	int down = 0;
	for(i=0; i<N-1; i++){
		if(list[i] > list[i+1]){
			temp = list[i];
			list[i] = list[i+1] - 1;
			down += (temp - list[i]);
		}
	}

	printf("%d\n",down);
	return 0;


}
// 5 3 7 5
// 2 3 4 5

// 7 6 5
// 5 5 5
// 4 5 5
// 4 4 5
// 3 4 5