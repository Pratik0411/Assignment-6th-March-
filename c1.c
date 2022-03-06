#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct lib
{
	char title[20], author[20];
	int price, flag, accession;
};

int main()
{
	struct lib l[100];
	char author[20];
	char title[20];
	int i, count;
	int  choice = 0;
	i = count = 0;
	while(choice<7)
	{
		printf("\n1. Add book information\n2. Display book information\n3. List all books of given author\n4. List the title of specific book\n5. List the count of book in the library\n6. list the book in the order of accession number\n7. Exit\n");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1:
			printf("\nEnter book name: \n");
			scanf("%s", l[i].title);
			printf("Enter author name: \n");
			scanf("%s", l[i].author);
			printf("Enter price: \n");
			scanf("%d", &l[i].price);
			printf("Book Accession number is %d\n", i+1);
			count++;
			i++;
			break;
			
			case 2:
			printf("\nBook Information\n");
			for(int j=0;j<count;j++)
			{
				printf("Information for book Accession number %d is\n", j+1);
				printf("\tBook name: %s\n", l[j].title);
				printf("\tBook author: %s\n", l[j].author);
				printf("\tBook price: %d\n", l[j].price);
			}
			break;
			
			case 3:
			printf("\nEnter the Author name\n");
			scanf("%s", author);
			printf("\n");
			for(int j=0; j<count; j++)
			{
				if(strcmp(author, l[j].author)==0)
				{
					printf("Results for entered author\n");
					printf("\tBook name: %s\n", l[j].title);
					printf("\tBook author: %s\n", l[j].author);
					printf("\tBook price: %d\n", l[j].price);
					printf("\tAccession number: %d\n", j+1);
				}
				else
				{
					printf("Author not found!\n");
				}
			}
			break;
			
			case 4:
			printf("\nEnter the book name\n");
			scanf("%s", title);
			printf("\n");
			for(int j=0; j<count; j++)
			{
				if(strcmp(title, l[j].title)==0)
				{
					printf("Results for entered book\n");
					printf("\tBook name: %s\n", l[j].title);
					printf("\tBook author: %s\n", l[j].author);
					printf("\tBook price: %d\n", l[j].price);
					printf("\tAccession number: %d\n", j+1);
				}
				else
				{
					printf("Book not found!\n");
				}
			}
			break;
			
			case 5:
			printf("There are total %d book/s.\n", count);
			break;
			
			case 6:
			printf("\nBook Information\n");
			for(int j=0;j<count;j++)
			{
				printf("Information for book Accession number %d is\n", j+1);
				printf("\tBook name: %s\n", l[j].title);
				printf("\tBook author: %s\n", l[j].author);
				printf("\tBook price: %d\n", l[j].price);
			}
			break;
		}
	}
	printf("Visit Again!\n");
	return 0;
}
