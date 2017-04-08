#include <stdio.h>

int main(){
	int i,j;
	int list[3];
	int temp;
	scanf("%d %d %d",&list[0],&list[1],&list[2]);
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			if(list[j] > list[j+1]){
				temp = list[j+1];
				list[j+1] = list[j];
				list[j] = temp;
			}
		}
	}

	printf("%d %d %d",list[0],list[1],list[2]);

	return 0;

}
