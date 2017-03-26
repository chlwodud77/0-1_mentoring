#include <stdio.h>

int main(){

	int A,B;

	while(1){
		scanf("%d %d",&A,&B);
		if(A == 0 && B == 0){
			break;
		} else {
			if( A <= B) printf("No\n");
			else printf("Yes\n");
		}
	}

	return 0;
}