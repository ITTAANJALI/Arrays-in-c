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
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    float avg;
    avg=(float)sum/size;
    printf("average of array elements are %f",avg);



}