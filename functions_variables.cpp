#include <iostream>
using namespace std;

//global variables
int num = 3;

namespace second{
    int num = 22;
}

// function declarations
void bakingpitza();
void bakingpitza(std::string topping);
void bakingpitza(std::string topping, std::string topping2);
double square(double length);
double cube(double length);
void happy(string boi, int age);
string concatstring(string string1, string string2);
void printinfo(const int age2, const string name);
void walked(int steps);
void walk(int steps);
int fact(int num);
template <typename T>
T maximum(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    //local variable
    int num = 4;
    cout<< '\n'<< num;
    cout<< '\n'<<::num;
    cout<< '\n'<<second::num;
    
    //a function is a block of reusable code
    //void means returns nothing
    string boi = "Ali";
    int age = 18;
    happy(boi,age);

    // to return a double we use double as a function
    double length = 5;
    double area = square(length);
    cout<< "Area is "<< area << endl;
    double volume = cube(length);
    cout<< "volume is " << volume;
    string firstname = "Bhaiyya";
    string lastname = "vastaganahuiyya";
    string fullname = concatstring(firstname, lastname);
    cout<< "\nHello "<< fullname;

    //overloaded functions are fuctions with the same calling name but different set of parameters
    string topping = "pepperoni";
    string topping2 = "mamamia";
    bakingpitza(topping,topping2);

    /* function template in C++ lets you write a function that helps you work with 
    different data types*/
    
    
    //Const parameter is effectively read only, code is more secure and conveys useful intent for pointers and references
    int age2  = 23;
    string name = "vastagana";
    printinfo(age,name);

    // Iteration : ik iteration it can be done using loops

    /*Recursion in C++ is a way of solving a problem by having a function 
    call itself with a smaller/simpler version of the same problem, until
    it reaches a stopping condition (base case).*/

    walk(5);
    walked(5);
    cout<<fact(5);
    cout<<'\n'<<"Here you go : "<<maximum(3,5); // this function is returning the 
    // output whereas sometimes the output or trucated or changed due to which we use 
    // a function template
    cout<<'\n'<<"Here you go : "<<maximum(3.433,3.4439);
    cout<<'\n'<<"Here you go : "<<maximum('3','4');
    cout<<'\n'<<"Here you go : "<<maximum(3.433,3.4439);

}

//ALL FUNCTIONS
void happy(string boi, int age){
    cout<< "\nHappy birthday to "<< boi;
    cout<< "\nHappy birthday dear "<< boi;
    cout<< "\nHappy "<< age << "th birthday dear "<< boi<< endl;
}
double square(double length){
    return length*length;
}
double cube(double length){
    return length*length*length;
}
string concatstring(string string1, string string2){
    return string1 + " " + string2;
}
void bakingpitza(){
    cout << endl <<"Here is your pizza";
}
void bakingpitza(std::string topping){
    cout << endl << "Here is your "<< topping<< " pizza";
}
void bakingpitza(std::string topping, std::string topping2){
    cout << endl<<"Here is your "<<topping2 << " and "<< topping <<  " pizza";
}
void printinfo(const int age2, const string name){
    cout<< "\nHere is your age "<< age2;
    cout<< "\n Here is your name "<< name;
}
void walk(int steps){
    for(int i = 0;i < steps;i++){
        cout<<"you took a step!\n";
    }
}
void walked(int steps){
    if(steps>0){
        cout<<"You took a damn step ! \n";
        walked(steps - 1);
    }
}
int fact(int num){

    if(num>1){
        return num*fact(num - 1);
    }else{
        return 1;
    }
}