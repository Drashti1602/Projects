l=[]
a=int(input("how many number you can add in list="))
for n in range(a):
    a1=int(input("enter number",))
    l.append(a1)
print(l)
t=len(l)
l1=[]
for x in range(t):
    if l[x]%2==0:
        l1.append(l[x])
        #print(l[x])
print("even number in list =",l1)