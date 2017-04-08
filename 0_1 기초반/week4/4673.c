#include <stdio.h>
int check[10001]={0};

void selfnum(int a){
  if(a>10000) return;
  int aa = a + a/1000 + (a%1000)/100 + (a%100)/10 + (a%10);
  check[aa]=1;
  selfnum(aa);
}

int main() {
  for(int i=1;i<10001;i++){
    selfnum(i);
  }
  for(int i=1; i<10001; i++){
    if(check[i]==0){
      printf("%d\n",i);
    }
  }
}


// selfnum(1)
// aa = 1 + 0 + 0 + 0 + 1 = 2
// selfnum(2)
// aa = 2 + 0 + 0 + 0 + 2 = 4
