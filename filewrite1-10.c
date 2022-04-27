#include<stdio.h>
#include<stdlib.h>
#define NULL 0
int main()
{
    FILE *f1;
    int i;
    f1=fopen("person.dat","w");
    if(f1==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    for(i=1;i<=10;i++)
        {
            fprintf(f1,"%d \n",i);
        }
        fclose(f1);
}
