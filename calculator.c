#include<Stdio.h>
#include<math.h>

int Addnum(int a,int b){
    int res=a+b;
    return res;
}

int Subnum(int a,int b){
    int res=a-b;
    return res;
}

int Mulnum(int a,int b){
    int res=a*b;
    return res;
}

int Divnum(int a,int b){
    if(b!=0){
        float res=a/b;
        return res;
    }
    printf("Division by zero is not possible!!!");
    return ;
}

int Expnum(int a,int b){
    int res=pow(a,b);
    return res;
}

int Rootnum(int a,int b){
    float res1=sqrt(a);
    float res2=sqrt(b);
    printf("Square root of number 1=%d",res1);
    printf("Square root of number 2=%d",res2);
}