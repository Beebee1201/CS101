#include <stdio.h>

void f(int n,char from,char to,char aux){
    if(n == 1){
        printf("\nmove disk 1 from rod %c to rod %c",from,to);
        return;
    }
    f(n-1,from,aux,to);
    printf("\nmove disk %d from rod %c to rod %c",n,from,to);
    f(n-1,from,to,aux);
}

int main(){
    int n = 3;
    f(n,"a","b","c");
    return 0;
}
