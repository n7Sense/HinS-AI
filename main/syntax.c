/* 
 * Organisation: nSense
 * Author: Rahul H. Rajbhar
 * File:   syntax.c
 * function: Syntax Error 
 *
 * Created on Aug 04, 2017, 02:37 PM
 */

#include <stdio.h>
#include <ctype.h>

int main(){
      FILE *fp;  
      int charLength;  
      char ch;

      int i=0, k=0, q=0, line=0;
      char class[100];
      char strData[1024], intData[1024];
      int strI=0, intI=0;

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

      while(q!=charLength){
            if(stream[q]==10)
                  line++;
            if(stream[q]=='c' && stream[q+1]=='l' && stream[q+2]=='a' && stream[q+3]=='s' && stream[q+4]=='s'){
                  q=q+6;
                  int i=0;

                  if(stream[q]==10)
                        line++;
                  while(isalpha(stream[q])){
                        if(stream[q]==10)
                              line++;
                        printf("%c", stream[q]);
                        if(stream[q]==32){
                              break;
                        }
                        class[i] = stream[q];
                        q++;
                  }
                  while(stream[q]!='{' ){
                        if(stream[q]==10)
                              line++;
                        if( isalpha(stream[q+1])){
                              printf("\nUnexpectec Tokken found. at line no.%d & column no.%d", line+1, q);
                        }
                        q++;
                  }
                  q=q+4;
                  
                  while(isalpha(stream[q])){
                        if(stream[q]=='S' && stream[q+1]=='t' && stream[q+2]=='r' && stream[q+3]=='i' && stream[q+4]=='n' && stream[q+5]=='g'){
                              //printf("<<%c>>", stream[q]);
                              q=q+7;
                              
                              while(stream[q]!=';'){
                                    printf("\n<<final %c>>", stream[q]);
                                    while(isalpha(stream[q])){
                                          printf("\n<<final %c>>", stream[q]);
                                          printf("%c", stream[q]);
                                          strData[strI]=stream[q];
                                          strI++;
                                          q++;  
                                    }
                                    if(stream[q]==32){
                                          strData[strI+1]=' ';
                                          strI++;
                                          break;
                                    }
                                    q++;
                              }
                        }
//printf("\n%c,*,", stream[q]);printf("%c,*,", stream[q+1]);printf("%c,*,", stream[q+2]);printf("%c,*,", stream[q+3]);
                        if(stream[q]=='i' && stream[q+1]=='n' && stream[q+2]=='t'){
                              
                              q=q+3;
                              while(stream[q]!=';'){
                                    if(stream[q]==32){
                                          intData[intI+1]=' ';
                                          intI++;
                                          break;
                                    }
                                    intData[intI]=stream[q];
                                    intI++;
                                    q++;
                              }
                        }
                  }
            }
            q++;
      }
      printf("\n %s, ", class);
      printf("\n%s, ", strData);
      printf("\n%s, ", intData);
}