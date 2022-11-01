batas=int(input("Masukan batas maksimal : "))
for i in range(1, batas+1):
    if i%2!=0 :
        print(i, end=' ')
    else:
        pass
    print(' ')
    for i in reversed(range(2, batas+1)):
        if i%2==0 :
            print(i, end=' ')
        else:
            pass