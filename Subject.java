class Subject
{
  public static void main(String[]args)
  {
   int a=Integer.parseInt(args[0]);
   int b=Integer.parseInt(args[1]);
   int c=Integer.parseInt(args[2]);
   int d=Integer.parseInt(args[3]);
   int e=Integer.parseInt(args[4]);
 
   if(a>=35 && b>=35 && c>=35 && d>=35 && e>=35)
    System.out.println("Pass");
   else
   {
     System.out.println("Fail");
     if(a<35)
       System.out.println(a);
     if(b<35)
         System.out.println(b);
     if(c<35)
         System.out.println(c);
     if(d<35)
         System.out.println(d);
     if(e<35)
         System.out.println(e);
   }
}
}

    