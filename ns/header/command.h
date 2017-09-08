/* 
 * Organisation: nSense
 * Author: Rahul H. Rajbhar
 * File:   command.h
 * function: Comment Algorithm
 *
 * Created on Sep 07, 2017, 02:37 PM
 */
void help(){
	printf("Usage: nsense <options> <source files>");
	printf("\nwhere possible options include:");
    printf("\n  -h or -help\t\t for more help");
    printf("\n  -v or -version\t for check version");
    printf("\n  .ns \t\t\t compile and execute .ns extension class file");
}

void version(){
	printf("nSense (NS) Build (0.0.0)");
}


int  getStr(char *nameOfFile) {
   
   FILE *fp;
   char ch;
   int i=0;
   char *data;
   char stream[1000];
   fp = fopen(nameOfFile, "r");
   while((ch=fgetc(fp))!=EOF){
         stream[i] = ch;
         i++;
   }
   fclose(fp);
   data = stream;
   comment(stream, nameOfFile);
   return 0;
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
