#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int k,x;
  char *str1,*str2;
  scanf("%d",&x);
  for(k=0;k<x;k++){
  int i=0,j=0,len1,len2;
  str2 = (char*)malloc(sizeof(char));
  str1 = (char*)malloc(sizeof(char));
  scanf("%s",str1);
  scanf("%s",str2);
  len1 = strlen(str1);
  len2 = strlen(str2);
  while(1){
    if(i<len1){
      printf("%c",str1[i]);
      i++;}
    if(j<len2){
      printf("%c",str2[j]);
      j++;}
    if((i == len1) && (j == len2))
        break;
  }
  printf("\n");}
  return 0;
}
