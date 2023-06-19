#include<stdio.h>

void bubblesort(int arr[],int n)
{
    //Now we have to write a proper bubble sort program
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
}
void printarr(int *arr,int n)
{
    int i ;
    printf("\nThe sorted elements of the array are\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}

int main()
{
    int n,i;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter the elements of the array consecutively\n");
    for(i=0;i<n;i++)
    {
        printf("The element at index %d is",i);
        scanf("%d",&arr[i]);
    }
    printf("Implementing bubble sort please wait");
    bubblesort(arr,n);
    printarr(arr,n);
    return 0;
}
