def reverse(a): 
    n = 0
    while (a > 0):
        b = a % 10
        n = b + n * 10
        a //= 10
    return n 
    
for i in range(3) :
    A, B = map (int,input().split()) 
    A=reverse(A) 
    B=reverse(B)
    C = A+B
    print(reverse(C))
    print("\n")