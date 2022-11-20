for a in range (3) :
    b, c = input().split()
    b = int (b)
    c = int (c)
    i = 0
    j = 0
    k = 0
    for d in range (1, b + 1) :
        e = d
        f = 1
        h = (d * c)
        while e > 1 :
            e = e - 1
            print("(%d" %e, "* %d) + " %c, end='')
        while f < d :
            h = h + (f * c)
            f = f + 1
        print("(%d" %e, "* %d)" %c, "= %d" %h)
    while k <= b :
        i = i + (j * c)
        j = j + (k + 1)
        k = k + 1
    print("%d\n" %i)
