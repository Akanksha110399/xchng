#include<stdio.h>
int main()
{
	int a,b;//declaring two integers a and b
	printf("Enter the numbers to swap\n");
	printf("Enter 1st number\n");//taking 1st int from user
	scanf("%d",&a);
	printf("Enter 2nd number\n");//taking 2nd int from user
	scanf("%d",&b);
	printf("Number before swapping are\n");
	printf("%d %d",a,b);//numbers entered originally
	a=a^b;
	b=b^a;
	a=b^a;
	printf("\nNumber after swapping are\n");//number after swapping
	printf("%d %d",a,b);
	return 0;
}
