#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
extern int pop();
extern void push(int);


void
mySort(int array[], unsigned int num_elements)
{
	/*
	* This function sorts the array into into an incrementing order: from greatest to least.
	*/
	/*Local Variable list*/
	int bucket; /*This store the temporary */
	int counter;
	int counter2; /*This counter takes care of the secondary 'mini-sorting issue'*/
	
	for(counter = 0; counter < (num_elements - 1); counter++)
	{
		counter2 = counter;	
		
		while(counter2 >= 0 && array[counter2 + 1] > array[counter2])
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

int main(int argc, char * argv[])
{
  int value;
  bool close = false;
  int num[4] = {9,2,10,1};
  int counter;
  while (scanf("%d\n", &value) != EOF | close == false) 
  {
    //fprintf(stderr, "READING INPUT: %d\n", value);
	
	mySort(num,4);
	if(value == 1)
	{
		addHeap(10);
		addHeap(17);
		addHeap(1);
		addHeap(14);
		addHeap(-2);
		printf("Size %d ", heapSize());
		printf("Delete %d ", heapDelete());
		printf("Size %d ", heapSize());
		
		for(counter = 0; counter < 4;counter++)
		{
			printf("\n%d", num[counter]);
		}
		close = true;
	}
	
    
    
  }
  exit(0);
}
