
int maxValue(int [],int );
main()
{
    int A[5]={10,80,20,0,1};
    int x=maxValue(A,5);
    printf("Greater no.=%d",x);

}
int maxValue(int A[],int n)
{
   int i,j,temp;
   for(i=0;i<n;i++)
   {
       for(j=1;j<5;j++)
       {
           if(A[i]<=A[j])
           {
               temp=A[i];
               A[i]=A[j];
               A[j]=temp;
           }
       }
   return A[i];

   }
}
