#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int id;
	char title[50];
	char artist[50];
	float duration;
}Song;

void addSong(Song *s, int n);
void displaySong(Song *s,int n);

void main()
{
    Song *songs=NULL;
    int choice,n=0;
    
    do{
    	printf("\n---------MUSIC ALBUM---------\n");
    	printf("1.Add Songs\n2.Display Album\n3.Exit\n");
    	printf("Enter your choice : ");
    	scanf("%d", &choice);
    	
    	if (choice ==1)
    	{
    		printf("Enter no of songs to add :");
    		scanf("%d", &n);
    		
    		songs=(Song*)malloc(n*sizeof(Song));
			addSong(songs, n);
		}
		else if(choice == 2)
		{
			if(songs != NULL)
			{
				displaySong(songs,n);
			}
			else
			{
				printf("No songs in the ALBUM\n");
			}
		}
		else if(choice ==3)
		{
			if(songs != NULL)
			{
				free(songs);
			}
			printf("ALBUM Exit\n");
		}
		else
		{
			printf("Invalid Choice\n");
		}
		
	}while(choice != 3);
}

void addSong(Song *s, int n)
{
	for(int i=0;i<n;i++)
	{
		printf("Enter Song Details %d:\n",i+1);
		printf("Song ID: ");
		scanf("%d", &s[i].id);
		getchar();
		printf("Song Title: ");
		scanf(" %[^\n]",s[i].title);
		printf("Song Artist: ");
		scanf(" %[^\n]",s[i].artist);
		printf("Song Durations (in mins): ");
		scanf("%f",&s[i].duration);
	}
}

void displaySong(Song *s,int n)
{
	printf("\n--- MUSIC ALBUM ---\n");
    for(int i = 0; i < n; i++) {
        printf("\nSong %d\n", i + 1);
        printf("ID: %d\n", s[i].id);
        printf("Title: %s\n", s[i].title);
        printf("Artist: %s\n", s[i].artist);
        printf("Duration: %.2f mins\n", s[i].duration);
    }
}