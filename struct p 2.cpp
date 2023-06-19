#include<stdio.h>
#include<stdlib.h>
struct abc{
	int *i;
};
main(){
	struct abc *a,b;
	a=(struct abc*)malloc(sizeof(struct abc));
	a->i=(int*)malloc(sizeof(struct abc));
	b.i=(int*)malloc(sizeof(struct abc));
	printf("Enter the value of a ");
	scanf("%d",&a->i);
	printf("Enter the value of b");
	scanf("%d",&b.i);
	
}
