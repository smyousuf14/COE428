#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "towers.h"

int 
main(int argc, char *argv[])
{
    int n = 3;
    int from = 1;
    int dest = 2;
    
	
	/*Check the arguments and then perform the appropriate operation*/
	if(argc == 2)
	{
		/*Make sure that the correct values are input. Only integers*/
		if(atoi(argv[1]) <= 0)
		{
			/*Error. Incorrect invocation*/
			fprintf(stderr, "A valid number was not entered. Enter only numeric integer values.");
			return(1);
		}
		else
		{
		
			/*Then make sure the number of disks is set.*/
			n = atoi(argv[1]);
			
		}
		
		
	}
	else
	if(argc == 4)
	{
		/*Make sure that the correct values are input. Only integers. No negatives.*/
		if(atoi(argv[1]) <= 0 || atoi(argv[2]) <= 0 || atoi(argv[3]) <= 0)
		{	
		    
				/*Error Incorrect invocation*/
				fprintf(stderr, "A valid number(s) was not entered. Enter only numeric integer values for the disk number, from id, and toId");
				return(1);
		}
		else
		{
			
			/*Make sure that the towerID is either 1, 2, or 3 and each of the IDs are different*/
			if((atoi(argv[2]) > 3 || atoi(argv[3]) > 3) || (atoi(argv[2]) == atoi(argv[3])) )
			{
				/*Error Incorrect invocation*/
				fprintf(stderr, "A valid number(s) was not entered. Enter only numeric integer values for the disk number, from id, and toId. The id value must be  either 1, 2, or 3 and not the same.");
				return(1);
			}
			else
			{
				/*Then make sure the number of disks are set as well as the from and two id*/
				n = atoi(argv[1]);
				from = atoi(argv[2]);
				dest = atoi(argv[3]);
			}
		}
		
		
	}
	else
	if(argc == 1)
	{
		/*Do nothing */
	
	}
	else
	{
		/*Error. Incorrect invocation*/
		fprintf(stderr, "A valid number(s) was not entered. Enter only numeric integer values for the disk number, from id, and toId");
		return(1);
	}
	
    towers(n, from, dest);
    
	exit(0);
}

