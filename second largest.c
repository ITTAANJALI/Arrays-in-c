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
    int seclar=arr[0];
    for(int i=0;i<size;i++)
    {
        if(large < arr[i])
        {
            large=arr[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i] < large && seclar <arr[i])
        {
            seclar=arr[i];
        }
        
    }
    printf("%d",seclar);
    

    
}
