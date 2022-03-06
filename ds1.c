#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a1, a2;
	printf("Enter the size of the array 1: \n");
	scanf("%d", &a1);
	printf("Enter the size of the array 2: \n");
	scanf("%d", &a2);
	int arr1[a1],arr2[a2];
	printf("Enter the element of array 1:\n");
	for(int p=0; p<a1; p++)
	{
		scanf("%d", &arr1[p]);
	}
	printf("Enter the element of array 2:\n");
	for(int p=0; p<a2; p++)
	{
		scanf("%d", &arr2[p]);
	}
	
	int size;
	size = a1+a2;
	int arr3[a1+a2];
	int flag=0;
	int i,j,k;
	for(i=0, j=0, k=0; k < size;)
	{
		if(arr1[i] < arr2[j])
		{
			arr3[k++] = arr1[i++];
			flag++;
		}
		else
		{
			arr3[k++] = arr2[j++];
		}
	}
	if(flag<a1)
	{
		i;
		k--;
		arr3[k]=arr1[i];
	}
	else
	{
		k--;
		j--;
		arr3[k]=arr2[j];
	}
	printf("Output: \n");
	printf("X[] = {");
	for(int k=0; k<a1; k++)
	{
		printf("%d",arr3[k]);
		if(k<a1-1)
		{
			printf(", ");
		}
	}
	printf("}\n");
	
	printf("Y[] = {");
	for(int k=a1; k<a1+a2; k++)
	{
		printf("%d" , arr3[k]);
		if(k<a1+a2-1)
		{
			printf(", ");
		}
	}
	printf("}\n");
	
	return 0;
}
