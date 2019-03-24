#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */

/*The global static variables list*/

static int top = 0;
static int heap[10000];


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

int heapDelete()
{
	/*Local Variable list*/
	int counter;
	int counter2;	
	int greatestInt;
	
	/*Check each integer in heap and find the greatest integer*/
	for(counter = 0; counter < top; counter++)
	{
		for(counter2 = 0; counter2 < top; counter2++)
		{
			if(heap[counter] > heap[counter2])
			{
				greatestInt = heap[counter];
			}
			else
			if(heap[counter] < heap[counter2])
			{
				greatestInt = heap[counter2];
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
