#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    
    //srand =  seed random number generator , time is used to get the current time , NULL is used to just return the current time don't share it somewhere else
    //use the current time as the starting seed for random number generator
    int num1,num2,num3;
    srand(time(0));
    num1 = (rand() % 6)+1;
    num2 = (rand() % 6)+1;
    num3 = (rand() % 6)+1;
    cout<< "here are nums after rolling a dice 3 times :" << "\n"<< num1 << "\n"<< num2 << "\n" << num3<< "\n";
    
    //time(0) = time(NULL)
    srand(time(0));
    int randnum = (rand() % 4) +1;
    switch (randnum)
    {
    case 1:
        cout<< "Spring";
        break;
    case 2:
        cout<< "Summer";
        break;
    case 3:
        cout<< "Autumn";
        break;
    case 4:
        cout<< "Winter";
    
    default:
        break;
    }
    
     


}