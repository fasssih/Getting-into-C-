#include <iostream>
#include <ctime>
char getuserchoice();
char getcomputerchioce();
void showchioce(char choice);
void choosewinner(char player, char computer);

using namespace std;
int main()
{
    char player, computer;
    player = getuserchoice();
    cout<<"Your choice: ";
    showchioce(player);
    computer = getcomputerchioce();
    cout<< "\nComputer's choice:";
    showchioce(computer);
    choosewinner(player,computer);
    cout<<"\n**************************";

}
char getuserchoice(){
    char player;
    do
    {
        
        cout<<"Rock , Paper , Scissor game! \n";
        cout<<"**************************";
        cout<<"\n \'r\' for rock";
        cout<<"\n \'p\' for paper";
        cout<<"\n \'s\' for scissor";
        cout<<"\nEnter your choice: ";
        cin>> player;
    }while(player != 'r' && player != 'p' && player != 's');
    return player;
}
char getcomputerchioce(){
    srand(time(0));
    int num = rand() %4;
    switch (num)
    {
    case 1: return 'r';
        break;
    case 2: return 'p';
        break;
    case 3: return 's';
    default:
        break;
    }
    
}
void showchioce(char choice){
    switch (choice)
    {
    case 'r':
        cout<<" Rock!";
        break;
    case 'p':
        cout<<" Paper!";
        break;
    case 's':
        cout<<" Scissor!";
        break;
    default:
        break;
    }
    return;
}
void choosewinner(char player, char computer){
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout<<"\nIt's a tie! ";
        }else if(computer == 'p'){
            cout<<"\nYou lose!";
        }else{
            cout<<"\nYou won!";
        }
        break;
    case 'p':
        if(computer == 'p'){
            cout<<"\nIt's a tie! ";
        }else if(computer == 's'){
            cout<<"\nYou lose!";
        }
        else{
            cout<<"\nYou won!";
        }
        break;
    case 's':
        if(computer == 's'){
            cout<<"\nIt's a tie! ";
        }else if(computer == 'r'){
            cout<<"\nYou lose!";
        }else{
            cout<<"\nYou won!";
        }

    }

    
    
        
}