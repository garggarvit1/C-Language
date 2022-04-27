#include<stdio.h>
#include<stdlib.h>
#define NULL 0
int main()
{
    FILE *f1;
    int i;
    f1=fopen("person.dat","r");
    if(f1==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    while(!feof(f1))
        {
            fscanf(f1,"%d",&i);
            printf("%d\n",i);
        }
        fclose(f1);
}
