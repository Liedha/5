while True:  
    choice = input("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\nMasukkan Pilihan :")
    
    if choice == '1':
        n1 = float(input("Masukkan nilai pertama : "))
        n2 = float(input("Masukkan nilai kedua : "))
        sum = n1 + n2
        print("Hasil penjumlahan adalah ",sum)

    elif choice == '2':
        n1 = float(input("Masukkan nilai pertama : "))
        n2 = float(input("Masukkan nilai kedua : "))
        diff = n1 - n2
        print("Hasil pengurangan adalah ",diff)
    
    elif choice == '3':
        n1 = float(input("Masukkan nilai pertama : "))
        n2 = float(input("Masukkan nilai kedua : "))
        prod = n1 * n2
        print("Hasil perkalian adalah ",prod)
    elif choice == '4':
        n1 = float(input("Masukkan nilai pertama : "))
        n2 = float(input("Masukkan nilai kedua : "))
        div = n1 / n2
        print("Hasil pembagian adalah",div)
    
    elif choice == '5':
        print("Terimakasih, telah menggunakan kalkulator MAULIDASARI ")
        break
    
    else:
        print("Input anda salah, silahkan coba lagi ")