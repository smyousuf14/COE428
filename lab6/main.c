#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
extern int pop();
extern void push(int);

int main(int argc, char * argv[])
{
  int value;
  bool close = false;
  while (scanf("%d\n", &value) != EOF | close == false) 
  {
    //fprintf(stderr, "READING INPUT: %d\n", value);
	
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
		close = true;
	}
	
    
    
  }
  exit(0);
}
