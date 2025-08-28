#include <iostream>

using namespace std;

int main()
{
    int length,width;
    double area;
    cout << "ENTER THE LENGTH OF THE RECTANGLE : " << endl;
    cin >> length;
    cout << "ENTER THE WIDTH OF THE RECTANGLE : " <<endl;
    cin >> width;

    area=length*width;
    cout << "AREA OF RECTANGLE = " << area<< endl;
    return 0;
}
