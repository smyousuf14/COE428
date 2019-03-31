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
  int checkNum = 0;
  bool close = false;
  bool brother = true;
  int heapNum[100] = {0};
  int backbone; /*The last line*/
  int totalNum = 0; /*Total Number of data*/
  int counter = 0; /*To count the heap number.*/
  
  while (scanf("%d\n", &value) != EOF) 
  {
    fprintf(stderr, "READING INPUT: %d\n", value);
    heapNum[totalNum] = value;
	totalNum++;
  }
  
  /*Now sort the heap number from greatest to least*/
  mySort(heapNum, totalNum);
  
  /*Now add each number in heapNum into a heap data structure*/
  for(counter = 0; counter < totalNum; counter++)
  {
	addHeap(heapNum[counter]);
  }
  
  /*Print the XML table*/
  heapTable();
  
  /*Delete the greatest number from the heap one at time and push it to the stack*/
  for(counter = 0; counter < totalNum; counter++)
  {
	decrementHeap();
  }


  /*Pop the stack*/
  printf("\n");
  for(counter = 0; counter < totalNum; counter++)
  {
	printf("\n");
	printf("%d", pop());
  }
  
  /*Now print the XML expression*/
  /*counter  = 0;
  while(close == false)
  {
	printf("<node id = %d>", heapNum[counter]);
	checkNum++;
	if(heapNum[counter + counter + 1] == NULL && heapNum[counter + counter + 2] == NULL)
	{
		printf("</node>");
		if(heapNum[counter + 1] != NULL && brother == true)
		{
			counter++;
			brother = false;
		}
		else
		{
			counter = backbone + 1;
		}
	}
	else
	{
		if(brother == true)
		{
			backbone = counter;
		}
		counter = counter + counter + 1;
		
	}
	
	if(checkNum == totalNum)
	{
		close = true;
	}
  }
  */
  exit(0);
}
