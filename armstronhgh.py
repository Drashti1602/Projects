a=int(input("enter number="))
sum=0
temp=a
while a>0:
    r=a%10
    sum=sum+r*r*r
    a=a//10
if temp==sum:
  print("yes")
else:
  print("no")
