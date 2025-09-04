#include <iostream>

using namespace std;

int main()
{
    int w;
    cout << "ENTER THE DAY (1-7) : " << endl;
    cin>>w;
    if(w>=1 && w<=7)
    {
        switch(w)
        {
        case 1:
            cout<<"SUNDAY"<<endl;
            break;
        case 2:
            cout<<"MONDAY"<<endl;
            break;
        case 3:
            cout<<"TUESDAY"<<endl;
            break;
        case 4:
            cout<<"WEDNESDAY"<<endl;
            break;
        case 5:
            cout<<"THURSDAY"<<endl;
            break;
        case 6:
            cout<<"FRIDAY"<<endl;
            break;
        case 7:
            cout<<"SATURDAY"<<endl;
            break;
        }

    }
    else
    {
        cout<<"INVALID DAY"<<endl;
    }
    return 0;
}
