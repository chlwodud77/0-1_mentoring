#include <stdio.h>

int main(){
	int N,M;
	int i,j,k,m;
	scanf("%d %d",&N,&M);
	int num[N*M];
	int list[N];

	for(i=0; i<N; i++){
		list[i] = 0;
	}

	k = 0;
	for(i =0 ; i<M; i++){
		for(j = 0; j<N; j++){
			num[k] = j+1;
			k++;
		}		

	}
	j = 0;
	k = 0;
	i = 0;
	

	

	
		
	
	
	
	
	
	for(i = 0; i< N; i++){
		printf("%d ",list[i]);
	}

	return 0;

	
}