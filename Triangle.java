class Triangle
{
 public static void main(String[]args)
 {
  //System.out.println("Enter three value=");
  int a=Integer.parseInt(args[0]);
  int b=Integer.parseInt(args[1]);
  int c=Integer.parseInt(args[2]);
    int x=a*a;
   int y=b*b;
    int z=c*c;
  if(a>=b)
            {
                if(a>=c)
                {
                    if(x==y+z)
                    System.out.println("RIGHT ANGLE TRIANGLE");
                }
                    else if(z==x+y)
                       System.out.println("RIGHT ANGLE TRIANGLE");
                    else
                        System.out.println("NOT RIGHT ANGLE TRIANGLE");
            }
            else
            {
                 if(b>=c)
                {
                    if(y==x+z)
                        System.out.println("RIGHT ANGLE TRIANGLE");
                }
                else if(z==x+y)
                    System.out.println(" RIGHT ANGLE TRIANGLE");
                else
                    System.out.println("NOT  RIGHT TRIANGLE");

            }
 }
}