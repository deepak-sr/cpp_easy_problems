#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,dis,x1,x2;
    cout << "ENTER THE VALUE OF A,B AND C : " << endl;
    cin>>a>>b>>c;
    dis=(b*b-4*a*c);
    x1=((- b + sqrt(dis))/2*a);
    x2=(-b- sqrt(dis))/2*a;
    cout<<"ROOTS ARE "<<x1<<" AND "<<x2<<endl;
    return 0;
}
