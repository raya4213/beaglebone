/*The following program calls a function reverse string which returns 0 when successfully reversed, else returns a non zero value*/

#include<stdio.h>
#include "hw1.h"
void main() //strarting the main function

{
	int length;                                   //length of the input string
	char string[1000];                             //Initilization of a string of type char
	char *input = string;                         //Initilization of a pointer of type char
        //#include "hw1.h"	
	char reverse_string(char *, int);             //Initilization of a function reverse_string
	
	printf("Enter the string:\n");                
	gets(input);                                  //get the string
	printf("Enter the length of the string\n");   
	scanf("%d",&length);                          //get the length of the string
	reverse_string(input ,length);                //calling the function reverse_string
	//printf("The reversed string is:%s", input);
}


// The function should return a non zero value
//1. If the length of the string is a negative number
//2. If the string to pointer points a Null location (address 0)

char reverse_string(char *str, int length)        
{	
    
    // Evaluating the input parameters
	if ((length>1000)||(length < 0 )|| (str == 0x00)) //Since the address of a null pointer is 00, we are making sure that string doesnt point to a nul pointer
	   return '1'; // returns non zero value id reverse string fails
	   
	else // Finding the reverse of the string
	{
		int i=0;
	   char new_string[length];       //Initilizing an array of length "length"
	   
	   
	   for (i = 0; i<length; i++)    
	   {
	   	new_string[i] = str[i];    // storing the input array into new_string
		}
        
 
	   for (i = 0; i<=length; i++)
	   {
	   	str[i] = new_string[length-i-1];   // reversing the string 
	   	
		}
		
		printf("The reversed string is:%s", str);
    return NULL; //returning zero value as the reverse string is possible
    }

}
