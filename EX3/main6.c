
#include <stdio.h>

int main()
{
    int m,i = 1540;
    if (i<=1500){
        m = 70;
    }
    else{
        if (i%100){
            m = ((i-1500)/100)*10 + 10+70;
        }
        else{
            m = ((i-1500)/100)*10+70;
        }
    }

    printf("%d 元",m);
    
    
    return 0;
}
