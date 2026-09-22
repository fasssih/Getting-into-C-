#include <iostream>
using namespace std;
int main()
{
    double temp;
    char unit;
    cout<<"Temperature converter";
    cout<<"\n******************************";
    cout<<"\nEnter the unit to which you want to convert the temperature";
    cout<<"\nEnter 'f' for Fahrenheit ";
    cout<<"\nEnter 'c' for Celcius ";
    cin>>unit;
    if (unit=='f'||unit=='F')
    {
        cout<<"Enter temperature in celcius: ";
        cin>>temp;
        cout<<"Here is the temperature in Celcius "<<temp*1.8 +32<<"F";
    }else if(unit=='c'||unit=='C'){
        cout<<"Enter temperature in fehrenheit: ";
        cin>>temp;
        cout<<"Here is the temperature in fahrenheit "<<(temp-32)/1.8<<"F";
    }else{
        cout<<"Invalid choice";
    }
    cout<<"\n******************************";
}