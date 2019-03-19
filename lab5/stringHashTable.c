#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//  
//
//

#define HASH_TABLE_SIZE 1057
typedef struct Entry Entry, *EntryPtr;
struct Entry 
{
  char * string;
  int count;
};
Entry hash_table[HASH_TABLE_SIZE];

void add(char * tag)
{

	/*Local Variable list*/
	int hashValue;
	int counter;
	int sum;
	
	/*
	* The Hash function that will be used in this String Hash table is X mod 7, 
	* where X is the sum of the ASCII values of each character in the tag
	*/
	for(counter = 0; counter < strlen(tag); counter++)
	{
		sum = sum + tag[counter];
	}
	hashValue = (sum % HASH_TABLE_SIZE);
	
	/*Place in the hash table*/
	if(hash_table[hashValue].count == 0)
	{
		hash_table[hashValue].string = tag;
		hash_table[hashValue].count = 1;
	}
	else
	if(hash_table[hashValue].count != 0)
	{
		hash_table[hashValue].string = tag;
		hash_table[hashValue].count++;
	}
	
}

/*Returns an count value from the hash_table*/
int get(char * tag)
{
	int hashValue;
	int returnValue;
	int sum;
	int counter;
	
	/*
	* The Hash function that will be used in this String Hash table is X mod 7, 
	* where X is the sum of the ASCII values of each character in the tag
	*/
	for(counter = 0; counter < strlen(tag); counter++)
	{
		sum = sum + tag[counter];
	}
	hashValue = (sum % HASH_TABLE_SIZE);
	
	if(hash_table[hashValue].string == tag)
	{
		returnValue = hash_table[hashValue].count;
	}
	
	return returnValue;
}
