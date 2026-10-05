#include<stdio.h>
    int main(){
        int total=0;
        int present=0;
        int absent=0;
        for (int i=0; i<=15; i++){
            printf("write 1 for present and 0 for absent\n");
            scanf("%d", &total);
            if (total==1){
                present++;}
                else{
                    absent++;
            }
        } 

printf("the total sum of students present are %d\n", present);
printf("the total num of students absent are %d\n", absent);

return 0;
    }
