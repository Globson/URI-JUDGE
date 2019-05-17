#include <stdio.h>

int main(int argc, char const *argv[]) {
  int v1[6],v2[6],i,j,cont=0;
  for(i=0;i<6;i++){
    scanf("%d",&v1[i]);
  }
  for(i=0;i<6;i++){
    scanf("%d",&v2[i]);
  }
  for(i=0;i<6;i++)
    for(j=0;j<6;j++){
      if (v1[i] == v2[j]){
        cont++;
        break;
      }
    }
  if(cont == 3){
    printf("terno\n");
  }else if(cont == 4){
    printf("quadra\n");
  }else if(cont == 5){
    printf("quina\n");
  }else if(cont == 6){
    printf("sena\n");
  }else{
    printf("azar\n");
  }
  return 0;
}
