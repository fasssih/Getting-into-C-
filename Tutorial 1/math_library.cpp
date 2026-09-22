#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double y=3.5;
    double x=2;
    double z,t;
    //z= max(x,y);
    //t= min(x,y);
    //z=pow(x,y);
    //z=sqrt(9);
    //z=abs(-2);
    //z=round(y);
    //z=ceil(y);
    //z=floor(y);
    //cout<<'\n' <<z;
    double a,b,c;
    cout<< "Enter your number A :";
    cin>> a;
    cout<< "Enter your number B :";
    cin>> b;
    a= pow(a,2);
    b= pow(b,2);
    c= sqrt(a+b);
    cout<< "Here is the side C :"<< c;

    


}