Answer to the question
Q: Suppose you were given an object module (with no access to source code) that sorted an array of integers very efficiently. However, the sort function in the object module must be invoked with the following signature:

betterSort(int data[], first, last);

where the array to sort is data and the parameters first and last give the indices of the portion of the array that is to be sorted.

How could you write a mySort() function with the signature used in this lab that could exploit the better sorting function in the supplied object module? 

A: We could write a mySort() function with the signature used in this lab to exploit the better sorting function in the 
following way. We can use the parameter num_elements in order to used the betterSort function. We can call the betterSort function and 
give the data as the data input parameter for this function. We can give 0 as the first parameter and (num_elements - 1 ) as the last parameter.
Thus, invoking the betterSort() function within mySort() function.