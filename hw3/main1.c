
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *file2 = fopen("win.txt", "w");
    FILE *file = fopen("lotto.txt", "r");
    char b[30];
    fgets(b,30,file);
    for(int i=0;i<6;i++){
        fgets(b,30,file);
        if(strstr(b,"02")||strstr(b,"04")||strstr(b,"06")){
            fprintf(file2,"%s",b);
        }
    }
    

    fclose(file);
    fclose(file2);
    return 0;
}
