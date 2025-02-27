#include <stdio.h>

int main()
{
    char a[] = "A4B1C3f3"; 
    
    int c = 0;
    for (int i = 0;i<sizeof(a)-1;i = i + 2){
        for (int j = 0;j<((int)a[i+1]-48);j++){
            printf("%c",a[i]);
        }
    }

    return 0;
}
