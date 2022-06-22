import java.util.*;
class Switch
{
 public static void main(String[]args)
 {
  int a,b;
 boolean c;
  Scanner s=new Scanner(System.in);
 do{
  System.out.println("Enter two number=");
  a=s.nextInt();
  b=s.nextInt();
 
  String d=s.next();
 switch(d)
  {
   case"+":
     System.out.println(a+b);
     break;
   
   case"-":
     System.out.println(a-b);
     break;
   
   case"x":
     System.out.println(a*b);
     break;
   
   case"/":
     System.out.println(a/(float)b);
     break;
  default:
    System.out.println("enter valid symbol");
    break;

  }
  c=s.nextBoolean();
  }while(c==true);
 }
}