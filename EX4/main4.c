#include <stdio.h>
#include <math.h> 

int main() {
    int a = 12345;
    int x,y;
    x = a%10;
    if(a<1000){
        y = 0;
        a = a-x;
        a = a+x*1000;
    }
    else{
        y = (a/1000)%10;
        a = a-x+y;
        a = a-(y*1000)+(x*1000);
    }
    
    printf("%d",a);

    return 0;
}
