#include <iostream>

using namespace std;
 
double gettotal(double prices[],int size);
int searcharray(int array[],int sizej, int element);
void sortarray(int numss[],int sizek);
void swap(string &x, string &y);
int main()
{
    // Array is a data structure that can hold multiple values 

    
    // We declare an array and assign them strings and doubles and different data types
    double num = 4;                   // 8 bytes of memory
    char chr1 = 'a';                  // char is gets stroed into 1 byte

    string chr2 = "i";                // string doesn't have a fixed byte size

    int num2 = 1;                     // int 4 bytes
    long long num3 = 2;               // long long 8 bytes
    long double num4 = 3.14;          // long double 8-16 bytes

    char bmws[] = {'a','b','c'};
    
    cout<<bmws[0];
    cout<<bmws[1];
    cout<<bmws[2];
    
    double numbmws[4];
    numbmws[0] = 5;
    numbmws[1] = 6;
    numbmws[2] = 7;
    numbmws[3] = 4;
    cout<<'\n'<<numbmws[0];
    cout<<'\n'<<numbmws[1];
    cout<<'\n'<<numbmws[2];
    cout<<'\n'<<numbmws[3]<< '\n';
     
    // The sizeof() function in C++ determines the size of a varible,datatype,class,object in bytes 
    cout<< sizeof(bmws)/sizeof(char) << " Elements in the char array";

    // using sizeof operater to print out strings where we don't know the size of a string array

    string ba[] = {"Burka avenger","Kabaddi khan","Asshu","Immo","Muli"};
    for(int i=0; i<sizeof(ba)/sizeof(string); i++){
        cout<<'\n'<<ba[i];

    }
    
    //for each loop is a loop that eases the traversal over an iterable dataset
    for(string b: ba){
        cout<<'\n'<<b;
        
    }

    double prices[] = {78.34,47.03,84.93};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = gettotal(prices,size);
    cout<<'\n'<<"$"<<total;
    

    // searching for a specific integer in a given array using simple for loop condition sizeof operator and function

    int index,mynum,sizej;
    int nums[] = {1,2,3,4,5,6,7,8,9,10};
    sizej = sizeof(nums)/sizeof(nums[0]);
    cout<<"\nEnter a number to search for in the given array 1-10: ";
    cin>>mynum;
    index = searcharray(nums,sizej,mynum);
    if(index!=-1){
        cout<<"\nYour number "<<mynum<<" was found at the index: "<<index;
    }else{
        cout<<"\nYour number wasn't found in the given array ";
    }

    // sorting an array through using bubble sort algorithm
    
    int numss[] = {7,3,4,6,8,9,10,2,1,5};
    int sizek = sizeof(numss)/sizeof(numss[0]);
    sortarray(numss,sizek);
    cout<<'\n';


    //fill() is used to fill a range of values with a specified value
    //syntax fill(bagin,end,value)
    for(int element: nums){
        cout<<element<<" ";
    }     
    int sizel = 99;
    string foods[sizel];
    fill(foods,foods+sizel/3,"Chamba");
    fill(foods+sizel/3,foods+(sizel/3)*2,"lapat");
    fill(foods+(sizel/3)*2,foods+sizel,"chaplak");
    for(string element:foods){
        cout<<'\n'<<element;
    }
    

    // Filling an array by taking inputs from the user
    string bmwss[5];
    int sizeb = sizeof(bmwss)/sizeof(bmwss[0]);

    for(int i=0;i<sizeb;i++){
        cout<<"Enter your bmws M model: ";
        getline(cin,bmwss[i]);
    }
    cout<<"\nYour favourite bmwss: ";
    for(string element: bmwss){
        cout<<'\n'<<element;
    }

    //Taking strings from the user and printing out the output without the space prob
    string foodss[5];
    int sizef = sizeof(foodss)/sizeof(foodss[0]);
    for(int i = 0;i<sizef;i++){
        string temp;
        cout<<"Enter your favouite food #"<<i+1<<": ";
        getline(cin,temp);
        if(temp == "q"){
            cout<<"Goodbye!\n";
            break;
        }else{
            foods[i] = temp;
        }
    }
    cout<< "Here are the Your favouite foods";
    for(int i =0; !foodss[i].empty();i++){
        cout<<'\n'<<foodss[i];
    }
    
    // Introducing Two dimentional arrays 
    string array2d[][3] = {
        {"Aiza","Ahmed","sultan"},
        {"lala","kaki","Mishcat"},
        {"Muzammil","Amina","Adi"}
    };
    int sizep = sizeof(array2d)/sizeof(array2d[0]);
    int sizeo = sizeof(array2d[0])/sizeof(array2d[0][0]);             
    cout<<sizek;

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<' '<<array2d[i][j];
        }
        cout<<"\n";
    }


    string x = "Chalo";
    string y = "bhai";
    swap(x,y);

    
    cout<<"X : "<<&x<<endl<<"Y : "<<&y;
}
double gettotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i<size;i++){
        total += prices[i];
    }
    return total;
}
int searcharray(int array[],int sizej, int element){
    for(int i = 0;i<sizej;i++){
        if(array[i]==element){
            return i;
        }
            
    }
    return -1;
}
void sortarray(int numss[],int sizek){
    int temp;
    for(int i =0;i<sizek-1;i++){
        for(int j=0;j<sizek-1;j++){
            if(numss[j]>numss[j+1]){
                temp=numss[j];
                numss[j]=numss[j+1];
                numss[j+1]=temp;
            }
        }
    }
}
void swap(string &x, string &y){
    string temp = x;
    x = y;
    y = temp;
    cout<<"X : "<<&x<<endl;
    cout<<"Y : "<<&y<<endl;
}
