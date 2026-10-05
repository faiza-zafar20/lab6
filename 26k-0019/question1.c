#include<stdio.h>
    int main(){
        int pin;
        printf("enter 4 digit pin \n");
        scanf("%d", &pin);
        int sum = 0;
        int temp = pin;
        while (temp > 0)
        {
            int digit = temp % 10;
            sum = sum + digit;
            temp = temp / 10;
        }
        printf("the sum is %d\n",sum);
        if(sum>10){
            printf("the pin is strong\n");
        }
        else{
            printf("the pin is weak\n");
        }
        return 0;
    }
    
