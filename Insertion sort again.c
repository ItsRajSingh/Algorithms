#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
void display(int *arr, int n)
{
	int i;
	printf("the sorted elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}

	

}
void Insertion_sort(int *arr, int n)
{
	 int i,j;
	 for(i=1;i<n;i++)
	 {
	 	for(j=i-1;j>=0;j--)
	 	{
	    if(arr[j]>arr[i])
	    {
	    	swap(&arr[j],&arr[i]);
	    	i--;
		}
		}
	 }
	 
	
}
int main()
{
	//Driver code
	int i,j,n;
	printf("Enter the number of elements you want to insert\n in your array :-");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element %d :-",i);
		scanf("%d",&arr[i]);
	}
	printf("your given array is");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	Insertion_sort(arr,n);
	display(arr,n);
    
	
}
