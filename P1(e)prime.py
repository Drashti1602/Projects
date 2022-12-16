a=int(input("enter number 1="))
b=int(input("enter number 2="))
flage=0
max=a if a>b else b
min=a if a<b else b
for n in range(min,max):
    for m in range(2,n-1):
        if n%m==0:
            flage=1
            break
        else:
            flage=0
    if flage==0:
        print(n)

