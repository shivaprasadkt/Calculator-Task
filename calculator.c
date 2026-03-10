#include<stdio.h>
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

float Divnum(int a,int b){
    if(b!=0){
        return (float)a/b;
    }
    printf("Division by zero is not possible!!!\n");
    return 0;
}

int Expnum(int a,int b){
    int res=pow(a,b);
    return res;
}

void Rootnum(int a,int b){
    float res1=sqrt(a);
    float res2=sqrt(b);
    printf("Square root of number 1=%f\n",res1);
    printf("Square root of number 2=%f\n\n",res2);
}

int main(){
    int n,a,b;
    do{
        printf("------MENU------\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exponent\n6.Square root\n7.Exit\n\n");
        printf("Enter the choice[1-7]:");
        scanf("%d",&n);
        printf("Enter the 2 numbers:");
        scanf("%d %d",&a,&b);
        printf("\n");
        switch(n){
            case 1:printf("The sum is=%d\n\n",Addnum(a,b));
            break;
            case 2:printf("The difference is=%d\n\n",Subnum(a,b));
            break;
            case 3:printf("The product is=%d\n\n",Mulnum(a,b));
            break;
            case 4:printf("The result is=%f\n\n",Divnum(a,b));
            break;
            case 5:printf("The result is=%d\n\n",Expnum(a,b));
            break;
            case 6:Rootnum(a,b);
            break;
            case 7:printf("Exiting the program......\n");
            break;
            default:printf("Invalid function!!!\n\n");
        }
    }while(n!=7);
}