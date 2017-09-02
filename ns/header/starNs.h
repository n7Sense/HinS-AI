
void starNs(){
    
    struct dirent *de;  // Pointer for directory entry
    char *fp;
    // opendir() returns a pointer of DIR type. 
    DIR *dr = opendir(".");
 
    if (dr == NULL)  // opendir returns NULL if couldn't open directory
    {
        printf("Could not open current directory");
        return 0;
    }
 
    while ((de = readdir(dr)) != NULL){
            fp = de->d_name;
            int len = strlen(fp);
            if(fp[len-3]=='.' && fp[len-2]=='n' && fp[len-1]=='s'){
                printf("\n %s", getStr(fp));
            }
    }
    closedir(dr);
}