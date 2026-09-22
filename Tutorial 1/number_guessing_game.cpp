#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int num,tries,guess;
    num = (rand() % 100)+1;
    tries = 0;
    cout<<"********************Number Guessing game********************";
    do
    {
        cout<< "\nEnter your guess (1-100) : ";
        cin>>guess;
        tries++;
        if(guess>num){
            cout<<"\nToo high";
        }
        else if(guess<num){
            cout<<"\nToo low";
        }
        else{
            cout<< "\nYou guessed it right its : "<< num << " with tries : " << tries;
        }
    } while (guess!= num);
    cout<<"\n************************************************";
}