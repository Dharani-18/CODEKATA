a=int(input())
if a%10==0:
    print(a)
else:
    a = (a// 10) * 10
    a=a+10
    print(a)
