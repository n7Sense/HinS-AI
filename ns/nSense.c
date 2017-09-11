#include "header/header.h"

int main(int argc, char *argv[]){
    if(argc>=2){

        char *str=argv[1];
        int len = strlen(str);
        
        //Note: the forst argument i.e argv[0] return the path of .exe file
        if(strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "-version") == 0){
            version();
        }
        else if(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "-help") == 0){
            help();
        }
        else if(str[len-3]=='.' && str[len-2]=='n' && str[len-1]=='s'){
            
            if(argc>2){
                int i=1;
                while(i<argc){
                    getStr(argv[i]);
                    i++;
                }
            }else{
                //printf("%s", getStr(argv[1]));
                getStr(argv[1]);
            }
            
        }else{
            printf("nSense: file not found: %s", argv[1]);
            printf("\nUsage: nSense <options> <source files>");
            printf("\nuse -help for a list of possible options");
        }
    }else{
        printf("Usage: nsense <options> <source files>");
        printf("\nargument not found");
    }

    return 0;
}