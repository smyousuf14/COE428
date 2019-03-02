#include <stdlib.h>
#include "mySort.h"


void
mySort(int array[], unsigned int num_elements)
{
	/*
	* This function sorts the array into into an incrementing order: from least to greatest.
	*/
	
	/*Local Variable list*/
	int bucket; /*This store the temporary */
	int counter;
	int counter2; /*This counter takes care of the secondary 'mini-sorting issue'*/
	
	
	for(counter = 0; counter < (num_elements - 1); counter++)
	{
		counter2 = counter;	
		
		while(counter2 >= 0 && array[counter2 + 1] < array[counter2])
		{
			/*Swap the two numbers*/
			bucket = array[counter2];
			array[counter2] = array[counter2 + 1];
			array[counter2 + 1] = bucket;
			
			/*Decrement the counter2*/
			counter2--;
			
		}
		
	}	
	

}



