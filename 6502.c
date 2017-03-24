#include <stdio.h>

int main(){

	int r,w,l;
	int count = 1;
	while(1){
		scanf("%d",&r);
		if(r!=0){
			scanf("%d %d",&w,&l);
			if( (4*r*r) >= (w*w + l*l)){
				printf("Pizza %d fits on the table.\n",count);
				count++;

			}else{
				printf("Pizza %d does not fit on the table.\n",count);
				count++;

			}
		}else if(r==0){
			break;
		}
	}

	return 0;
}