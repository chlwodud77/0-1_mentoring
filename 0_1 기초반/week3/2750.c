#include <stdio.h>

int main(){
	int N;
	int data[1001];
	scanf("%d",&N);
	int i,j;
	int temp;

	for(i=0; i<N; i++){
		int num;
		scanf("%d",&num);
		data[i] = num;
	}

	for(i=0; i<N; i++){
		for(j=0; j<N-1; j++){
			if(data[j] > data[j+1]){
				temp = data[j+1];
				data[j+1] = data[j];
				data[j] = temp;
			}
		}
	}

	for(i=0; i<N; i++){
		printf("%d\n",data[i]);
	}

	return 0;



}

// 5 2 3 4 1
// 2 5 3 4 1
// 2 3 5 4 1
// 2 3 4 5 1
// 2 3 4 1 5
// 2 3 1 4 5
// 2 1 3 4 5
// 1 2 3 4 5