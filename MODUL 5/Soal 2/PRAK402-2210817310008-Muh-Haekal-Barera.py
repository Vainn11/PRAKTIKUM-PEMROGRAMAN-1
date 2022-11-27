angka = int(input())
for i in range (1, angka+1) :
    if (i % 2 == 1) :
        if i != angka :
            print (i, end= ' ')
        else :
            print(i)
    elif (i % 2 == 0) and i==angka :
        print()
while angka>0 :
    if (angka%2==0) :
        print(angka, end=' '); angka -=2
    else : angka -= 1