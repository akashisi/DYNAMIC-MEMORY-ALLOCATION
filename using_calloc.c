#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int n,i=0;
    printf("\nEnter the size of array to create DYNAMICALLY :: ");
    scanf("%d",&n);
    int *ptr;
    ptr=(int *)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("\nMemory is NOT CREATED DYANMICALLY\n");
        exit(0);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
        printf("CONTENT OF ARRAY ::\n");
        for(i=0;i<n;i++)
        {
            printf("%d  ",ptr[i]);
        }
    }
    free(ptr);
 return(0);
}

