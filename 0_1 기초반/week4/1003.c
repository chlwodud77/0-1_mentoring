#include <stdio.h>

int cnt0 = 0;
int cnt1 = 0;
int fibonacci(int n);
int main(){


	int count;
	int i;
	int N;

	scanf("%d",&count);
	for(i=0; i <count; i++){
		scanf("%d",&N); 
		fibonacci(N);
		printf("%d %d\n",cnt0,cnt1);
		cnt0 = 0;
		cnt1 = 0;
	}
}



int fibonacci(int n) {
    if (n==0) {
        // printf("0");
        cnt0++;
        return 0;
    } else if (n==1) {
        // printf("1");
        cnt1++;        
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}