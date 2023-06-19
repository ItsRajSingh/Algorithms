#include<stdio.h>
#include<stdlib.h>
struct abc{
	int i;
};
int main()
{
     struct abc *a,b;
     a=(struct abc*)malloc(sizeof(struct abc));
     printf("Enter the value of a");
     scanf("%d",&a->i);
     printf("Enter the value of b");
     scanf("%d",&b.i);
     printf("The value of a is %d",a->i);
     printf("The value of b is %d",b.i);
     return 0;
     
     
}
