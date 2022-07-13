class Demo:
    def Dis(self,a,b):
        try:
            c=a//b
        except Exception:
            print("it is not possible")
        else:
            print(c)
        finally:
            print("it is always run")
obj=Demo()
obj.Dis(25,0)
obj.Dis(36,12)