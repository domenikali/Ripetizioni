#include<stdio.h>
#include<stdlib.h>
#define LEN 10

void print_v(int * v, size_t len){
    for(size_t i=0;i<len;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}

void foo(int * v, size_t len){
    for(size_t i=0;i<LEN;i++){
        *(v+i) = i;
    }
}

void bar(int * v, size_t len){
    for(size_t i=0;i<LEN/2;i++){
        int temp = *(v+i);
        *(v+i) = *(v+len-1-i);
        *(v+len-1-i) = temp;
    }
}


int main(){

    int var=10;



    int *ptr =&var;
    
    ptr = (int *)malloc(4*10);

    ptr[0];
    *(ptr+0)

    foo(ptr,LEN);
    print_v(ptr,LEN);

    return 0;

    
    bar(ptr,LEN);
    print_v(ptr,LEN);
    free(ptr);
    return 0;
}