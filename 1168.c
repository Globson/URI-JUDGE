#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int identifica(char carac){
  if(carac == '2' || carac == '3' || carac == '5')
    return 5;
  else if(carac == '9' || carac == '0' || carac == '6')
    return 6;
  else if(carac == '1')
    return 2;
  else if(carac == '4')
    return 4;
  else if(carac == '7')
    return 3;
  else if(carac == '8')
    return 7;
}
int main() {
  int x,i,j,len;
  scanf("%d",&x);
  char *valores = (char*)malloc(sizeof(char));
  for(i=0;i<x;i++){
    int soma=0;
    scanf("%s",valores);
    len=strlen(valores);
    for(j=0;j<len;j++){
      soma += identifica(valores[j]);
    }
    printf("%d leds\n",soma);
  }
  return 0;
}
