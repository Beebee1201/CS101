#include <stdio.h>
#include <math.h> 

int main() {
    double pi = 4.0;
    int count = 0, ipi;
    for(int i = 3;;i+=2){
 
        if(count%2 ==1){
            pi = pi+(4.0/i);
        }
        else{
            pi = pi-(4.0/i);
        }
        count++;
        ipi = pi*100000;
        if(ipi == 314159){
            break;
        }
    }
    printf("%d",(count*2)+1);
    
    return 0;
}
