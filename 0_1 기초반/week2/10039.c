#include <stdio.h>

int main(){
	int scores[10];
	int i;
	int sum = 0;

	for(i = 0; i < 5; i++){
		scanf("%d\n",&scores[i]);
	} 

	for( i = 0; i < 5; i++){
		if( scores[i] < 40) sum += 40;
		else sum += scores[i];
	}
	printf("%d\n",sum/5);

	return 0;
}