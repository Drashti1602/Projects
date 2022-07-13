class Employee:
    name = ""
    department = ""
    salary = 0

    def __init__(self,n,s,d):
        self.name=n
        self.department=d
        self.salary=s
    def Display(self):
        print("Employee Details......")
        print("Employee Name=",self.name)
        print("Employee Department=",self.department)
        print("Employee Salary=",self.salary)

x=input("Enter name=")
y=input("Enter Department=")
z=int(input("Enter Salary="))

obj=Employee(x,y,z)
obj.Display()
