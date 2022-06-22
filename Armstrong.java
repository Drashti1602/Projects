import java.util.*;
class Armstrong
{
 public static void main(String[]args)
 { 
  int n,r,k=0,sum=0,num;
  Scanner s=new Scanner(System.in);
  System.out.println("Enter Number=");
  n=s.nextInt();
  num=n;
  while(n!=0)
  {
    r=n%10;
    sum=sum+r*r*r;
    n=n/10;
  }
  if(sum==num)
    System.out.println("Armstrong number");
  else
    System.out.println("Not Aremstrong number");
  }
}
  