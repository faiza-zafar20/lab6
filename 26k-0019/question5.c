#include<stdio.h>
int main(){
    int n;
    printf("enter en integer n \n");
    scanf("%d", &n);
    long long res = 1;
    for(int i=0; i<n; i++){
        res = res * (2*n - i);
    res = res / (i + 1);
    }
    long long catalan = res / (n + 1);
    printf("catalan number c%d = %11d\n",n, catalan);
    return 0;
}