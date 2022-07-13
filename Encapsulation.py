class Student:
    __name="janu"
    def __init__(self,n):
        self.__name=n
        #print(self.__name)
    def display(self):
        print("welcome"+self.__name)
obj=Student()
x=str(input("enter name="))
obj.display()