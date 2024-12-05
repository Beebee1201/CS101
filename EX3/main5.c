#include <stdio.h>

int main()
{
    int i = 99;
    if (i<=30){
        printf("免費");
    }
    else if (i>240){
        i = 240;
    }
    else if (i%30){
        i = (i/30)*30+30;
    }
    printf("%d 元",i);
    
    
    return 0;
}
