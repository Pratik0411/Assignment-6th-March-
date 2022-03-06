#include<stdio.h>
#include<stdlib.h>
int main()
{
	int b, a[10]={1,5,4,8,9,2,0,6,11,7};
	int flag=0;		//0 for NO, 1 for YES
	printf("Enter the element you want to search:\n");
	scanf("%d", &b);
	for(int i=0; i<10; i++)
	{
		if(b==a[i])
		{
			flag++;
		}
	}
	if(flag==0)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	
	for(int i=0; i<10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
