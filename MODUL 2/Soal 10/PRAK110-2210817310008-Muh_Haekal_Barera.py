import math
alas = 5
tinggi = 12
SB = math.sqrt((alas*alas)+(tinggi*tinggi))
keliling = alas + tinggi + SB
luas = (alas*tinggi)/2
print("Diketahui :")
print("Alas = {} cm".format(alas))
print("Tinggi = {} cm\n".format(tinggi))
print("Jawab :")
print("Sisi A = {} cm".format(tinggi))
print("Sisi B = {} cm".format(round(SB)))
print("Sisi C = {} cm".format(alas))
print("Keliling = {} cm".format(round(keliling)))
print("Luas = {} cm".format(round(luas)))