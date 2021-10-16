//program to swap program

#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("enter value of a");
	scanf("%d",&a);
	
	printf("enter value of b");
	scanf("%d",&b);
	
	printf("value of a and b before swapping %d and  %d\n",a,b);
	
	c=a;
	a=b;
	b=c;
	
	printf("value of a and b after swapping %d and %d",a,b);
	return 0;
}
