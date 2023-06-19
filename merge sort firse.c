#include<stdio.h>


void swap( int *a, int *b)
{
	int temp;
	temp=*a;
	*a = *b; 
	*b = temp;
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
void merge(int *arr,int p,int q, int r)
{
	int n1=q-p+1;
	int n2=r-q;
	int L[n1+1];int R[n2+1];
	int i,j,k;
	for(i=0;i<n1;i++)
	{
		L[i]=arr[p+i];
	}
	for(j=0;j<n2;j++)
	{
		R[j]=arr[q+1+j];
	}
	i=0;
	j=0;
	L[n1+1]=1000;
	R[n2+1]=1000;
	for(i=0 ,j= 0,k =p;k<=r;k++)
	{
		if((i < n1)&&(j>=n2||L[i]<=R[j]))
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
			
		}
	}
	
}
void mergesort(int *arr, int p, int r)
{
	if(p<r)
	{
		int q=((r+p-1)/2);
		mergesort(arr,p,q);
		mergesort(arr,q+1,r);
		merge(arr,p,q,r);		
	}
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
	int p=arr[0];
	int r=arr[n-1];
	mergesort(arr,0,n-1);
	printf("The array after merge sort is\n");
	display(arr,n);
	return 0;
}
