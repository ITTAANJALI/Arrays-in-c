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
    int large=arr[0];
    for(int i=0;i<size;i++)
    {
        if(large < arr[i])
        {
            large=arr[i];
        }
    }
    printf("largest of an array is %d",large);



}