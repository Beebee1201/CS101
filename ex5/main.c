#include <iostream>


class Car{
    private:
    string driveMode;
    int maxSeat;
    int price;
    void updatePrice(int base = 500000){
        price = maxSeat * base;
    }
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
    audi(str )
}


int main()
{
    std::cout<<"Hello World";

    return 0;
}
