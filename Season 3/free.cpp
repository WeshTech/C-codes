#include <iostream>

using namespace std;

int main()
{
 static_assert(4<=sizeof(int),"Sizeof(int) too small");
}