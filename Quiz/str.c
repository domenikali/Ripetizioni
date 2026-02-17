#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void foo(char * str){
    size_t len = strlen(str);
    char * new_str = (char *)malloc(sizeof(char)*(len+1));
    for(size_t i=0;i<len;i++){
        new_str[i] = str[len-1-i];
    }
    new_str[len] = '\0';
    printf("%s\n",new_str);
    free(new_str);
}

int main(int argc, char **argv){

    for(size_t i=0;i<argc;i++){
        printf("Argument %zu: %s\n",i,argv[i]);
    }
    

    // return 0;
    foo(argv[0]);
    return 0;
}