#include <stdio.h>

int main()
{
    int i = 10;
    if (i & (i-1)){
        printf("否");
    }
        
    else{
        printf("是");
    }
    
    return 0;
}
