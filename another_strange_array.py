#Этот код возвращает массив вида [[1], [1,1], [1,1,1] ... [1]*n]
a = [];
sub_a = [];
n = int(input())
for i in range(1, n+1):
    while(i>0):
        sub_a.append(1)
        i -= 1
    a.append(sub_a)
    sub_a = []
print(a)