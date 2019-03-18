#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

extern int pop();
extern void push(int);

int main(int argc, char * argv[])
{
  char ch[100];
  int tagNumber = 0;
  bool end = true;
  bool valid = true;
  int counter = 0;
  int incrementNumber;
  
  
  while (end == true) 
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
		else
		if(ch[counter] == '<' && ch[counter + 2] == '>')
		{
			push(ch[counter + 1]);
			
			/*Set the tag number value*/
			tagNumber++;
			
			incrementNumber = 3;
			
		}
		else
		if(ch[counter] == '<' && ch[counter + 3] == '>' && ch[counter + 1] == '/')
		{
			if(ch[counter + 2]  == pop())
			{
				/*This tag is valid*/
			}
			else
			{
				valid = false;
			}
			tagNumber--;
			
			incrementNumber = 4;
		}
		
		counter = counter + incrementNumber;
    }

	/*Check if all the xml tags are closed or not*/
	if(tagNumber != 0)
	{
		valid = false;
        }
	
	if(valid)
	{
		printf("Valid.");
	}
	else
	{
		printf("Not Valid.");
	}
    
    
  }

  exit(0);
}
