#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;

int f(int n){
    if (n==1) return 1;
    else if (n==0) return 0;
    
    else{
        return f(n-1)+f(n-2);
    }
}
int main(){
    printf("%d",f(20));
    return 0;
}