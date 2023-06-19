#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void max_heapify(int *arr,int i)
{
	int l=2*i;
	int r=2*i+1;
	int largest=i;
	int arr_heapsize=sizeof(arr)/sizeof(arr[0]);
	if(l<=arr_heapsize&& arr[l]>arr[i])
	{
		largest=l;
	}
	else
	{
		largest=i;
	}
    if(r<=arr_heapsize && arr[r]>arr[i])
	{
		largest=r;
	}
	if(largest!=i)
	{
		swap(&arr[i],&arr[largest]);
		max_heapify(arr,largest);
	}
	
}
void build_max_heap(int *arr)
{
	int arr_heapsize=sizeof(arr)/sizeof(arr[0]);
	int i;
	for(i=arr_heapsize/2;i>0;i--)
	{
		max_heapify(arr,i);
	}
}
void display(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
		
	}
	printf("\n");
}
int main()
{
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
	build_max_heap(arr);
	printf("Your sorted array is :-\n");
	display(arr,n);
	
}
