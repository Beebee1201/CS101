#include <stdio.h>

int f(int n){
    if (n == 1) return 1;
    return n*f(n-1);
}

int main(){
    int n = 5;
    printf("factorial %d = %d\n",n,f(n));
    return 0;
}
