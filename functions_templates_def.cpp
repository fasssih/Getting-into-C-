#include <iostream>
using namespace std;

//global variables
int num = 3;
namespace second{
    int num = 22;
}
struct cars
{
    string model;
    int year;
    char prefix;
};
//A class is a blueprint/template that tells what an object should have and what it can do
// whereas an object is an intance of a class containing its own attributes and methods
class human{
    //declaring it public otherwise it would be considered private by default 
    public:
    string name;
    int age;
    double salary;
    void cook(){
        cout<<"\nHe can cook";
    }
    void eat(){
        cout<<"\nhe can eat";
    }
    void clean(){
        cout<<"\nHe can clean";
    }
};
class vehicle{
    public:
    /*So here we created default attributes for an object so that if you don't 
    enter any attribute manually and declare an object and print it's attributs 
    the default ones would come out*/
        string make = "Bayreche motoren verke";
        string model = "M4";
        int year = 2015;
        //constructor in an special function in a class that automatically runs when an object is created
        vehicle(string make, string model, int year){
            //This operator is used to access current objects members
            this->make = make;
            this->model = model;
            this->year = year;
        }
        void acc(){
            cout<<"\nYou stepped on the gas of"<<model;
        }
        void brake(){
            cout<<"\nYou stepped on the brake";
        }
};
class pizza{
    public:
        string topping;
        string topping2;
        string topping3;
        
        //creating overloaded constructors
        pizza(){
            //this constructor function is empty so we can declare an object without assigning values to it
        }
        pizza(string topping){
            this->topping  = topping;
        }
        pizza(string topping,string topping2){
        this->topping  = topping;
        this->topping2 = topping2;
        }
        pizza(string topping, string topping2, string topping3){
        this->topping  = topping;
        this->topping2 = topping2;
        this->topping3 = topping3;
        }
};
class room{
    private: 
        int temp = 0;
    public:
        room(int temp){
            settemp(temp);
        }
    void settemp(int temp){
        if(temp<=0){
            this-> temp = 0;
        }else if(temp>=10){
            this-> temp = 10;
        }else{
            this->temp = temp;
        }
    }
    int givetemp(){
        return temp;
    }
};
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
void printcar(cars &car); // By using the reference operator we can print addresses of more than one items
int fact(int num);
template <typename T> 
// Template can be used to generate as many 
//overloaded functions as needed of different datatypes 
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
    
    //passing struct values to a function 
    cars car1;
    car1.model = "BMW M4";
    car1.prefix = 'M';
    car1.year = 1992;

    cars car2;
    car2.model = "Mercedes benz";
    car2.prefix = 'C';
    car2.year = 2021;

    printcar(car1);
    printcar(car2);

    //Accessing and assigning values to different attributes of objects human1 and human2
    human human1;
    human1.name = "ricky";
    human1.age = 23;
    human1.salary = 123.23;

    cout<<"\nHis names is "<<human1.name;
    cout<<"\nHis age is "<<human1.age;
    cout<<"\nHis salary is "<<human1.salary;
    human1.eat();
    human1.cook();
    human1.clean();

    //Accessing and assigning values to different attributes of objects of vehicle class
    vehicle gadi("BMW","M4",8280);
    vehicle gadi2("BMW","M4",9289);
    cout<<"\n"<<gadi.year<<" "<<gadi.model<<" "<<gadi.make;
    cout<<"\n"<<gadi2.year<<" "<<gadi2.model<<" "<<gadi2.make;
    gadi.acc();
    gadi2.brake();

    //Assigning values to the objects of a class with overloaded constructors
    pizza pizza1;
    pizza pizza2("Pepperoni");
    pizza pizza3("Pepperoni","chamba khoni");
    pizza pizza4("Pepperoni","chamba khoni","Samba khoni");

    cout<<"\nHere is your first "<<pizza2.topping<<" pizza";
    cout<<"\nHere is your second "<<pizza3.topping<<" and "<<pizza3.topping2<<" pizza";
    cout<<"\nHere is your first "<<pizza4.topping<<","<<pizza4.topping2<<" and "<<pizza4.topping3<<" pizza";


    room r1(4);
    cout<<r1.givetemp();

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
void printcar(cars &car){
    cout<<'\n'<<&car;
    cout<<"\n"<<car.model<<"\n"<<car.prefix<<"\n"<<car.year;
}
