
char  *getStr(char *nameOfFile) {
   
   FILE *fp;
   char ch;
   int i=0, charLength;
   char *data;
   char stream[1000];
   /*fp = fopen(nameOfFile, "r");
   fseek(fp, 0, SEEK_END);  
   charLength = ftell(fp)+1;

   char stream[charLength];
   fclose(fp);
   */
   fp = fopen(nameOfFile, "r");
   while((ch=fgetc(fp))!=EOF){
         stream[i] = ch;
         i++;
   }
   fclose(fp);
   data = stream;
   //printf("%s\n", data);
   //data = stream;
   return data;
}

/**
*  method : starNs()
* This method use DIRECTORY class to open all and find all '.ns' extension class file.
*/
/*void starNs(){
    
    struct dirent *de;  // Pointer for directory entry
    char *fp;
    // opendir() returns a pointer of DIR type. 
    DIR *dr = opendir(".");
 
    if (dr == NULL)  // opendir returns NULL if couldn't open directory
    {
        printf("Could not open current directory");
    }
    else{
        while((de = readdir(dr)) != NULL){
                fp = de->d_name;
                int len = strlen(fp);
                if(fp[len-3]=='.' && fp[len-2]=='n' && fp[len-1]=='s'){
                printf("\n %s", getStr(fp));
            }
        }
    }
    closedir(dr);
}
*/
