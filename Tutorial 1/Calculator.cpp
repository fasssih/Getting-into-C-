#include <iostream>
using namespace std;

int main()
{
    double x,y;
    char opr;
    cout<< "****************Calculator****************";
    cout<< "\nEnter your 1st number: ";
    cin>> x;
    cout<< "\nEnter your second number: ";
    cin>> y;
    cout<<"\nEnter your operator + - * / ";
    cin>>opr;

    switch (opr){
    case '+':
        cout<< " Here is the sum " << x+y;
        break;
    case'-':
        cout<< "Here is the difference " << x-y;
        break;
    case '*':
        cout << "Here is the product " << x*y;
        break;
    case '/':
        cout << "Here is the division " << x/y;
        break;
    default:
        cout <<"Invalid input! ";
        break;
    }
    cout<< "\n****************Closing Calculator*****************"   ; 
}