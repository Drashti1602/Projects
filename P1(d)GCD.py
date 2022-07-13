a=int(input("enter number 1="))
b=int(input("enter number 2="))
count=1
while count<=a and count<=b:
    if a%count==0 and b%count==0:
        gcd=count
    count=count+1
print(gcd)
