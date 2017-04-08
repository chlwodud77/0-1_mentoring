#include <stdio.h>

int main(){
	int N;
	int i,j,k;
	int list[8];

	for(i=0; i<8; i++){
		scanf("%d",&N);
		list[i] = N;
	}

	j = 0;
	k = 0;
	for(i=0; i<7; i++){
		if(list[i+1] - list[i] == 1){
			j++;
		}

		if(list[i] - list[i+1] == 1){
			k++;
		}
	}

	if(j == 7) {printf("ascending");}
	else if (k == 7){printf("descending");}
	else printf("mixed");

	return 0;
}