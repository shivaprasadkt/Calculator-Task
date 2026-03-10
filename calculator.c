#include<Stdio.h>

int Addnum(int a,int b){
    return a+b;
}

int Subnum(int a,int b){
    return a-b;
}

int Mulnum(int a,int b){
    return a*b;
}

int Divnum(int a,int b){
    if(b!=0){
        return a/b;
    }
    printf("Division by zero is not possible!!!");
    return ;
}