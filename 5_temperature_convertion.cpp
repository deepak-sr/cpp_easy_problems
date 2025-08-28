#include <iostream>

using namespace std;

int main()
{
    float celsius,fh;
    cout << "ENTER THE TEMPERATURE IN CELSIUS" << endl;
    cin >> celsius;
    fh = ((9.0/5.0 * celsius) + 32.0);
    cout << celsius <<" DEGREE CELSIUS = "<<fh<<" DEGREE FAHRENHEIT"<< endl;
}
