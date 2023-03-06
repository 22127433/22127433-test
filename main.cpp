#include <iostream>
using namespace std;

int main()
{
    double x = 0.01;
    unsigned char* bytes = (unsigned char*)(&x);
    cout <<hex << bytes << " " << hex << *bytes;
    return 0; 
}