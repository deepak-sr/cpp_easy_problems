#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "ENTER THE YEAR : " << endl;
    cin>>year;
    if(((year%4==0) && (year%100 !=0)) || (year%400==0))
     {

        cout <<year<< " IS A LEAP YEAR " << endl;
     }
    else
    {
        cout <<year<< " IS  NOT A LEAP YEAR " << endl;

    }
    return 0;
}
