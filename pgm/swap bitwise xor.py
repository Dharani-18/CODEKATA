
#program for swapping 2 numbers using bitwise operator
a,b=map(int,input().split())
a=a^b
b=a^b
a=a^b
print(a,b)
