#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a,i,j,k,n,aux;
  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d",&n);
    int v[n],cont=0;
    for(j=0;j<n;j++){
      scanf("%d",&v[j]);
    }
    for (k = 1; k < n; k++) {
        for (j = 0; j < n - 1; j++) {
            if (v[j] > v[j + 1]) {
                aux  = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                cont++;
            }
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",cont);
  }
  return 0;
}
