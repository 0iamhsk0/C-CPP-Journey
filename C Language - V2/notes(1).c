/*scanf() - to take input from the user
printf() - to print the output to the user
            is used to do 2 tasks 1 is to display the message and 
            2nd it is used to display the output
c - has 7 pre defined header files
%c takes enter tag as a one char
#define - used after the header file to define any new constants
            this is called as macros*/
            

//OPERATORS:
/*urinary operators are the operators which works with single operand 
++ increment operator
-- decrement operator

1++ post decrement
++1 pre decrement
binary operators are operators which work with 2 operands*/

/*sizeof() - just tells the size of the the variable its an urinary operand 


PRECEDENCE AND ASSOCIATIVITY OF OPERATORS:
precedence of the operator 
when the operators of the same level of precedence then they have associativity order like:
 * and / then they follow left to right order
:5 % 3 & 4 + 5 * 6
2 & 4 + 30
2 & 34
=2

.... 128 64 32 16 8 4 2 1 
  2 = 0   0  0  0  0 0 1 0
  34= 0   0  1  0  0 0 1 0
2&34 =0   0  0  0  0 0 1 0  == 2

CONTROL STATEMENTS:
Three types:
1. sequence structure: sequence by default
2. selection structre:  if, if else, else if etc(these are decision statements)
3 .repetitive structures: while, do while


PRE TEST:
		for
		while
POST TEST:
		do while
		
for loop syntax:
	for("Initialization";"Condition",Updation)


break, continue, go to, return


UNFORMATTED I/O FUNCIONS:
getchar() putchar()
getch() and putch()
gets() and puts()


Function body:

(int,floatetc)       (acc to identifyers)
Function Datatype Function Name(Parameters or Arguments){
}								|||
								like : (int x,float y)
								
	
3 steps for use of a function::
	Function Declaration
	Function Definition
	Function Call
	
	
array cannot store muti data tupe values



binary search:
middle element = (first index + last index)/2



USER DEFINED DATA TYPES:
1. structured : it contains float int char str

2 types:
array within structure
array of structure




FILE HANDLING:
    
    IS THE CONCEPT BY WHICH WE ARE WRITING OR STORING OR SAVING THE INPUTTED DATA
     INTO SOME TEXT FILE ON THE OTHER HAND SAME DATA IS / SAVED DATA IS TO BE READ FROM THE RESPECTIVE TEXT FILE
     
FILE POINTER:
    THERE IS A CONCEPT OF FILE POINTER WHICH CAN POINT THE SPECIFIC FILE BY CHECKING THE ADDRESS 
    TOLD BY IT
    THERE ARE 5 MAJOR OPERATIONS THAT CAN BE PERFORMED ON FILES:
        1.CREATION OF A NEW FILE
        2.OPENING THE EXISTING FILE 
        3.READING DATA FROM THE FILE 
        4.WRITING DATA IN A FILE 
        5.CLOSING THE FILE
        
    STEPS FOR A PROCESSING OF A FILE:
        1.DECLARE A FILE POINTER VARIABLE 
        2. OPEN A FILE USING 'fopen()' fn.
        3. PROCESS THE FILE USING SUITABLE FUNCTION
        4.CLOSE THE FILE USING 'fclose()' FN.
        
        THERE ARE DIFFERENT MODES BY WHICH WE CAN USE DIFFERENT OPERATIONS:
            r = read mode
            w = write mode
            a = open the file in append mode
            r+ = can open the file in both read and write mode
            w+ = can open the file in read as well as write mode
            a+ = can open the ||     ||            ||      ||
            rb = can open the binary file in reding mode
            wb = can open the binary file in write mode
            ab = can open the bin file in append mode
            rb+,wb+,ab+ = ||   ||        ||        ||
            
            
            
            
            
STRINGS:
/*string - collection of characters in form of word/words

strlen()





POINTERS:

declaration of pointers:
Method 1: int*p;
method 2: int* p;
method 3: int * p;



//DMA:
malloc() - memory allocation
calloc() - contegious memory allocation

