#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    
}
void selectionsort(int *arr, int n)
{
    int i,j;
 
    int min;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                min=j;
                swap(&arr[min],&arr[i]);
                
                
            }
            
            
        }
    }
}

void printarr(int *arr,int n)
{
    int i;
    printf("The sorted elements are");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    
    }
}
    

int main()
{
    int i,j, n;
    
    printf("Please enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element at the %d th position :",i);
        scanf("%d",&arr[i]);
    }
    printf("Impelementing Selection sort please wait.....");
    selectionsort(arr,n);
    printarr(arr,n);
}
