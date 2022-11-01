#include <stdio.h>
int main () {
    int a,b,i,j,x,y,z,hasil,total;
    printf("Masukkan Angka\n");
    scanf("%d %d", &a, &b);
    for(i=1; i<=a; i++){
        for(j=1; j>1; j--){
            printf("(%d*%d) +",j,b);
        }
        for(x=1, hasil=x*b; x<i; x++, hasil+=(x*b)){
            printf("(%d*%d) = %d\n", j,b,hasil);
        }
        for(y=1, z=1, total=0; y<=a; z+=y+1, y++){
            total +=z*b;
        }
        printf("%d", total);
    }

}