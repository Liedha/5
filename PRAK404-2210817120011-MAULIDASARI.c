#include <stdio.h>
int main()
{
    int nilai;
	double a, b; 
	char pilihan;

	do{
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        
		printf("Masukkan Pilihan : ");
		scanf("%d", &nilai);
        // 
        if (nilai > 5 ) {
        
        } else if (nilai == 5){
           printf("Terimakasih, telah menggunakan kalkulator MAULIDASARI ");
             break;
        } else {
        printf("Masukkan Nilai Pertama : ");
        scanf("%lf", &a);
        printf("Masukkan Nilai Kedua : ");
        scanf("%lf", &b);
        }
        
		switch (nilai)
		{
		case 1:
			printf("Hasil Penjumlahan antara %.2lf dengan %.2lf adalah %.2lf",a,b, a + b);
			break;
		case 2:
			printf("Hasil Pengurangan antara %.2lf dengan %.2lf adalah %.2lf",a,b, a - b);
			break;
		case 3:
			printf("Hasil Perkalian antara %.2lf dengan %.2lf adalah %.2lf",a,b, a * b);
			break;
		case 4:
			if (b == 0)
				printf("\n nilai kedua tidak boleh 0");
			else
				printf("Hasil pembagian antara  %.2lf dengan %.2lf adalah %.2lf",a,b, a / b); // b tidak boleh kosong
			break;
		default:
			printf("Input anda salah, silahkan coba lagi");
            break;
		}
		printf("\n Ulang lagi? (y/t)");
		scanf(" %c", &pilihan);
	} while (pilihan == 'y');
	return 0;
}
