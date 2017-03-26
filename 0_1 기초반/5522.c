#include <stdio.h>

int main(){
	int i;
	int total = 0;
	int N;
	for(i = 0; i < 5; i++){
		scanf("%d",&N);
		total += N;
	}
	printf("%d\n",total);

	return 0;
}