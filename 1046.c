#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b,temp;
  scanf("%d",&a);
  scanf("%d",&b);
  if(a>b){
    temp = 24-a+b;
    printf("O JOGO DUROU %d HORA(S)\n",temp);
  }
  else if(a<b){
    temp = b-a;
    printf("O JOGO DUROU %d HORA(S)\n",temp);
  }
  else{printf("O JOGO DUROU 24 HORA(S)\n");}
  return 0;
}
