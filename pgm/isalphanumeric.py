n=input()
n1=0
n2=0
for i in range(len(n)):
    if n[i].isdigit():
        
        n1=n1+1
    elif n[i].isalpha():
        n2=n2+1
    else:
        n3=0
if n1>=1 and n2>=1:
    print("Yes")
else:
    print("No")
