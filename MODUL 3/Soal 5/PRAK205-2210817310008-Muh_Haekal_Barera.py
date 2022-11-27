import math
a,b=input().split()
a=int(a)
b=int(b)
c=math.sqrt((b*b)-(a*a))
k=a+b+c
l=c*a/2
print("Alas = %d cm"%c)
print("Tinggi = %d cm"%a)
print("Keliling = %d cm"%k)
print("Luas = %d cm^2\n"%l)

a2=int(input())
b2=int(input())
c2=math.sqrt((b2*b2)-(a2*a2))
k2=a2+b2+c2
l2=c2*a2/2
print("Alas = %d cm"%c2)
print("Tinggi = %d cm"%a2)
print("Keliling = %d cm"%k2)
print("Luas = %d cm^2"%l2)