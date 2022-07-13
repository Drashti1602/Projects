a=int(input("enter number"))
temp=a
sum=0
while a>0:
    r=a%10
    sum=sum+r*r*r
    a=a//10
if temp==sum:
    print("armstrong number")
else:
    print("Not Armstrong number")