#include <stdio.h>
int main (){
    int i, j, a, b;

    printf("Masukkan Angka : ");
    scanf("%d %d", &a, &b);

    for(i=a, j=b; i<=b, j>=a; i++, j--){
        printf("%d %d - ", i, j);
    }
    for(i=a, j=b; i>=b, j<=a; i--, j++){
        if(a<b){
           printf("%d %d - ", i, j);
        }
        printf("", i, j);
    for(i=a, j=b; i>=b, j<=a; i--, j++){
        if(a>b){
            printf("%d %d - ", i, j);
       }
     }
   }
}