#include <iostream>

using namespace std;

int main()
{
    double pamount,irate,time,si;
    cout << "ENTER THE PRINCIPAL AMOUNT : " << endl;
    cin>>pamount;
    cout << "ENTER THE ANNUAL INTEREST RATE % : " << endl;
    cin>>irate;
    cout << "ENTER THE TIME PERIOD IN YEARS : " << endl;
    cin>>time;
    si=((pamount * irate * time) / 100);
    cout << "SIMPLE INTEREST =" <<si<< endl;
    return 0;
}
