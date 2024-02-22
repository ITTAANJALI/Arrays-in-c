#include <stdio.h>

int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int small=arr[0];
    for(int i=0;i<size;i++)
    {
        if(small >arr[i])
        {
            small=arr[i];
        }
    }
    printf("smallest of an array is %d",small);



}
