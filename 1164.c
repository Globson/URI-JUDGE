#include <stdio.h>

 int main(int argc, char const *argv[]) {
   int a=0,i,d=0,j;
   scanf("%d",&a);
   for(i=0;i<a;i++){
     int cont=0,soma=0;
     scanf("%d",&d);
     int vet[d/2];
     for(j=1;j<=(d/2);j++){
       if(d%j==0){
         vet[cont]=j;
         cont++;
       }
     }
     for(j=0;j<(cont);j++){
       soma += vet[j];
     }
     if(soma == d){
       printf("%d eh perfeito\n",d );
     }else{
       printf("%d nao eh perfeito\n",d );
     }
   }
   return 0;
 }
