#include<stdio.h>
int main(){
    int code;
    int temp, digit, rev=0;
    printf("enter book code");
    scanf("%d", &code);
   temp =code;
   while(temp>0){
    digit = temp %10;
    rev = rev * 10 + digit;
    temp=temp/10;

   }
   if(rev == code){
    printf("the code is palindrome", code);

   }
   else{
    printf("the code is not a palindrome", code);
   }
    
return 0;
}
