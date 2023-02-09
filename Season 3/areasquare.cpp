#include <iostream>

using namespace std;

class square
{
    private:
        int length;
        static int counter;

        public:
    square(int len)
    {
        length = len;
        cout << "The assigned length is :: " << length << endl << endl << endl;
        area();
        counter +=1;
        
    }
    void area()
    {
        int area = length * length;
        cout << "The area of the circle is:: " << area << endl;
        count();
    }
    static int count()
    {
        cout << "The number of computed squares so far is:: " << counter;
    }

    
};

int square::counter = 0;

int main()
{
    square s1(5);
    square s2(10);
    square s3 (20); 
    s1.count();
    
    return 0;
}