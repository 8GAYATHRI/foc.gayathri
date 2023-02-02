#include<stdio.h>

int main()
{
	int a;
	printf ("Enter a:");
	scanf("%d",&a);
	
	//logic
	if (a% 2==0){
		printf("The given number is Even");
	}
	else {
		printf("The given numer is odd");
	}
	return 0;
}
