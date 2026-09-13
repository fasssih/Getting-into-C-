#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
/*
// creating an alias for a data type
typedef std::vector<std::pair<std::string, int>> call;
typedef std::string ors;
//typedef is an old C++ keyword used to create an alias(another name) for an existing keyword
using u = int;
// using is a keyword used to create another name for an existing data type
*/
int main()
{
    /*
    ors champ = "jkfdkj";
    cout<< "lests go " << champ << '\n';
    u b = 20;
    const double E = 2.71;
    cout<< E;
    // arithmatic operations

    //b=b+1;
    //b-=1;
    //b--;
    //b+=1;
    //b++;
    //b*=2;
    //b/=3;
    float remainder = b%3;
    cout << remainder;

    //Operator precedence in C++
    int sol = (9)*8+5/5+16-9;
    cout<<'\n'<< sol;

    //Implicit and explicit datatype conversion
    char x = 100;
    double bi = (int) 3.14;
    cout<< '\n'<< x;
    cout<< '\n'<< bi;
    

    // at first if we write this code it would only take marks for input and skip the name but after using >>ws it was solved 
    double x;
    string name;
    cout<< "enter your Marks of Matriculation : ";
    cin>> x;
    cout<< "enter your full name : ";
    getline(cin>>ws ,name);
    
    cout << "your name is : " << name << " your marks are : "<< x;
    
    if(name.length() > 12){
        cout<< "Your name is more in characters than 12 ";

    }
    else{
        cout<< "Hello " << name;
    }
    if(name.empty()){
        cout<< "you didn't entered your name! ";
    }
    else{
        cout<< "\nAyo wassup "<< name;
    }
    
    string name;
    cout<< "enter your name conjusted in lowercase boss : ";
    getline(cin,name);
    //name.clear();
    //name.append("@gmail.com");
    //cout<<name.at(0);
    //cout << name.insert(0,"$");
    //cout << name.find(f);
    //name.erase(0,2);

    while (name.empty())
    {
        cout<< "Why didn't you entered your name";
        cout<< "\nenter your name";
        getline(cin,name);
    }
    
    int num;
    while(num<0){
        cout<< "enter a positive number : ";
        cin>> num;
    }
    cout<< "your number is : "<< num;
    //this code fails until we don't write some extra lines of code
    
    
    //break and continue statement 
    for(int i=1;i<10;i++){
        if(i==8){
            continue;;
        }
        cout<< "\n lets go "<< i;
    }
    for(int i=1;i<10;i++){
        if(i==8){
            break;;;
        }
        cout<< "\n lets go "<< i;
    }
    
   
    // a Memory address is a location in memory where data is stored
    // & is used to access memory addresss called address of operator

    std::string bhai = "Bhaiyyah vastaganahuiyya! ";
    */
    

    // * asterisk is used for multiplication, pointer variable, pointer modification and as a dereference operator
    // pointer variable is used to point to the address of a variable
    // dereference operator is used to get the value stored at the address held by a pointer

    int x = 3*5;

    int q = 7;
    int *p = &q;
    cout<<p;

    int o = 98;
    int *po = &o;
    *po = 100;
    cout<<o;

    int y = 8;
    int*pq = &y;
    cout<<'\n'<<*pq;

    string array[] = {"Helo1","Helo2","Helo3","Helo4","Helo5"};
    string (*pbhai)[5] = &array;
    cout<<'\n'<<*pbhai;

    // a null pointer (nullptr) is a  pointer that is intentionally set to point to nothing 
    int *ptr = nullptr;
    ptr = &y;
    cout<<"\nNUll pointer : "<<ptr;

}
