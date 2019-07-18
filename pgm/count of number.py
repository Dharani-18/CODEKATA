n,a=map(int,input().split())
arr=list(map(int,input().split()))
count=0
for i in range(1,len(arr)):
    if arr[i]==a:
        count=count+1
print(count)     
