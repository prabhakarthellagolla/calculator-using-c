#include<stdio.h>
int add(int a,int b){
    printf("the sum is :%d\n",a+b);\
    return 0;}
int sub(int a,int b){
    printf("the difference is:%d\n",a-b);
    return 0;}
int mul(int a,int b){
    printf("the result is : %d\n",a*b);
    return 0;}
int diiv(int a,int b){
    printf("the quotient and reminder are %f and %d respectively \n",a/b,a%b);
    return 0;}    
int inc(int a){
    int c;
    c=a+1;
    printf("the incremented value of op1 is:%d\n",c);
    return 0;}
int dec(int a){
    int c;
    c=a-1;
    printf("the decremented value of op2 is:%d\n",c);
    return 0;}
int main(){
    int op1,op2,d;
    printf("enter the no. of operations needed:");
    scanf("%d",&d);
    printf("enter the first operand:");
    scanf("%d",&op1);
    printf("enter the second operand:");
    scanf("%d",&op2);
    printf("\n");
    printf("===calculations===\n");
    switch(d){
        case 1: add(op1,op2);
                break;
        case 2: add(op1,op2);
                sub(op1,op2);
                break;
        case 3: add(op1,op2);
                sub(op1,op2);
                mul(op1,op2);
                break;
        case 4: add(op1,op2);
                sub(op1,op2);
                mul(op1,op2);
                diiv(op1,op2);
                break;
        case 5: add(op1,op2);
                sub(op1,op2);
                mul(op1,op2);
                diiv(op1,op2);
                inc(op1);
                break;
        case 6: add(op1,op2);
                sub(op1,op2);
                mul(op1,op2);
                diiv(op1,op2);
                inc(op1);
                dec(op1);
                break;
        default:printf("INVALID CHOICE");         }
    return 0;}
