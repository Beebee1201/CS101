#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

int* clone(int* np,int n){
    int* p = (int*)calloc(n,sizeof(int));
    for(int i = 0;i<n;i++){
        p[i] = np[i];
    }
    return p;

}
void print(int* p,int n){
    for(int i = 0;i<n;i++){
        printf("%d, ",p[i]);
    }
} 

int main(){
    int n = 5;
    int np[5] = {0,1,2,3,4};
    int *p = clone(np,n);
    print(p,n);

    return 0;
}