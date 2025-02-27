#include <stdio.h>

int main()
{
    char a[] = "Hello";
    for(int i = sizeof(a)-2;i>=0;i--){
        printf("%c",a[i]);
    }


    return 0;
}
