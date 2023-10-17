
#include <iostream>
using namespace std;

class Room {

   public:
    double length=42.5;
    double breadth=30.8;
    double height=19.2;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    Room room1;

   
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}
