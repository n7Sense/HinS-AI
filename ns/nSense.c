#include "header/header.h"
 
int main(int argc, char *argv[])
{   
    if(argc>=2){
        
        //Note: the forst argument i.e argv[0] return the path of .exe file
        if(strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "-version") == 0){
            version();
        }
        else if(strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "-help") == 0){
            help();
        }
        else if(strcmp(argv[1], "*.ns") == 0){
            starNs();
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