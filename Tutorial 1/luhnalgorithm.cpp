#include <iostream>
using namespace std;

int getdigit(string cardnumber);
int sumodddigits(string cardnumber);
int sumevendigit(string cardnumber);

int main()
{
    string cardnumber;
    int result = 0;
    cout<<"Enter your card number: ";
    cin>>cardnumber;
    result = sumevendigit(cardnumber) + sumodddigits(cardnumber);
    if(result%10 == 0){
        cout<<"Your card number is valid!";
    }else{
        cout<<"Your card number is not valid!";
    }

}
int getdigit(int const number){
    return number/10 + number%10;
}
int sumodddigits(string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size()-1;i>=0;i-=2){
        sum += getdigit(cardnumber[i]-'0');

    }
    return sum;
}
int sumevendigit(string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size()-2;i>=0;i-=2){
        sum += getdigit((cardnumber[i]-'0')*2);

    }
    return sum;
}