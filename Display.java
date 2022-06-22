import java.util.*;
class Display
{
 public static void main(String[]args)
 {
  int n,k,x=0,i,r=0;
  Scanner s=new Scanner(System.in);
  System.out.println("Enter two number=");
  n=s.nextInt();
  k=s.nextInt();
   for(i=1;i<=k;i++)
   {
     r=n%10;
     n=n/10;
   }
   System.out.println(r);
 }
}klkl58
     
  