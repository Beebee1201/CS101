#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    FILE *file = fopen("output.txt","w+");
    fprintf(file,"hello, B1329054");
    fclose(file);
    return 0;
}