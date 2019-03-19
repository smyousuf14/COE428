#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

extern char *  pop();
extern void push(char *);

int main(int argc, char * argv[])
{
  /*Local Variable*/
  char ch[1000];
  int tagNumber = 0;
  bool end = true;
  bool valid = true;
  int counter = 0;
  int counter2 = 1;
  int incrementNumber;
  char tempCh[100];
  
  while(end == true)
  {
	scanf("%s", &ch);
	
	/*Need to use some sort of loop*/
	
	while(end == true)
	{
		/*First need to check if there is any more tags on this line*/
		if(ch[counter] == NULL)
		{
			end = false;
		}
		if(ch[counter] == '<' && ch[counter + 1] != '/')
		{
			counter2 = 1;
			/*Need to create a temp array*/
			while(ch[counter + counter2] != '>')
			{
				tempCh[counter2 - 1] = ch[counter + counter2];
				
				counter2++;
			}
			
			push(tempCh);
			
			/*Set the tag number value*/
			tagNumber++;
			
			incrementNumber = strlen(tempCh);
			
		}
		else
		if(ch[counter] == '<' && ch[counter + 1] == '/')
		{
			counter2 = 2;
			/*Need to create a temp array*/
			while(ch[counter + counter2] != '>')
			{
				tempCh[counter2 - 1] = ch[counter + counter2];
				
				counter2++;
			}
			if(strcmp(tempCh,pop()) == 0)
			{
				/*This tag is valid*/
				
			}
			else
			{
				valid = false;
			}
			tagNumber--;
			
			incrementNumber = strlen(tempCh);
			
		}
		
		counter = counter + incrementNumber;
	}
	
	/*Check if all the xml tags are closed or not*/
	if(tagNumber != 0)
	{
		valid = false;
    }
	
	if(valid == true)
	{
		printf("Valid\n");
		
		/*Now print a table with a line for each start-tag encountered and a count of how often it occurred*/
		
		
	}
	else
	{
		printf("Not Valid");
	}
		
  
  
  }
  
    
  exit(0);
}
