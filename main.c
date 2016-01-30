#include<stdio.h>
void main()
{
 printf("Hello World\n");
{
	int length;                                   //length of the input string
	char string[1000];                             //Initilization of a string of type char
	char *input = string;                         //Initilization of a pointer of type char
	
	char reverse_string(char *, int);             //Initilization of a function reverse_string
	
	//printf("Enter the string:\n");                
	//gets(input);                                  //get the string
	//printf("Enter the length of the string\n");   
	//scanf("%d",&length);                          //get the length of the string
	reverse_string(input ,length);                //calling the function reverse_string
	//printf("The reversed string is:%s", input);
}
}
