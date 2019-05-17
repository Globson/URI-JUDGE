#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b,i,soma=0;
  scanf("%d",&a);
  scanf("%d",&b);
  if(b<a){
    int temp;
    temp = b;
    b = a;
    a = temp;
  }
  if(a%2==0){
    a+=1;
  }else{
    a+=2;
  }
  for(i=a;i<b;i+=2){
    soma+=i;
  }
  printf("%d\n",soma );
  return 0;
}
