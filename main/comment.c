/* 
 * Organisation: nSense
 * Author: Rahul H. Rajbhar
 * File:   comment.c
 * function: Comment Algorithm
 *
 * Created on July 26, 2017, 10:52 AM
 */
#include <stdio.h>

int main(){
      FILE *fp;  
      int charLength;  
      char ch;

      int i=0, k=0;
      int q = 0;

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



   /*
   * 
   * 10->\n
   * 42->*
   * 47->/
   */
   int line=0;
   
   while(q!=charLength){
      //printf("%d.%d(%c)\n", q,stream[q], stream[q]); q++;
      if(stream[q]==10)
         ++line;
      if(stream[q]==47){
            if(stream[q+1]==47 || stream[q+1]==42){
               if(stream[q+1]==47){
                  while(stream[q]!=10){
                     if(stream[q+1]==10)
                        ++line;
                     ++q;
                  }   
               }
               if(stream[q+1]==42){
                  while(stream[q]!=42 && stream[q+1]!=47){
                     if(stream[q]==10)
                        ++line;
                     ++q;
                  }
               }
            }else{
               printf("\nError:> Comment not properly close at Line No.%d column no.%d", line, q);
            }
      }
      q++; 
   }  
}