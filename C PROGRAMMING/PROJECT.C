#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//structure defination named Book is created with attributes
struct Book
{
	int id;
	char name[50];
	char author[50];
	char category[50];
	float price;
	float rating;
	char date[15];
	char status[20];
};

//global variables
struct Book* books[100];//array pointer for books
int count = 0;//count variable for books count

//function declarations
void addBook(); 
void displayAllBooks();
void searchBook();
void removeBook();
void updateBook();
void showAuthorBooks();
void showCategoryBooks();
void top3Books();
void showBookbyPrice();
int login();

//main function contains the code menu or for calling the functions as per the choice of users
void main() 
{
	//login page
	if (!login()) 
	{
      printf("Login Failed\n");
      return;
    }
    int choice;

    do 
	  {
        printf("\n************* Book Management System ************* \n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n"); 
        printf("3. Search Book\n");
        printf("4. Show Author's Books\n");
        printf("5. Show Category's Books\n");
        printf("6. Update Book Data\n");
        printf("7. Display All Books\n");
        printf("8. Display Top 3 Books\n");
        printf("9. Display Cheapest Book or Most Expensive Book\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        //choices  
        if (choice == 1)
        addBook();//function call for adding book function
        else if (choice == 2)
        removeBook();//function call for removing book function
        else if (choice == 3)
        searchBook();//function call for searching book function
        else if (choice == 4)
        showAuthorBooks();//function call for showing authors function
        else if (choice == 5)
        showCategoryBooks();//function call for category function
        else if (choice == 6)
        updateBook();//function call for updating book function
        else if (choice == 7)
        displayAllBooks();//function call for displaying book function
        else if (choice == 8)
        top3Books();//function call for top books function
        else if (choice == 9) 
		showBookbyPrice();//function call for cheap or expensive books
		else if (choice == 10)
            printf("Exit\n");//exit the program
        else
            printf("Invalid choice\n");

    } while (choice != 10);

    // for loop use to free memory
    for(int i=0;i<count;i++) 
	{
        free(books[i]);
    }
}

//function to add the books
void addBook() 
{
    if (count >= 100) 
	{
        printf("Book limit reached.\n");
        return;
    }

    struct Book* newBook = (struct Book*) malloc(sizeof(struct Book));

    printf("Enter Book ID: ");
    scanf("%d", &newBook->id);
    getchar();//getchar here used for clearing new line  

    printf("Enter Book Name : ");
    scanf(" %[^\n]", newBook->name);//[^\n ]is the format specifier used for taking name with spaces

    printf("Enter Author Name : ");
    scanf(" %[^\n]", newBook->author);

    printf("Enter Category : ");
    scanf(" %[^\n]", newBook->category);

    printf("Enter Price: ");
    scanf("%f", &newBook->price);
    getchar();    

    printf("Enter Rating: ");
    scanf("%f", &newBook->rating);
    getchar();    
    
    strcpy(newBook->date, __DATE__);   
    strcpy(newBook->status, "Available");

    books[count] = newBook;
    count++;

    printf("Book added successfully.\n");
}

// function to display the books
void displayAllBooks()
{
	if (count == 0 )
	{
		printf("No Books To Display");
		return ;
	}
	
	for(int i=0;i<count;i++)
	{
		printf("\nBook ID : %d\n", books[i]->id);
		printf("\nName : %s\n", books[i]->name);
		printf("\nAuthor: %s\n", books[i]->author);
		printf("\nCategory : %s\n", books[i]->category);
		printf("\nPrice: %.2f\n", books[i]->price);
		printf("\nRating : %.1f\n", books[i]->rating);
		printf("Date of Entry: %s\n", books[i]->date);
        printf("Status: %s\n", books[i]->status);		
	}
}

//fumction to search the book
void searchBook()
{
	int choice;
	printf("Search by:\n1. Book ID\n2. Book Name\n3. Author Name\nEnter Choice : ");
	scanf(" %d", &choice);
	
	if(choice ==1)
	{
		int id;
		printf("Enter Book ID : \n");
		scanf("%d", &id);
		
		for(int i=0;i<count;i++)
		{
			if(books[i]->id == id)
			{
				printf("Book Found:\n");
                printf("Name: %s\n", books[i]->name);
                printf("Author: %s\n", books[i]->author);
                printf("Category: %s\n", books[i]->category);
                printf("Price: %.2f\n", books[i]->price);
                printf("Rating: %.1f\n", books[i]->rating);
                printf("Status: %s\n", books[i]->status);
                printf("Date of Entry: %s\n", books[i]->date);
	            return; 		
			}
		}
		printf("Book not Found\n");
	}
	else if(choice ==2) 
	{
        char name[50];
        printf("Enter Book Name : \n");
        scanf(" %[^\n]", name);

        for (int i = 0; i < count; i++) 
		{
            if (strstr(books[i]->name, name)) 
			{
                printf("Book Found:\n");
                printf("ID: %d\n", books[i]->id);
                printf("Name: %s\n", books[i]->name);
                printf("Author: %s\n", books[i]->author);
            }
        }
        printf("Book not found.\n");
    }
    else if (choice ==3) 
	{
        char author[50];
        printf("Enter Author Name :  \n");
        scanf(" %[^\n]", author);
        
        for (int i = 0; i < count; i++) 
		{
            if (strstr(books[i]->author, author)) 
			{
                printf("Book Found:\n");
                printf("ID: %d\n", books[i]->id);
                printf("Name: %s\n", books[i]->name);
                printf("Author: %s\n", books[i]->author);
            }
        }
        printf("Book not found.\n");
    }
    else 
	{
        printf("Invalid choice.\n");
    }
	
}

//function for removing book
void removeBook()
{
	int id;
	printf("Enter Book ID to Remove: ");
	scanf("%d", &id);
	
	for(int i=0;i<count;i++)
	{
		if(books[i]->id == id)
		{
			free(books[i]);
			
			for(int j=i;j<count-1;j++)
			{
				books[j]=books[j+1];
			}
		
		count--;
		printf("Book removed Successfully.\n");
		return;
	   }
	}
	
	printf("Book not found.\n");
}

//function for updating book details
void updateBook()
{
	int id;
	printf("Enter Book ID to Update : ");
	scanf("%d", &id);
	
	for(int i=0;i<count;i++)
	{
		if(books[i]->id ==id)
		{
			printf("Enter new Price : ");
			scanf("%f",&books[i]->price);
			printf("Enter new Rating : ");
			scanf("%f", &books[i]->rating);
			printf("Update Book Status (Available/Issued): ");
            scanf(" %[^\n]", books[i]->status);
            printf("Book updated successfully\n");
			return;
		}
	}
	printf("Book not found\n");
}

//function for showing books by author name
void showAuthorBooks()
{
	char author[50];
	printf("Enter Author Name : ");
	scanf(" %[^\n]", author);
	int found = 0;
	
	for(int i=0;i<count;i++)
	{
		if(strcmp(books[i]->author, author)==0)
		{
			printf("%s (ID: %d)\n", books[i]->name, books[i]->id );
			found=1;
		}
	}
	
	if(!found)
	   printf("No books by this author\n ");
}

//function for showing books by category
void showCategoryBooks()
{
	char cat[30];
	printf("Enter Category :");
	scanf(" %[^\n]", cat);
	int found=0;
	
	for(int i=0;i<count;i++)
	{
		if(strcmp(books[i]->category, cat) == 0)
		{
			printf("%s (ID: %d) by %s\n",books[i]->name, books[i]->id, books[i]->author);
			found = 1;
		}
	}
	
	if(!found)
	   printf("No books in this category\n");
}

//function for showing top 3 books
void top3Books()
{
	if (count<3)
	{
		printf("Not enough books to show top 3\n");
		return;
	}
	
	struct Book* temp[100];
	for(int i=0;i<count;i++)
	{
		temp[i] = books[i];	
	}
	
	//sorting using bubble sort
	for (int i = 0; i < count - 1; i++) 
	{
       for (int j = 0; j < count - i - 1; j++) 
		{
          if (temp[j]->rating < temp[j+1]->rating || (temp[j]->rating == temp[j+1]->rating && temp[j]->price<temp[j+1]->price))
			{
                struct Book* swap = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = swap;
            }
        }
    }
    //for printing top 3 books
    printf("Top 3 Books \n \n");
    for (int i = 0; i < 3; i++) 
	{
        printf("Book Name : %s\n", temp[i]->name);
        printf("Author : %s\n", temp[i]->author);
        printf("Rating : %.1f\n", temp[i]->rating);
        printf("Price : %.2f\n\n", temp[i]->price);
    }
		
}

void showBookbyPrice()
{
	if (count ==0)
	{
		printf("No books available\n");
		return;
	}
	int choice;
    printf("1. Display Cheapest Book\n2. Display Most Expensive Book\nEnter choice: ");
    scanf(" %d", &choice);
	
	struct Book* selected = books[0];
	
	for(int i=1;i<count;i++)
	{
		if((choice ==1 && books[i]->price < selected->price)||(choice == 2 && books[i]->price > selected->price))
		{
			selected=books[i];
		}
	}
	
	if(choice ==1)
	printf("Cheapest Book : %s by %s \n Price: %.2f\n",selected->name,selected->author,selected->price);
	else if(choice ==2)
	printf("Most Expensive Book : %s by %s \n Price: %.2f\n",selected->name,selected->author,selected->price);
	else
	printf("Invalid Choice");
}

int login() 
{
    char username[20]; 
	char password[20];
	printf("*** Welcome To Book Management System ***\n");
	printf("\n ------ LOGIN TO CONTINUE ------ \n");
    printf("\nEnter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "Eeshan") == 0 && strcmp(password, "Eeshan123") == 0)
        return 1;
    else
        return 0;
}
