import array as arr
arr=arr.array('i',[])
n=int(input("enter no"))
temp=0
for i in range(0,n):
    a=int(input("enter the number"))
    arr.append(a)

print(arr)
#print(max(arr))
x=arr[0]
for i in range(len(arr)):
    if arr[i]>x:
        x=arr[i]

print(x)

