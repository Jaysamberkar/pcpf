#include<stdio.h>

void callbyvalue(int a){
    a--;
    printf("value after c all by value : %d\n",a);
}

void callbyreference(int *a){
    (*a)--;
    printf("value after call by reference : %d \n",*a);
}

int main(){
    int x;
    printf("enter a number : \n");
    scanf("%d",&x);
    printf("original value of variable : %d\n",x);
    callbyvalue(x);
    callbyreference(&x);

}