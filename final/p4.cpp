#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int my_strlen(char *s){
    if (*s == '\0'){
        return 0;
    }
    return my_strlen(s+1)+1;
}
int main(){
    char s[] = "IU is a girl!";
    printf("%s len = %d",s,my_strlen(s));

    return 0;
}