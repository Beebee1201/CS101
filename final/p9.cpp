#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

class Decoder{
    public:
    string str;
    Decoder(string str){
        this->str = str;
    }
    string get_d(){
        int c = 0;
        string ans = ""; 
        for(int i=0;i<str.length();i++){
            if((str[i]<='9') && (str[i]>='0')){
                for(int j=0;j<(int)(str[i]-'0');j++){
                    ans.append(str.substr(c,i-c));
                }
                c = i+1;
                
            }
        }
        return ans;
    }

};
int main(){
    Decoder d("A3BB2CCC2");
    cout<<d.get_d();
    return 0;
}