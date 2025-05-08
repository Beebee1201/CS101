#include <iostream>
#include <string>
using namespace std;
class Car{
    private:
    int maxSeat;
    int price;
    void updatePrice(int base = 500000){
        price = maxSeat * base;
    }
    protected:
    string driveMode;
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z,int s){
        brand = x;
        model = y;
        year = z;
        maxSeat = s;
        updatePrice();
        driveMode = "No-wheel";
    }
    int get_maxSeat(){
        return maxSeat;
    }
    int get_price(){
        return price;
    }
    string get_driveMode(){
        return driveMode;
    }
};
class audi : public Car{
    public:
    audi(string y, int z, int s) : Car("audi",y,z,s){
        cout << "constructing audi\n";
        driveMode = "Front-wheel";
    }
    string get_driveMode(){
        return driveMode;
    }
};
class BMW : public Car{
    public:
    BMW(string y, int z, int s) : Car("BMW",y,z,s){
        cout << "constructing BMW\n";
        driveMode = "Rear-wheel";
    }
    string get_driveMode(){
        return driveMode;
    }
};
class Benz : public Car{
    public:
    Benz(string y, int z, int s) : Car("Benz",y,z,s){
        cout << "constructing Benz\n";
        driveMode = "Front-wheel";
    }
    string get_driveMode(){
        return driveMode;
    }
};


int main(){
    Car car1("CGU","CSIE",2023,4);
    cout << car1.brand;
    cout << " : Drive Mode = " << car1.get_driveMode() << endl;
    BMW car3("pp",2020,12);
    cout << car3.brand;
    cout << " : Drive Mode = " << car3.get_driveMode() << endl;
    audi car4("pp",2020,12);
    cout << car4.brand;
    cout << " : Drive Mode = " << car4.get_driveMode() << endl;
    Benz car2("pp",2020,12);
    cout << car2.brand;
    cout << " : Drive Mode = " << car2.get_driveMode() << endl;

    return 0;
}
