int main()
{
int n,i,j;
int ctr=0;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=i;j>0;j=j/10)
{
if((j%10)==2)
ctr++;
}

}

printf("Number of 2's is >> %d ",ctr);

}
