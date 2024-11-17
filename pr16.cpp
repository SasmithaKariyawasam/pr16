#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the value: ";
    cin>>x;


    double si = sin(x);
    double co = cos(x);
    double ta = tan(x);
    double ab = abs(x);


    cout<<"sin is: "<<si<<endl;
    cout<<"cos is: "<<co<<endl;
    cout<<"tan is: "<<ta<<endl;
    cout<<"absolute is: "<<ab;
    return 0;
}

