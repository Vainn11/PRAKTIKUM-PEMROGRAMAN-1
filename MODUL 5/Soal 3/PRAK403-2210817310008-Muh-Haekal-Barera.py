a1,a2 = map(int,input().split())
b1=a1
b2=a2
if a1<a2 :
    while b1<=a2 :
        print(b1,b2, end= '')
        b1 = b1+1; b2 = b2-1
        if b1<a2+1 :
            print(end = ' - ')
        elif b2>a2+1 :
            print(end= ' - ')
elif a1>a2 :
    while b1>=a2 :
        print(b1,b2, end=' - ')
        b1=b1-1; b2=b2+1
    if b1>a2-1 :
        print(end=' - ')