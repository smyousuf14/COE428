#include <stdlib.h>
#include <stdio.h>
#include "mySort.h"

void 
mySort(int array[], unsigned int first, unsigned int last)
{
	/*This function sorts into descending order form first to last*/
	
	/*Local Variable List*/
	int counter;
	int counter2;
	
	
	for(counter = first; counter < last; counter++)
	{
                myCopy(&counter, &counter2);
		
		while(counter2 >= 0 && (array[counter2 + 1] < array[counter2]))
		{	
			/*Swap*/
			
			mySwap(&array[counter2],&array[counter2 + 1]);

			/*Decrement*/
			counter2--;
		}
	}
	
	
    
}


