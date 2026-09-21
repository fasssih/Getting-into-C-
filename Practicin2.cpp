#include <iostream>

void swap(std::string &x,std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}
int main()

{
    // we were reffering to the copies of the values of x,y that is why for that purpose we used & operator to keep the track
    std::string x = "cold drink";
    std::string y = "water";
    std::cout<<"X: "<<x <<" Y: "<<y;
    swap(x,y);
    std::cout<<"\nvalues after swapping ";
    std::cout<<"X: "<<x <<" Y: "<<y;
}