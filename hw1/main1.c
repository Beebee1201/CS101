#include <stdio.h>

int main()
{
    char a[] = "AABBBCCCCddd"; 
    
    int c = 0;
    for (int i = 0;i<sizeof(a)-1;i++){
        if (a[i] == a[i+1]){
            c++;
        }
        else{
            printf("%c%d",a[i],c+1);
            c = 0;
        }
    }

    return 0;
}
