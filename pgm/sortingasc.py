n=int(input())
x = [int(i) for i in input().split()]
x.sort(reverse=False)
print(' '.join(map(str, x)))
