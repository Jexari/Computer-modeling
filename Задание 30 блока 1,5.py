def d(result, file_output):
    A=open(file_output, 'w')
    A.write(str(result))
    A.close
    return
def f(g, x):
    A=open(g, 'r')
    a=A.read()
    a=a[::-1]
    for i in range(x+1):
        if a.find(' ')!=-1:
            a1=a[0:a.find(' ')]
            a=a[a.find(' ')+1::]
        else:
            a1=a
            if i==x:
                A.close()
                return a1[::-1]
            else:
                return 'Неверный коэффициент'
        if i==x:
            A.close()
            return a1[::-1]
    return 'Неверный коэффициент'
print('Введите имя файла с последовательностью: ')
file_name=input()
print('Введите имя файла для вывода результата: ')
file_output=input()
print('Введите степень x, для которой нужно найти коэффициент многочлена:')
x=int(input())
result=f(file_name, x)
d(result, file_output)
print(result)