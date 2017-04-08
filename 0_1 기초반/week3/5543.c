#include <stdio.h>

int main(){
	int sang,joong,ha,coke,sprite;
	int i,j;
	int N;
	int burger[3];
	int price[6];

	scanf("%d %d %d %d %d",&burger[0],&burger[1],&burger[2],&coke,&sprite);

	for(i=0,j=0; i<3; i++){
		price[j] = burger[i] +coke - 50;
		price[j+1] = burger[i] + sprite - 50;
		j+=2;

	}

	int min = 2001;
	for(i=0; i<6; i++){
		if(price[i] <= min){
			min = price[i];
		}
	}

	printf("%d\n",min);

	return 0;
}

