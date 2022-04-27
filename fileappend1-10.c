#include<stdio.h>
#include<stdlib.h>
#define NULL 0
int main()
{
    FILE *f1;
    int i;
    f1=fopen("person.dat","a");
    if(f1==NULL)
    {
        printf("file cannot append");
        exit(1);
    }
    for(i=11;i<=20;i++)
        {
            fprintf(f1,"%d \n",i);
        }
        fclose(f1);
}
