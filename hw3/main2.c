

#include <stdio.h>
#include <string.h>
void replace_all(char* str, char oldChar, char newChar){
    for(int i = 0;i<strlen(str);i++){
        if (str[i] == oldChar){
            str[i] = newChar;
        }
    }
}

int main(){
    char str[100], oldChar = 'a', newChar = 'A';
    scanf("%s", str);

    replace_all(str, oldChar, newChar);
    printf("%s", str);

    return 0;
}
