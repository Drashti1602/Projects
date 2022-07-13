class A:
    def DisplayA(self):
        print("hello A")
class B(A):
    def DisplayB(self):
        print("hello B")
class C(B):
    def DisplayC(self):
        print("hello C")
obj=C()
obj.DisplayC()
obj.DisplayB()
obj.DisplayA()

