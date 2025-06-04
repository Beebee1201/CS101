
#include <iostream>
#include <string>
using namespace std;

int a = 0;

int reverse(int n){
    if(n<10){
        return a*10+n;
    }
    else{
        a = a*10;
        a=a+(n%10);
        return reverse(n/10);
    }
}
int main(){
    printf("%d",reverse(3243227));

    return 0;
}