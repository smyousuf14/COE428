#include "mySort.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void 
mySort(int array[], unsigned int first, unsigned int last)
{
	/*This function implements the merge sort algorithm using the insertion sort algorithm.*/
	
        /* Variable list*/
	int sizeOfArray;
	int evenOrOdd; /*If even, value is 0, if odd, value is 1*/
	int counter;
	int additionValue; /*The value that the loop will add by*/
	int incrementValue = 1; 

	/*Find the size of the array of numbers*/
	sizeOfArray = (last - first) + 1;
	
	/*First check if even or odd.*/
	if(sizeOfArray % 2 == 0)
	{
		/*It is even*/
		/*insertionSort(array,first,last); */
		evenOrOdd = 0;
				
	}
    else
    {
		
		/*It is odd*/
		evenOrOdd = 1;	
	}
	
	/*Now iterate through the list and merge sort them.*/
	
	/*Provide an value addition value.*/
	additionValue = 2;
	
	for(counter = 0; counter < last; counter = counter + additionValue)
	{
		/*If if the next set of additionvalue integers is possible*/
		if((counter + additionValue) > last)
		{
			additionValue = last - counter;
			insertionSort(array, counter, counter + additionValue);
		}
		else
		{
			insertionSort(array, counter, counter + additionValue);
		}
		
	}
		
	


}

void 
insertionSort(int num[], unsigned int begin, unsigned int end)
{
	/*This function sorts into descending order form first to last*/
	
	/*Local Variable List*/
	int counter;
	int counter2;
	
	
	for(counter = begin; counter < end; counter++)
	{
                myCopy(&counter, &counter2);
		
		while(counter2 >= 0 && (num[counter2 + 1] < num[counter2]))
		{	
			/*Swap*/
			
			mySwap(&num[counter2],&num[counter2 + 1]);

			/*Decrement*/
			counter2--;
		}
	}

}

