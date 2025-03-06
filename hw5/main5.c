
#include <stdio.h>
#include <stdlib.h>
void p_sp(int i,int n){
    for(int j=0;j<i-n;j++){
        printf(" ");
    }
}
void p_num(int n){
    for(int i=0;i<n;i++){
        printf("%d ",n);
    }
    printf("\n");
}


int main()
{
    int row = 6;
    for(int i=1;i<=row;i++){
        p_sp(row,i);
        p_num(i);
    }

    return 0;
}
