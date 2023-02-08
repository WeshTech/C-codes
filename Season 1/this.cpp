#include <iostream>

using namespace std;

class students
{
    public:
        int x,y,z;
    public:
    void print();
    students(int x,int y, int z)
    {
        this->x = x;
        this->y = y; 
        this->z = z;
    }
    
};
void students :: print()
    {cout  << "x = " << x << "y =  "<< y << "z =  " << z;}

int main()
{
    int m,n,b;
cout << "Enter the value of x:::" << endl;
cin >> m;
cout << "Enter the value of y :: " << endl;
cin >> n;
cout << "Enter the value of z :: " << endl;
cin >>b;
students stud(m,n,b);
stud.print();

    return 0;
}