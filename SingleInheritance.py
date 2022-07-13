class parent:
    def displayP(self):
        print("hello parent")
class child(parent):
    def displayC(self):
        print("hello child")
obj=child()
obj.displayP()
obj.displayC()