s=input("enter string=")
l=len(s)
flage=0
temp=s[0]
for a in range(1,l):
    if temp==s[a]:
      x=(s.index(s[a],1))
      y=s.replace(s[x], "$")
      a=y[1:]
      print(temp+a)




