class A:
    def DisplayA(self):
        print("hello A")
class B:
    def DisplayB(self):
        print("hello B")
class C(A,B):
    def DisplayC(self):
      print("hello C")
obj=C()
obj.DisplayC()
obj.DisplayA()
obj.DisplayB()
