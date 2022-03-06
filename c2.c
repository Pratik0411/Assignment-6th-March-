#include<stdio.h>
#include<stdlib.h>

int total(int a, int b, int c)
{
	int total;
	total = (a + b + c);
	return total;
}

float percentage(int a, int b, int c)
{
	float perc;
	perc = ((a + b + c)/3);
	return perc;
}
int main()
{
	int a, b, c;
	printf("Enter the marks of Science:\n");
	scanf("%d", &a);
	printf("Enter the marks of Mathematics:\n");
	scanf("%d", &b);
	printf("Enter the marks of English:\n");
	scanf("%d", &c);
	printf("Total marks: %d\n", total(a,b,c));
	printf("Percentage: %.2f\n", percentage(a,b,c));
	return 0;
}
