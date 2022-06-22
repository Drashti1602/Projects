import java.util.*;
class Prime
{
 public static void main(String[]args)
 {
  int a,b,i,j;
  Scanner s=new Scanner(System.in);
  System.out.println("Enter Two Number=");
  a=s.nextInt();
  b=s.nextInt();
  for(i=(a>b?a:b);i>(a<b?a:b);i--)
  {
    for(j=2;j<i;j++)
    {
      if(i%j==0)
       {
        break;
       }
   }
  if(i==j)
  System.out.println(i);
  }
 }
}