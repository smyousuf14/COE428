#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */

/*The global static variables list*/

static int top = 0;
static int heap[10000] = {0};
static int currentNum = 0;
static int temp[10000] = {0};
static int counter = 0;


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

int heapDelete()
{
	/*Local Variable list*/
	int counter;
	int counter2;	
	int greatestInt = NULL;
	int test;
	
	/*Check each integer in heap and find the greatest integer*/
	for(counter = 0; counter < top; counter++)
	{
		for(counter2 = 0; counter2 < top; counter2++)
		{
			/*FIrst check if the algorithm has checked for a greater integer beforehand*/
			
			if(heap[counter] != NULL && heap[counter2] != NULL)
			{
				if(greatestInt == NULL)
				{
					test = heap[counter2];
				}
				else
				{
					test = greatestInt;
				}
			
				if(heap[counter] > test)
				{
					greatestInt = heap[counter];
				}
				else
				{
					greatestInt = test;
				}
			}
			
		}
	}
	
	/*Delete that integer*/
	for(counter = 0; counter < top; counter++)
	{
		if(heap[counter] == greatestInt)
		{
			heap[counter] = NULL;
		}
	}
	
  return greatestInt;  
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
	/*Add things2add to the heap*/
	heap[top] = thing2add;
	top++;
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
	/*Local Variable*/
	int counter = 0;
	int size = 0;
	
	for(counter = 0; counter < top; counter++)
	{
		/*Increment the size by 1 and check the next number in the heap*/
		if(heap[counter] != NULL)
		{
			size++;
		}	
	}
	
	
		
  return size;  //A dummy return statement
}

/*
* heapTable creates the XML table 
*
*/
void
heapTable()
{
	/*Print the current node*/
	printf("<node id = %d>", heap[currentNum]);
	
	/*Check the left branch*/
	if(heap[currentNum + currentNum + 1] != NULL)
	{
		/*Set the temporary value*/
		temp[counter] = currentNum;
		counter++;
		
		/*GO left*/
		currentNum = currentNum + currentNum + 1;
		
		heapTable();
		
		/*Reel back the temp value*/
		counter--;
		currentNum = temp[counter];
		printf("</node>");
	}
	
	/*Check the right branch*/
	if(heap[currentNum + currentNum + 2] != NULL)
	{
		/*Set the temporary value*/
		temp[counter] = currentNum;
		counter++;
		
		/*Go right*/
		currentNum = currentNum + currentNum + 2;
		
		heapTable();
		
		/*Reel back the temp value*/
		counter--;
		currentNum = temp[counter];
		printf("</node>");
	}
	
	/*Check if its the first tag*/
	if(currentNum == 0)
	{
		printf("</node>");
	}
	
}

/*
* Prints the heap table
*
*/
void 
printTable()
{
    /*New line*/
	printf("\n");
	for(counter = 0; counter < top; counter++)
	{
		if(heap[counter] == NULL)
		{
			/*Print nothing*/
			printf("\nNULL");
		}
		else
		{
			printf("\n%d",heap[counter]);
		}
	}
}

/*
* Decrement the heap, push each greatest value into the stack
*
*/
void
decrementHeap()
{
	/*Local Variable*/
	int counter;
	int temp1;
	
	printTable();
	temp1 = heapDelete();
	push(temp1);
	
}