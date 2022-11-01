
n= int(input("Masukkan Angka Kelipatan : "))
simbol=input("Masukkan Simbol : ")
     
for i in range (1, 51):
    if i % n == 0 :
        print(simbol,end=' ')
    else:
        print(i, end=' ')

