#include <iostream>
#include <iomanip>
using namespace std;

void showbalance(double balance);
double withdraw(double balance);
double deposit();

int main()
{
    int choice;
    
    double balance = 123;
    do{
        cout<<"\n**************Banking app**************";
        cout<<"\n1- Show Balance";
        cout<<"\n2- Withdraw Money";
        cout<<"\n3- Deposit Money";
        cout<<"\n4- Exit";
        cout<<"\n Enter your choice : ";
        cin>>choice;
        cin.clear();
        
        switch (choice)
        {
        case 1: showbalance(balance);
            break;
        case 2: balance -= withdraw(balance);
            showbalance(balance);
            break;
        case 3: balance += deposit();
            showbalance(balance);
            break;
        case 4: cout<<"Thanks for Banking Please visit us again! ";
            break;
        default: cout<< "Invalid choice";
            break;
        }
    }while(choice!= 4);
    cout<<"\n**************************************";
}
void showbalance(double balance){
    cout<<"\nYour balance is $";
    cout<<setprecision(2);
    cout<<fixed<< balance<< '\n';
}
double withdraw(double balance){
    double amount = 0;
    cout<<"Enter amount to be withdrawn: ";
    cin>>amount;
    if (amount>balance)
    {
        cout<<"Insufficent balance\n";
        return 0;
    }
    else if(amount <= 0){
        cout<<"Invalid amount: ";
        return 0;
    }
    else{
        return amount;
    }
    
    
}
double deposit(){
    double amount;
    cout<<"Enter amount to be deposited: ";
    cin>>amount;
    if(amount>0){
        return amount;
    }
    else{
        cout<< "You entered an invalid amount! ";
        return 0;
    }
}