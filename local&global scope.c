#include<stdio.h>

 int a = 30;

int sum(int num1,int num2){
int num3;
num3 = num1+num2;
return num3;

}

int main(){
    int result,b=18;
    result = sum (a,b);
    printf("sum of local & global variable is : %d ",result);
    printf("the for loop starts : ");
    for(int i=0;i<4;i++){
        printf("%d",i);
    }
    printf("all numbers are printed correctly ");

    return 0;

}

