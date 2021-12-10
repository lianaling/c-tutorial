#include <stdio.h>
#include <string.h>

struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

/* Function Declaration */
void printBook(struct Books);
void printBookWithPointer(struct Books *);

/* Function Definition */
void printBook(struct Books book){
	printf("Book ID: %x\n", book.book_id);
	printf("Book Title: %s\n", book.title);
	printf("Book Author: %s\n", book.author);
	printf("Book Subject: %s\n", book.subject);
}

void printBookWithPointer(struct Books *book){
	printf("Book ID: %x\n", book -> book_id);
	printf("Book Title: %s\n", book -> title);
	printf("Book Author: %s\n", book -> author);
	printf("Book Subject: %s\n", book -> subject);
}

int main()
{
	int var = 20;
	int *ip = NULL; /* Good practice to assign NULL value to a pointer */
	struct Books *bookp = NULL;

	ip = &var;
	printf("Address of var variable %p\n", &var); /* &var is of type int *. Uses %p. */
	printf("Address stored in ip variable: %p\n", ip);
	printf("Value of *ip variable: %d\n", *ip);

	struct Books book1;
	bookp = &book1;

	strcpy(book1.title, "Harry Potter"); /* strcpy performs deep copy including the memory. Assignment simply assigns the value and is used for basic datatypes (integer type values) */
	strcpy(book1.author, "JK Rowling");
	strcpy(book1.subject, "Children literature");
	book1.book_id = 1;

	printBook(book1);
	printBookWithPointer(bookp);

	return 0;
}
