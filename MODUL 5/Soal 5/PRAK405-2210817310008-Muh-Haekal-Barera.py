n1,n2= map(int,input().split())
hasil=0;jumlah=0;total=0
a=0
while a<n1:
    a += 1
    b=a
    if a == 0:
        break
    while b>0:
        b -= 1
        print((b+1, n2), end= ' ')
        if b>0 :
            print(' + ', end=' ')
    hasil = a*n2
    jumlah += hasil
    print(jumlah)
    total += jumlah
print(total)