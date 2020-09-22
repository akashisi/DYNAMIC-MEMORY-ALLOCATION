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
        printf("\nMemory successfully allocated using CALLOC \n");
        printf("Enter the elements of array \n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&ptr[i]);
        }
        printf("CONTENT OF ARRAY ::\n");
        for(i=0;i<n;i++)
        {
            printf("%d  ",ptr[i]);
        }
        printf("\nEnter the new size of array :: ");
        scanf("%d",&n);
        ptr=(int *)realloc(ptr,n*sizeof(int));
        printf("\nMemory successfully allocated using REALLOC \n");
        printf("Enter the elements of new array \n");
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


