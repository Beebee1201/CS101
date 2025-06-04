
#include <iostream>
#include <string>
using namespace std;


class Clock{
    public:
        int hr,min,sec;
        string mode;
        Clock(int h,int m,int s,string t){
            hr = h;
            min = m;
            sec = s;
            mode = t;
        }
        void display(){
            cout<<"Clock = "<<hr<<":"<<min<<":"<<sec<<" "<<mode<<"\n";
        }

};

class CGUClock : Clock{
    using Clock::Clock;
    public:
        void display(){
            if(mode == "PM"){
                cout<<"CGUClock = "<<hr+12<<"時"<<min<<"分"<<sec<<"秒\n";
            }
            else{
                cout<<"CGUClock = "<<"時"<<min<<"分"<<sec<<"秒\n";
            }
            
        }
};
int main(){
    Clock cc(10,25,43,"AM");
    CGUClock c(1,25,43,"PM");
    cc.display();
    c.display();


    return 0;
}