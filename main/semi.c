/* 
 * Organisation: nSense
 * Author: Rahul H. Rajbhar
 * File:   semi.c
 * function: checking semicolon 
 *
 * Created on Aug 04, 2017, 02:37 PM
 */
#include <stdio.h>
#include <ctype.h>

int main(){

      FILE *fp;  
      int charLength;  
      char ch;

      int i=0;
      char strData[1024], intData[1024];

      fp = fopen("e://o2jsf/main/Employee.ns", "r");
      fseek(fp, 0, SEEK_END);  
      charLength = ftell(fp)+1;  
      fclose(fp);

      char stream[charLength];
      fp = fopen("e://o2jsf/main/Employee.ns", "r");
      while((ch=fgetc(fp))!=EOF){
            stream[i] = ch;
            i++;
      }
      fclose(fp);

      int q=0;

    while(stream[q]!=']'){

     }

  }