#include<stdio.h>
int main()
{
	float pi = 3.14;
	float r, area;
	printf("Enter radius : ");
	scanf("%f", &r);

	area = pi * r * r;

	printf("Area = %.2f", area);
	return 0;
}