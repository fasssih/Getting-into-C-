#include <iostream>
#include <ctime>
using namespace std;

/*Commits on Aug 10, 2026*/
using ors = int;
namespace first{
    int x = 10;
}namespace second{
    int x = 15;
}
typedef std::string ors_t;
int main()
{
    //Commits on Aug 9, 2026
    ors_t chalo;
    cout<<"Enter your first word!";
    cin>>chalo;
    cout<<"Here is your first word to start with "<<chalo;

    //Commits on Aug 10, 2026
    ors x = 5;
    cout<<"\n"<<x;
    cout<<"\n"<<second::x;
    cout<<"\n"<<first::x;
    
    //Commits on Aug 11,12 2026
    int y;
    cout<<"\nEnter your marks obtained: ";
    cin>>y;
    string name;
    cout<<"\nEnter your full name: ";
    getline(cin>>ws,name);
    double per = (y/510) *100;
    cout<<'\n'<<name<<" Got "<<per<<"% in his matriculatoin";

    //Commits on Aug 13, 2026
    
}  