/* 
 * File:   charLen.c
 * Author: Rahul H. Rajbhar
 * Organisation: nSense
 *
 * Created on July 26, 2017, 10:52 AM
 */

#include <stdio.h>  
#include <conio.h>  

void main (){
   
   FILE *fp;  
   int charLength;  
   char ch;

   //Heare 'i' is use for store Chharacter into array & 'k' is ude for to print 'char' from the array
   int i=0, k=0;

   //
   int q = 0;

   //Get the Char length of the file
   fp = fopen("e://o2jsf/main/Employee.ns", "r");
   fseek(fp, 0, SEEK_END);  
   charLength = ftell(fp)+1;  
   fclose(fp);

   char stream[charLength];
   fp = fopen("e://o2jsf/main/Employee.ns", "r");

   //Put character stream in Array
   while((ch=fgetc(fp))!=EOF){ 
   		stream[i] = ch;
   		i++;
	}
	fclose(fp);

   //Print the character from the array.
/*	while(k<=sizeof(stream)-1){
		printf("%c", stream[k]);
		k++;
	}
*/ 

	printf("\n%d", sizeof(stream));
   printf("\nSize of file: %d bytes", charLength);
}