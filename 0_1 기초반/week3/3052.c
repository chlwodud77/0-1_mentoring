#include <stdio.h>

int main(){

	int N,temp;
	int i,j;
	int list[10]; 
	int result[10];
	for(i = 0; i < 10; i++){
		scanf("%d",&N);
		list[i] = N % 42;
	}
	// int count = 0;
	// for(i=0; i<9; i++){
	// 	for(j=i; j<10; j++){
	// 		if(list[i] == list[j]){
	// 			count++;
	// 		}
	// 	}
	// }

	// printf("%d\n",10-count);


	for(i=0; i<10; i++){
		for(j=0; j<9; j++){
			if(list[j] > list[j+1]){
				temp = list[j+1];
				list[j+1] = list[j];
				list[j] = temp;
			}
		}
	}
	
	j = 0;
	for(i=0; i<10; i++){
		if(list[i] == list[i+1]){
			j++;
		}
	}
	printf("%d\n",10-j);
}
// 39, 40, 41, 0, 1, 2, 40, 41, 0, 1
// 0,0,1,1,2,39,40,40,41,41 
