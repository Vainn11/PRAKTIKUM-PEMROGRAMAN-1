baris1, baris2 = map(int, input().split())
if (baris1 !=baris2):
    print("Jumlah tidak sama")
else :
    x = list(map(int, input().split()))
    y = list(map(int, input().split()))
    print("\n")
    for i in range (baris1):
        print(x[i]*y[i], end=' ')