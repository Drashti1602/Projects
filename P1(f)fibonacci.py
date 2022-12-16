n=int(input("enter number="))
a=-1
b=1
for m in range(n):
    c=a+b
    print(c)
    a=b
    b=c

"""
#"range in fibonacci series"
a=int(input("enter number1="))
b=int(input("enter number2="))
min=a if a<b else b
max=a if a>b else b
x=-1
y=1
while min<max:
         z=x+y
         x = y
         y = z
         if z>=min and z<=max:
           print(z)
"""