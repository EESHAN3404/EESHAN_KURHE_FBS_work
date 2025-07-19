//program to count no of words in string
#include <stdio.h>

void main()
{
	char str[100];
	int i=0,count=0;
	
	printf("Enter a string :");
	scanf(" %[^\n]",str);
	
	while(str[i] != '\0')
	{
		if((str[i] != ' ' && str[i] != '\t')&&(i==0 || str[i-1] == ' ' || str[i-1] == '\t'))
		{
			count++;
		}
		i++;
	}
	printf("Total words = %d\n",count);
}