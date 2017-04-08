#include <stdio.h>
int fac(int N);
int main(){

	int N;
	scanf("%d",&N);
	printf("%d\n",fac(N));

	return 0;
}


int fac(int N){
	if(N>0){ 
    return N*fac(N-1);  
	}
	else{
		return 1;
	}

	// return result;
}

//fac(5)
//5*fac(4)
//5*4*fac(3)
//5*4*3*fac(2)
//5*4*3*2*fac(1)
//5*4*3*2*1