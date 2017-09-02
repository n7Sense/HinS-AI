
#include <stdio.h>  
#include <conio.h>  

char  main(){

   
   FILE *fp;
   char ch;
   int i=0;
   char stream[1000], *data;
   char *fname;
   char as[] = "sunita.ns";
   fname = "sunita.ns";
   fp = fopen(as, "r");
   
   if(fp){
      printf("\nYes");
   }else{
      printf("\nNo");
   }
   //Put character stream in Array
   while((ch=fgetc(fp))!=EOF){
         stream[i] = ch;
         i++;
   }
   fclose(fp);
   data = stream;
   //printf("\nIn header %s\n", data);
   
}