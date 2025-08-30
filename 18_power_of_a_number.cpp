#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num,pv;
    double power;
    cout << "ENTER THE NUMBER : " << endl;
    cin>>num;
    cout << "ENTER THE EXPONENT : " << endl;
    cin>>pv;
    power=pow(num,pv);
    cout <<num<< " RAISED TO THE POWER OF "<<pv <<" IS "<<power<< endl;
    return 0;
}
