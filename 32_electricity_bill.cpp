#include <iostream>

using namespace std;

int main()
{
    int unit;
    double charge;
    cout << "ENTER THE UNIT OF CURRENT USED : " << endl;
    cin>>unit;
    if(unit<=100)
    {
        charge=unit*10;
        cout<<"YOUR TOTAL BILL IS "<<charge<<endl;
    }
    if(unit<=200)
    {
        charge=(100*10)+(unit-100)*20;
        cout<<"YOUR TOTAL BILL IS "<<charge<<endl;
    }
    if(unit<=300)
    {
        charge=(100*10) + (100*20) + (unit-200)*30;
        cout<<"YOUR TOTAL BILL IS "<<charge<<endl;
    }
    if(unit>300)
    {
        charge=(100*10) + (100*20) + (100*30) + (unit-300)*40;
        cout<<"YOUR TOTAL BILL IS "<<charge<<endl;
    }
    return 0;
}
