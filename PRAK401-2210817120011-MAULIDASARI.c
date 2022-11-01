#include <stdio.h>

int main() {
int n,i,j;
char A;
   
   printf("Masukkan Angka Kelipatan : ");
   scanf("%d %c \n", &n, &A);    
  
for(i=1; i<=50; i++){
    if(i%n!= 0){
    printf("%d", i);
    }
    printf("", i);
    if(i%n==0){
        printf("%c", A);
    }
    printf(" ", A);
    printf("\n");
   }
}