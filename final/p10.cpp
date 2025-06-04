#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

class bin{
    public:
    string code;
    bin(string b){
        code = b;
    }
    int t(){
        int ans = 0,p = 1;

        for(int i = 3;i>=0;i--){
            if(code[i] == '1'){
                ans+=p;
            }
            p*=2;
        }
        return ans;
    }
    int t(string c){
        int ans = 0,p = 1;

        for(int i = 3;i>=0;i--){
            if(c[i] == '1'){
                ans+=p;
            }
            p*=2;
        }
        return ans;
    }
};

int main(){
    bin d("1000");
    cout<<d.t()<<"\n";
    cout<<d.t("1010")<<"\n";
    return 0;
}