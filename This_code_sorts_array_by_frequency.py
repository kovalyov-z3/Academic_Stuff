#------------------------Sortirov04ka по частоте---------------------------------
n = int(input())
a = [0]*n
for i in range(0,n):
    a[i] = int(input())
m = max(a)
a_buf = [0]*(m+1)
for i in range(0,n):
    a_buf[a[i]] +=1
for i in range(n-1):
    for j in range(n-1):
        if (a_buf[a[j]]<a_buf[a[j+1]]) or ((a_buf[a[j]]==a_buf[a[j+1]]) and (a[j]>a[j+1])):
            buf = a[j]
            a[j] = a[j+1]
            a[j+1] = buf

print(a)
