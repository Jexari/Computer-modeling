def d(result, file_output):
    A=open(file_output, 'w')
    A.write(str(result))
    A.close
    return
def f(g):
    A=open(g, 'r')
    a=A.read()
    if a!='' and a.find(' ')==-1:
        return 1
    if a=='':
        return 0
    a1=a[0:a.find(' ')]
    count=1
    a=a[a.find(' ')+1::]
    while a.find(' ')!=-1:
        a2=a[0:a.find(' ')]
        a=a[a.find(' ')+1::]
        if a1!=a2:
            count+=1
        a1=a2
    a2=a
    if a1!=a2:
        count+=1
    A.close()
    return count
print('Введите имя файла с последовательностью: ')
file_name=input()
print('Введите имя файла для вывода результата: ')
file_output=input()
result=f(file_name)
d(result, file_output)
print(result)