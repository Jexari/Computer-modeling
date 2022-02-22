print('Введите n:')
n=int(input())
print('Введите M:')
M=float(input())
print('Введите k:')
k=float(input())
print('Введите через пробел n значений кси по порядку:')
a=input()
m1=list(map(float,a.split()))
print('Введите через пробел n вероятностей по порядку:')
a=input()
m2=list(map(float,a.split()))
S=0
for i in range(0, n):
    S=S+m1[i]*m2[i]
ksi=S/M
result=M*((ksi-S)**k)
print(result)