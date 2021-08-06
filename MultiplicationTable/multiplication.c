#include <stdio.h>
int main()
{
int t,i,n;;
printf("\nEnter the Table : ");
scanf("%d",&t);
printf("\nEnter the Limit : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    printf("\n%d X %d = %d",t,i,(t*i));
}
return 0;
}







