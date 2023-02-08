#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int *ptr = &x;
    *ptr = 6;
    int **q = &ptr;
    int ***r = &q;

    printf("%d\n",*ptr);
    printf("%d\n",*q);
    printf("%d\n",**q);
    printf("%d\n",**r);
    printf("%d\n",***r);
    printf("%d\n\n",&q);
    printf("%d\n\n",&ptr);
    printf("%d\n\n",&x);
    printf("%d\n\n",&r);
}