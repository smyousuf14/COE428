
-----------------Name: Syed Yousuf---------------- Std #: 500833920------------	

Brief Description of what was achieved:

In this lab, I successfully made changes to the main() function to accomodate the different specified arguments and made sure that it was error checking incorrect 
and/or invalid arguments. The program could take in no arguments, one argument(number of disks), or three arguments(numberDisks, fromID, toID) while error checking for
various conditions. Thus, all the bugs were successful fixed and the program compiles successfully and works as required. 







Answers to Requirement 1


i) Question Suppose that towers(5, 2, 3) is invoked: 

1. The first recursive call to towers(x,y,z) has the parameter values 4,2,1. towers(4,2,1)

2. It takes 5 invocations before the first recursive call actually returns to the initial invocation.

3. After the tower(5, 2, 3) has invoked its first recursive call to towers() and this invocation has returned, it will print "Move #1: From Tower 2 to Tower 3". 
The actual move made by the towers will be that a disk will be moved from tower 2 to tower 3.

4. The second recursive call to towers(x,y,z) will be invoke with the parameters of 3,2,3. towers(3,2,3)


ii) Question: Suppose that towers(8, 1, 2) is invoked. How many lines will be printed to stdout? 

Answer: The amount of lines that will be printed to stdout are 1021. This was accomplished by making a slight modification to the program to also count the number
of lines as well. This modified program was saved as an exe file with the name towerQuestion2. 
 