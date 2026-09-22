#include <iostream>
#include <ctime>
using namespace std;



int main()
{
    //for loop
    for (int i = 0; i < 9; i++){
        cout<< "les go"
    };
    //Nested loops
   
    for(int i=5;i>=1;i--){
        for(int j=1; j<=i; j++){
            cout<< "*";
        }
        cout<<'\n';
    }
    
    //do while
    int o;
    do
    {
        cout<<"Enter a # :";
        cin>> o;
    } while (o<0);
    cout<<"your number is "<< o<< endl;
    
    //practicing
    int x,y;
    do
    {
        cout<< "Enter a positive number: ";
        cin>> x;
    } while (x<0);

    int p;
    cout<< "enter an even number: ";
    cin>> p;

    //while
    while (p % 2 != 0)
    {
        cout<< "enter an even number: ";
        cin>> p;
    }
    
    for(int i=5; i>=1; i--){
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    
    
}
