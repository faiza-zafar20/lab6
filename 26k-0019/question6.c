#include<stdio.h>  
int main(){
    int num;
    int even=0;
    int odd=0;
    printf("enter your reading number");
    scanf("%d", &num);
    int temp = num;
    while(temp>0){
        int digit =temp%10;
        if(digit%2==0){
            even++;
        }
         else {
            odd++;
         }
             
     temp=temp/10;
        
    }
    printf("the total even digits are %d\n", even);
    printf("the total odd digits are %d\n", odd);

    return 0;
}