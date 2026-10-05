#include<stdio.h>
int main(){
    char word[100];
    char reverse[100];
    printf("enter a word:");
    scanf("%s", word);
    printf("original word: %s\n",word);
    int length =0;
    while(word[length]!= '\0'){
        length++;

    }
    printf("length: %d\n", length);
    for(int i=0; i<length; i++){
        reverse[i] = word [length-1-i];

    }
    reverse[length] = '\0';
    printf("reversed word: %s\n", reverse);
    int palindrome = 1;
    for(int i=0; i<length/2; i++){
        if(word[i]!=word[length-1-i]){
            palindrome = 0;
              break;
        }
    }
        if(palindrome){
        printf("it is palindrome\n");
        }
    else{
        printf("it is not a palindrome\n");
    }
    int vowels=0, consonants=0;
    for(int i=0; i<length; i++){
        char ch = word[i];
        if(ch >= 'A' && ch<='Z'){
            ch=ch+32;

        }
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            vowels++;
        } 
        else if((ch>='a' && ch<='z')){
            consonants++;
        }
    }
    printf("vowels: %d\n", vowels);
    printf("cosonants: %d\n", consonants);


    
    return 0;
}

