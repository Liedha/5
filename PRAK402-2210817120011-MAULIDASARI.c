#include<stdio.h>

int main() {
int i, j, batas;

printf ("Masukan batas maksimal: ");
scanf("%d", &batas);

for(i=1; i<=batas; i+=2) {
   printf("%d", i);
   printf(" ", i);
}
   printf("\n");
for(j=batas; j>=1; j--) {
    if(j%2==0){
       printf("%d", j);
       printf(" ", i);
    }
  }
}


