class Demo:
    b = 100 #in globaly than required self.b
    def add(self,a,b):
        self.c=a+b
        print(self.c)
    def Sub(self,a):
        #b=100 in locally then not required self.b but simply  only write b
        print(a-self.b)

obj=Demo()
obj.add(1,78)
obj.Sub(45)
