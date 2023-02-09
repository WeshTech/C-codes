#include <iostream>
using namespace std;

namespace Alex
{
    class vehicle
    {
        private:
            string car_plate;
            string vehicle_type;
        public:
        vehicle(string car_plate,string vehicle_type) : car_plate(car_plate) ,vehicle_type(vehicle_type) {}
        
            void print()
                {
                    cout << "We are printing the plate and the type of the vehicle " << endl << endl;
                    cout << "The vahicle type is " << vehicle_type << "And the numberplate is " << car_plate << endl << endl << endl; 
                }

    };
}
namespace david
{
    class vehicle
    {
         private:
            string car_plate;
            string vehicle_type;
        public:
        vehicle(string car_plate,string vehicle_type) : car_plate(car_plate) ,vehicle_type(vehicle_type) {}
        
                void print()
                {
                    cout << "We are printing the plate and the type of the vehicle " << endl << endl;
                    cout << "The vahicle type is " << vehicle_type << "And the numberplate is " << car_plate << endl << endl << endl; 
                }
        
    };
}
int main()
{
    cout << "Welcome to this magnificient system created by david waweru " << endl << endl << endl;
    int m;
    cout << "Enter the name of the person you would will to register his details and click enter key to proceed" << endl <<endl;
    string name;
    getline(cin, name);
            if (name == "Alex")
            {
                string car_plate;
                string car_type;
                cout << "Enter his vehicle type and click enter " << endl;
                getline(cin, car_type);
                cout << "Enter the vehicle plate number and click enter to proceed " << endl;
                getline(cin, car_plate);
                Alex :: vehicle(car_plate, car_type);
                Alex :: vehicle reg; reg.print();
            }
}