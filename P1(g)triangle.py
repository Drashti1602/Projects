l=int(input("enter length of triangle="))
b=int(input("enter breadth of triangle="))
h=int(input("enter heigth of triangle="))
cir=l+b+h
print("circumference of triangle=",cir)
c= (l+b+h)/2
a=(c*(c-l)*(c-b)*(c-h))**0.5
print("area of triangle=",a)