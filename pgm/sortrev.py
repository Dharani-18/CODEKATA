n=input()
x = [int(i) for i in input().split()]
x.sort(reverse=True)
print(' '.join(map(str, x)))
