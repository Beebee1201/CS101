#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

class mystring{

};
class ReadClass{
    public:
    
    void showClass(){
        ifstream f("p3.cpp");
        string str;
        int count = 0;
        vector<string> list;
        // string ans;
        while(f){
            getline(f,str);
            if (str.substr(0,5) == "class"){
                count+=1;
                int i;
                for(i=0;i<str.size();i++){
                    if (str[i] == '{'){
                        break;
                    }
                }
                // ans+=str.substr(0,i)+"\n";
                list.push_back(str.substr(0,i));

            }
        }
        cout<<count<<"\n";
        for(int j = 0;j<list.size();j++){
            cout<<list[j]<<"\n";
        }
        f.close();
    }
};

int main(){
    ReadClass c;
    c.showClass();
    return 0;
}