/* 
 * Organisation: nSense
 * Author: Rahul H. Rajbhar
 * File:   comment.c
 * function: Comment Algorithm
 *
 * Created on Aug 03, 2017, 02:37 PM
 * 10->\n
 * 42->*
 * 47->/
 */
void comment(char stream[], char *fname){
   
      int charLength = strlen(stream);  
      int q = 0,column=0, commentCount=0;

      while(q<=charLength){
         
         if(stream[q]==47){

            commentCount++;
            if(stream[q+1]==47 || stream[q+1]==42){

                  if(stream[q+1]==47){
                     commentCount--;
                     while(stream[q]!=10){
                        q++;
                     }
                  }

                  if(stream[q+1]==42){
                     q=q+2;
                     while(q!=charLength){
                        if(stream[q]==42 && stream[q+1]==47){
                           q++;
                           commentCount--;
                           break;
                        }
                        q++;
                     }
                  }
            }
         }
         q++; 
      }

      //printf("commentCount %d charLength %d q %d\n", commentCount, charLength, q);
      if(commentCount!=0){
         printf("nSense : %s Error Comment not properly close.\n", fname);
      }
}