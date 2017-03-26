#include <stdio.h>

int main(){
	int N;
	int i,j;
	int list[1001];
	for(i=0; i<1000; i++){
		list[i] = 0;
	}
	scanf("%d",&N);
	for(i=0; i<N; i++){
		int Pi;
		scanf("%d",&Pi);
		list[i] = Pi;
	}

	j = 0;
	int max = 0;
	while(j != N-1){
		int height = 0;
		for(i=j; list[i] < list[i+1]; i++){
			if(list[i] < list[i+1]){
				height += (list[i+1]-list[i]);
			}
			if(height > max){
				max = height;
			}
		}
		j++;

	}
	
	printf("%d\n",max);

	return 0;
}