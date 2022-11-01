n1=int(input('masukkan nilai 1 : '))
n2=int(input('masukkan nilai 2 : '))

i=n1
j=n2

if n1>n2:
    while i>=n2:
        print(i,j,end=' - ')
        i=i-1
        j=j+1
    else:
        while i<=n2:
            print(i,j,end=' - ')
            i=j+1
            i=j-1
