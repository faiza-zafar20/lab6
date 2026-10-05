#include <stdio.h>
int main(){
    int ticketNum;
    int rev=0;
    printf("enter ticket number\n");
    scanf("%d", &ticketNum);
    int temp =ticketNum;
    while(temp > 0){
        int digit = temp %10;
        rev = rev * 10 + digit;
        temp=temp/10;
    }
printf("tivket number is: %d\n",ticketNum);
printf("reversed ticket number is: %d", rev);
return 0;

}