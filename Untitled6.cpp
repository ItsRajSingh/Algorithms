#include<stdio.h>
int main()
{
	int a[5]={8,4,3,5,6};
	int i,j,k,min,temp,n;
	n= sizeof(a)/sizeof(a[0]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			min=i;
			if(a[j]<a[min])
			{
				min=j;
			}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		}
	
		
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}
