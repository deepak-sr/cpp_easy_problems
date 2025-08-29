#include <iostream>

using namespace std;

int main()
{
    cout << "BEFORE SWAP" << endl;
    int a=5,b=10;
    cout << "\na=" <<a<<"\nb="<<b<< endl;
    cout << "\nAFTER SWAP" << endl;
    int temp=a;
    a=b;
    b=temp;
    cout << "\na=" <<a<<"\nb="<<b<< endl;
    return 0;
}
