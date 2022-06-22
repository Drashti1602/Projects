import java.util.*;
class Number
{
 public static void main(String[]args)
{
 int a,b,i;
 Scanner s=new Scanner(System.in);
 System.out.println("Enter two number=");
 a=s.nextInt();
 b=s.nextInt();
 if(a==b)
   {
     System.out.println("not valid same number");
   }
 else
   {
   for(i=(a<b?a:b);i<(a>b?a:b);i++)
  {
    if(i%3==0 && i%5==0)
    System.out.println(i);
   }
  }
}
}