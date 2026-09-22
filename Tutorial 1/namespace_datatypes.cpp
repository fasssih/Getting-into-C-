#include <iostream>
#include <vector>

using namespace std;
// Enum (enumeration) is a way to create your own data type that contains a fixed set of named integer values
enum day {monday = 0, tuesday = 1, wednesday = 2,thursday = 3, friday = 4, saturday = 5,sunday = 6};
enum flavour{vanilla, chocolate, pistachio, almond, strawberry}; // If you don't numerate the values enums implicitly numerate them from zero

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
namespace third{
    int x = 3;
}
struct customers
{
    string name;
    float change;
    int payment; 
    char item;
};


int main()
{

    // Print outs of x from different namespace declarations
    std::cout << first::x<<"\n";
    std::cout << second::x<<"\n";
    std::cout << third::x<<"\n";
    cout<< "Hello world"<< '\n';
    std::cout<< "lets go\n";

    // int, float and double variables
    int x = 5;
    float y = 6.208;
    double sum = x+y;
    using namespace first;
    using namespace second;
    cout<< x;
    cout <<"\nthis is the sum "<<sum;
    
    //Chatacter and string
    char chamba = 'c';
    cout << '\n' <<chamba;
    string brooski = "\nfriday hello mate God blesss you";
    cout << "\nhello"<< brooski;

    //boolean function always returns answer in true or false
    bool a = true;
    bool b = false;

    //storing constants
    const int pi = 3.14519;
    const int radius = 3;
    int circum = 2 * pi * radius;
    
    // a struct operator in C++ is used to group different types of data under one name
    // members can be accessed by a dot (.) also known as class member access opertor
    customers customer1;
    customer1.name = "sasha";
    customer1.payment = 120;
    customer1.change = 21.23;
    customer1.item  = 'z';
    cout<<"\nOur most strange customer "<<customer1.name<<" came and paid $"<<customer1.payment<<" for the item no. ";
    cout<<customer1.item<<" And got a change of $"<<customer1.change;

    //Using enum values in a switch statement because we can't use string values as casees in a switch statement
    day today = sunday;
    switch (today)
    {
    case sunday:
        cout<<"\nIts Sunday!";
        break;
    case monday:
        cout<<"\nIts monday!";
        break;
    case tuesday:
        cout<<"\nIts tuesday!";
        break;
    case wednesday:
        cout<<"\nIts wednesday!";
        break;
    case thursday:
        cout<<"\nIts thursday!";
        break;
    case friday:
        cout<<"\nIts friday!";
        break;
    case saturday:
        cout<<"\nIts saturday!";
        break;
    default:
        cout<<"New day";
        break;
    }
    return 0;
}