def f(x, n):
    return ((-1)**n)*(x**(2*n+1))/(2*n+1)

x=float(input())
n=1
last=x
S=x
CONST=10**(-20000)
while abs(last)>CONST:
    last=f(x, n)
    S+=last
    n+=1
print(S)