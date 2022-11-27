baris = int(input())
isi = list(map(int, input().split()))
print("\n")
for i in range (baris):
    print((i+1)*isi[i], end= ' ')