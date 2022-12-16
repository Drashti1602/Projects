s=input("enter a string")
l=len(s)
x=s.endswith("ing")
if x==True:
    print(s)
    print(s.replace('ing','ly'))
else:
      if l==3:
        print(s+"ing")
      else:
          print("string length is more than three")
