#include<stdio.h>

typedef struct {
    int val;
    char c;
}s1;

typedef struct {
    char c;
    int val;
}s2;

typedef struct{
    char c;
    char c2;
    int val;
}s3;

typedef struct{
    int val;
    char c;
    double d;
    float f;
}s4;

typedef struct{
    double d;
    long long val;
}s5;

int main(){
    
    printf("S1 size: %ld\n",sizeof(s1));
    printf("S2 size: %ld\n",sizeof(s2));
    printf("S3 size: %ld\n",sizeof(s3));
    printf("S4 size: %ld\n",sizeof(s4));
    printf("S5 size: %ld\n",sizeof(s5));

    return 0;

}