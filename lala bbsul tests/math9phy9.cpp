#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
    
    // ---- Easy (1-5) ----
    "In the expression 3x + 5, which one is the variable?",
    "Which of the following is a constant in 4y + 7?",
    "What is the coefficient of x in 6x?",
    "How many terms are there in 2a + 3b + 4?",
    "Which pair of terms are like terms?",

    // ---- Normal (6-10) ----
    "Simplify: 3x + 2x",
    "Find the value of 2x + 3 when x = 4.",
    "What is the coefficient of y in -7y + 2?",
    "Which pair of terms are unlike terms?",
    "Simplify: 4a + 3b - a + 2b",

    // ---- Mixed (11-15) ----
    "Find the value of 3a^2 - b when a = 2 and b = -3.",
    "Simplify: 5x^2 + 3x - 2x^2 + x - 4",
    "In 4x^2 - 5x + 9, how many terms are there and which one is the constant term?",
    "Which of the following groups contains only like terms?",
    "Find the value of x^2 - 2x + 1 when x = 3.",
// ---- Easy (1-5) ----
    "What is the SI unit of work?",
    "Which of the following is the formula for kinetic energy?",
    "What is the SI unit of power?",
    "Which of the following is the formula for gravitational potential energy?",
    "At what angle between force and displacement is the work done equal to zero?",

    // ---- Normal (6-10) ----
    "A force of 10 N moves an object 5 m in the direction of the force. How much work is done?",
    "What is the kinetic energy of a 2 kg object moving at 3 m/s?",
    "What is the potential energy of a 5 kg object at a height of 10 m? (g = 10 m/s^2)",
    "How much power is developed when 600 J of work is done in 20 s?",
    "According to the work-energy theorem, the net work done on an object equals the change in its:",

    // ---- Mixed (11-15) ----
    "A force of 20 N acts at 60 degrees to the horizontal and moves an object 10 m horizontally. How much work does it do? (cos 60 = 0.5)",
    "A ball is dropped from rest from a height of 5 m. Using conservation of energy, what is its speed just before hitting the ground? (g = 10 m/s^2)",
    "A machine takes 500 J of energy as input and gives 400 J of useful output. What is its efficiency?",
    "If the speed of an object is doubled, its kinetic energy becomes:",
    "A motor lifts a 50 kg load through 10 m in 10 s. What is the power of the motor? (g = 10 m/s^2)"
    
    };

    string options[][4] = {
    
    // ---- Easy ----
    {"3", "x", "5", "+"},
    {"4", "y", "7", "4y"},
    {"6", "x", "1", "0"},
    {"1", "2", "3", "4"},
    {"2x and 3x", "2x and 3y", "4 and 4x", "x and y^2"},

    // ---- Normal ----
    {"5x", "6x", "5x^2", "32x"},
    {"9", "11", "14", "8"},
    {"7", "-7", "2", "y"},
    {"5a and -2a", "3xy and 4xy", "6x^2 and 2x", "7b and b"},
    {"5a + 5b", "3a + b", "3a + 5b", "4a + 5b"},

    // ---- Mixed ----
    {"9", "15", "12", "18"},
    {"7x^2 + 4x - 4", "3x^2 + 2x - 4", "3x^2 + 4x + 4", "3x^2 + 4x - 4"},
    {"3 terms, constant is 9", "3 terms, constant is -5", "2 terms, constant is 9", "3 terms, constant is 4"},
    {"2x^2, 2x, 2", "4ab, 4a, 4b", "3xy, -xy, 5xy", "x^2, y^2, xy"},
    {"16", "4", "10", "1"},
         // ---- Easy ----
    {"Newton", "Joule", "Watt", "Pascal"},
    {"mgh", "W/t", "1/2 mv^2", "Fs"},
    {"Watt", "Joule", "Newton", "Pascal"},
    {"1/2 mv^2", "mgh", "Fs", "W/t"},
    {"0 degrees", "45 degrees", "90 degrees", "180 degrees"},

    // ---- Normal ----
    {"2 J", "15 J", "50 J", "5 J"},
    {"9 J", "6 J", "18 J", "3 J"},
    {"50 J", "500 J", "15 J", "5000 J"},
    {"12000 W", "300 W", "3 W", "30 W"},
    {"Change in momentum", "Change in power", "Change in kinetic energy", "Change in potential energy"},

    // ---- Mixed ----
    {"100 J", "200 J", "173 J", "50 J"},
    {"5 m/s", "20 m/s", "10 m/s", "50 m/s"},
    {"125%", "20%", "40%", "80%"},
    {"Two times", "Four times", "Half", "Remains the same"},
    {"50 W", "5000 W", "100 W", "500 W"}
    };

    char answerkey[] = {
    'B', 'C', 'A', 'C', 'A',   // Easy
    'A', 'B', 'B', 'C', 'C',   // Normal
    'B', 'D', 'A', 'C', 'B',    // Mixed
    'B', 'C', 'A', 'B', 'C',   // Easy
    'C', 'A', 'B', 'D', 'C',   // Normal
    'A', 'C', 'D', 'B', 'D'    // Mixed
    
    };
    char labels[] = {'A','B','C','D'};
    char guess;
    int score = 0;
    int size = sizeof(questions)/sizeof(questions[0]);
    int size2 = 4;
    for(int i = 0; i<size; i++){
        cout<<"*************************";
        cout<<'\n'<<questions[i];
        cout<<"\n*************************";

        for(int j = 0; j<size2; j++){
        cout<<'\n'<<options[i][j];
    }
    cout<<"\n";
    cin>>guess;
    guess = toupper(guess);
    if(guess==answerkey[i]){
        cout<<"CORRECT\n";
        score++;
    }else{
        cout<<"WRONG!\n";
    }
    }
    cout<<"# of questions: "<<size;
    cout<<"\nCorrect answers: "<<score;
}