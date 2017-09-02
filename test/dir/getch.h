
//#include <stdio.h>  
//#include <conio.h>  

char  *getStr(char *hi){
   
   FILE *fp;
   char ch;
   int i=0;
   char stream[1000], *data;
   
   fp = fopen(hi, "r");
   while((ch=fgetc(fp))!=EOF){
         stream[i] = ch;
         i++;
   }
   fclose(fp);
   data = stream;
  /// printf("\nIn header %s\n", stream);
   return data;
}