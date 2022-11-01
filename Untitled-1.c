#include <stdio.h>

int main(void)
{

  int a,b,i,j;

  printf("Input tinggi segitiga: ");
  scanf("%d %d",&a, &b);

  printf("\n");

  for(i=1; i<=a; i++) {
    for(j=i; j>0; j--) {
      printf("(%d * %d) + ",j,b);
    }
    printf("\n");
  }

  return 0;
}
