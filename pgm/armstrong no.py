num1 =int(input())
num2=int(input())
for num in range(num1,num2):
    order = len(str(num1))
    sum = 0
    temp = num
    while temp > 0:
        digit = temp % 10
        sum += digit ** order
        temp //= 10
    if num == sum:
        print(num)
