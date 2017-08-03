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
   int i=0, k=0;
   fp = fopen("Domain.ns", "r");
   fseek(fp, 0, SEEK_END);  
   charLength = ftell(fp)+1;  
   fclose(fp);

   char stream[charLength];
   fp = fopen("Domain.ns", "r");

   while((ch=fgetc(fp))!=EOF){ 
   		stream[i] = ch;
   		i++;
	}
	fclose(fp);
	while(k<=sizeof(stream)-1){
		printf("%c", stream[k]);
		k++;
	}
	
//	printf("\n%d", sizeof(stream));
   printf("\nSize of file: %d bytes", charLength);
}