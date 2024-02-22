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
    int arr1[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int count=0;
    for(int i=0;i<size;i++)
    {
        int flag=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr1[j])
            {
                flag++;
                break;
            }
        }
        if(flag==1)
        {
            count++;
        }
        
    }
    if(count==size)
    {
        printf("array elements are equal");
    }
    else
    {
        printf("array elements are not equal");
    }



}
