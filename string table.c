#include<stdio.h>
int main()
{
    int n,i,j;
    char str[10][20],tar[20];
    printf("enter no. of names=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    gets(str[i]);
    for(i=0;i<n;i++)
    {
    for(j=0;j<n-1-i;j++)
    {
    if(strcmp(str[j],str[j+1])>0)
    {
    strcpy(tar,str[j]);
    strcpy(str[j],str[j+1]);
    strcpy(str[j+1],tar);
    }
    }
    for(i=0;i<n;i++)
        puts(str[i]);

    }
    return 0;
}
