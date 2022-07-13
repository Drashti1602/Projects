class Demo:
      def ADD(self,a,b,c=0):
          if c>0:
            print(a+b+c)
          else:
              print(a+b)

obj=Demo()
obj.ADD(10,20,30)

obj.ADD(11,11)