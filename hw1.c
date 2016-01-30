#include "hw1.h"

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
