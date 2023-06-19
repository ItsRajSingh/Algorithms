#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
    temp=*a;
    *a=*b;
    *b=temp;
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
int Partition(int *arr, int p,int r)
{
	int i=p-1;
	int j=0;
	for(j=p;j<r-1;j++){
		if(arr[j]<arr[r])
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[r]);
	return i+1;
}
void Quicksort(int *arr, int p, int r)
{
	if(p<r)
	{
	int q=Partition(arr,p,r);
	Quicksort(arr,p,q-1);
	Quicksort(arr,q+1,r);
    }
}
int main()
{
	int i,n;
	printf("This is the code to execute Quick Sort\n");
	printf("Please enter the size of the array you want to enter \n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
	}
	printf("Your array before the implementation of quick sort is \n");
	display(arr,n);
	Quicksort(arr,0,n-1);
	display(arr,n);
}
