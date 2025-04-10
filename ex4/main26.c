#include <stdio.h>

int f(char *s){
    if (!*s) return 0;
    return 1+f(s+1);
}

int main(){
    char a[] = "IU is a girl!";
    printf("(%s) len = %d\n",a,f(a));
    return 0;
}
