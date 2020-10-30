def sort_array(a):
#Эта функция возвращает массив, в котором нечётные числа отсортированы
#по возрастанию, а чётные и 0 остаются на месте.
    n = len(a)
    for i in range(0,n):
        for j in range(0,n):
            if (a[i]%2 !=0) and (a[i]<a[j]) and (a[j]%2 != 0):
                buf = a[i]
                a[i] = a[j]
                a[j] = buf 
    return a