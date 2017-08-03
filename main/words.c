/* 
 * File:   words.c
 * Author: Rahul H. Rajbhar
 * Organisation: nSense
 *
 * Created on July 26, 2017, 10:52 AM
 */

#include<stdio.h>  
#include<conio.h>  
void main(){  

	FILE *fp;  
	char c;  
	int i=0, k=0, words = 0, fileLength = 0;
	int cur=0;

	fp=fopen("Domain.ns","r");
	fileLength = ftell(fp);

	if(fp == NULL){
		printf("File does not exist\n");
	}

	while((c=fgetc(fp))!=EOF){

		if(c==' ' || c=='\n' || c == '\t'){
			i++;
			if((cur+1)==i)
				words++;
			//printf("%d", i);
		}else{
			cur = i;

		}

		if(c=='\n'){
			k++;
		}
	}

	printf("\nThe total No, Of words in file is %d", words+1);
	printf("\nThe total No, Of lines in file is %d", k+1);
	printf("\nFile Length Is %d", fileLength);
	fclose(fp);   
}  