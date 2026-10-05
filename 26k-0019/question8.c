#include<stdio.h>
int main(){
    int arr[8];
    int n=8;
    printf("enter 8 elements\n");
    for(int i=0; i<8; i++){
        scanf("%d", &arr[i]);
    }
    printf("\narray:");
    for(int i=0; i<8; i++){
        printf("%d",arr[i]);
    }
    int largest = arr[0], smallest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > largest)largest = arr[i];
    if(arr[i] < smallest) smallest = arr[i];

        }
        printf("\nlargest =%d \nsmallest= %d\n",largest, smallest);
    int search, found=0;
    printf("enter number for search\n");
    scanf("%d", &search);
    for(int i=0; i<n; i++){
        if(arr[i]==search){
            printf("found at index %d\n", i);
            found = 1;
            break;
            }
        }
        if(!found){
            printf("not found\n");
        }
       int insert_index,insert_value;
       printf("enter index to enter (0-7)and it's value: ");
       scanf("%d %d", &insert_index, &insert_value);
       for(int i=n; i>insert_index; i--){
        arr[i]= arr[i-1];

       }
       arr[insert_index]=insert_value;
       n++;
       printf("array after insertion: ");
       for(int i=0; i<n; i++){
        printf("%d", arr[i]);
       }
       int delindex;
       printf("enter index to delete: ");
       scanf("%d", &delindex);
       for(int i=delindex; i<n-1; i++){
        arr[i] = arr[i+1];

       }
       n--;
       printf("final array");
       for(int i=0; i<n; i++){
        printf("%d", arr[i]);
       }
    return 0;

    }
        


    



