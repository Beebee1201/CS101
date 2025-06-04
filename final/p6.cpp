#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

int main(){
    FILE *file = fopen("p6.cpp","r");
    char str[100];
    int count = 0;
    while(fgets(str,100,file)){
        count += 1;
        if (strstr(str,"int main(){") != NULL){
            if(count<10) printf("0");
            printf("%d %s",count,str);
            break;
        }
    }

    return 0;
}