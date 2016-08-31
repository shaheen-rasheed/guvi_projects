public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number");
        int n1=sc.nextInt();
        int d=sc.nextInt();
while(n1!=0)
        {
            a[i]=n%10;
            count++;
            i++;
        n1=n1/10;
        }
        int t;
        for(j=0;j<i-1;j++)
        {
            for(int k=j+1;k<i;k++)
            {
            //    System.out.println("fghdh");
               if(a[j]>a[k])
            {
              t=a[j];
              a[j]=a[k];
              a[k]=t;
                
            }
        }
    }
for(j=0;j<count-d;j++)   
{
   // System.out.println("rgtrg");
     System.out.print(""+a[j]);
}
    }
    
}
