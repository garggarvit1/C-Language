#include<stdio.h>
int main()
{
int sum=0,nums[20],i,j,size,target=0,loc=0;
printf("enter size of array:");
scanf("%d",&size);
printf("\n enter an array element:");
for(i=0;i<size;i++)
{
    scanf("%d",&nums[i]);
}
printf("enter the value of target:\n");
scanf("%d",&target);
for(i=0;i<size;i++)
{
    for(j=i+1;j<size;j++)
    {
        sum=nums[i]+nums[j];
        {
        if(sum==target)
        {
            loc=loc+1;
            printf("location of sum of target: %d and %d",i,j);
        }
        }
        if(loc==0)
        {
            printf("location is not found");
        }
     }
}
return 0;

}
