#Этот код возвращает число наоборот без перевода в строку
n = int(input()); answer = 0;
while(n>0):
    digit = n%10
    answer = answer*10+digit
    n //= 10
print(answer)