# Practical 1........
l=[10,20,30]
x=sum(l)
print("sum=",x)
# practical 2.........
s="Drashti"
temp=""
temp=s[::-1]
print(temp)
#practical 3..........
n = int(input("Enter the number for calculating the prime factors :\n"))
for i in range(2,n + 1):
    if n % i == 0:
        count = 1
        for j in range(2,(i//2 + 1)):
            if(i % j == 0):
                count = 0
                break
        if(count == 1):
            print(i)
#practical 4.........

string = "asd"
if(string.count('0')+string.count('1')==len(string)):
    print("Yes")
else:
    print("No")
#practical 5........
'''file = open("D://myFile.txt")
data = file.read()
print(str(data))'''
with open(r"D:\myFile.txt", 'r') as fp:
    x = len(fp.readlines())
    print('Total lines:', x)