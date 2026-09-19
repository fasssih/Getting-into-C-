#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
    // ---------- EASY (1-5) ----------
    "What is the square root of 25?",
    "What is the square root of 49?",
    "What is the cube root of 8?",
    "Simplify: sqrt(16)",
    "What is the cube root of 27?",
 
    // ---------- NORMAL (6-10) ----------
    "Simplify: sqrt(50)",
    "Simplify: sqrt(72)",
    "Simplify: cube root of 54",
    "Add: 3*sqrt(2) + 5*sqrt(2)",
    "Rationalize the denominator: 1 / sqrt(3)",
 
    // ---------- MIXED (11-15) ----------
    "Simplify: sqrt(12) * sqrt(3)",
    "Rationalize the denominator: 2 / (sqrt(5) - 1)",
    "Simplify: sqrt(18) + sqrt(8)",
    "Simplify: cube root of 16",
    "Simplify: (sqrt(7))^2 - (sqrt(3))^2",
    
    // ---------- EASY (1-5) ----------
    "What is the formula for linear momentum?",
    "Momentum is the product of an object's mass and its:",
    "What is the SI unit of momentum?",
    "What is the formula for impulse?",
    "Impulse equals the change in:",
 
    // ---------- NORMAL (6-10) ----------
    "A 2 kg object moves at 5 m/s. Find its momentum.",
    "A force of 10 N acts on an object for 3 s. Find the impulse.",
    "In an isolated system with no external forces, total momentum is:",
    "In a perfectly elastic collision, which quantity(ies) are conserved?",
    "In a perfectly inelastic collision, the colliding objects:",
 
    // ---------- MIXED (11-15) ----------
    "A 3 kg ball moving at 4 m/s hits a stationary 3 kg ball and they stick together. Find their combined velocity.",
    "A 1000 kg car moving at 20 m/s brakes to a stop in 5 s. Find the average braking force.",
    "Which quantity distinguishes an elastic collision from an inelastic one?",
    "A 5 kg object moving at 3 m/s collides with a stationary 2 kg object and they stick together. Find the total momentum right after the collision.",
    "A rocket moves forward by ejecting gas backward. This is best explained by:"
    };

    string options[][4] = {

    // ---------- EASY ----------
    {"4", "5", "6", "25"},                                   // Q1
    {"6", "7", "8", "49"},                                    // Q2
    {"2", "3", "4", "8"},                                     // Q3
    {"2", "4", "8", "16"},                                    // Q4
    {"3", "9", "27", "6"},                                    // Q5
 
    // ---------- NORMAL ----------
    {"5*sqrt(2)", "2*sqrt(5)", "10*sqrt(5)", "25*sqrt(2)"},   // Q6
    {"6*sqrt(2)", "3*sqrt(8)", "4*sqrt(3)", "2*sqrt(18)"},    // Q7
    {"3*cbrt(2)", "2*cbrt(3)", "6*cbrt(3)", "9*cbrt(2)"},     // Q8
    {"8*sqrt(2)", "8*sqrt(4)", "15*sqrt(2)", "8"},            // Q9
    {"sqrt(3)/3", "1/3", "3/sqrt(3)", "sqrt(3)"},             // Q10
 
    // ---------- MIXED ----------
    {"6", "6*sqrt(3)", "36", "2*sqrt(3)"},                          // Q11
    {"(sqrt(5)+1)/2", "(sqrt(5)-1)/2", "2*(sqrt(5)+1)", "(sqrt(5)+1)/4"}, // Q12
    {"5*sqrt(2)", "5*sqrt(4)", "10*sqrt(2)", "26"},                 // Q13
    {"2*cbrt(2)", "4*cbrt(2)", "2*cbrt(4)", "8*cbrt(2)"},           // Q14
    {"4", "sqrt(4)", "10", "2*sqrt(7)-2*sqrt(3)"},                   // Q15
    
    // ---------- EASY ----------
    {"p = mv", "p = m/v", "p = F/t", "p = mv^2"},                       // Q1
    {"acceleration", "velocity", "weight", "force"},                     // Q2
    {"N", "kg*m/s", "J", "W"},                                           // Q3
    {"J = F*dt", "J = ma", "J = mv", "J = F/t"},                         // Q4
    {"mass", "velocity", "momentum", "force"},                          // Q5
 
    // ---------- NORMAL ----------
    {"2.5 kg*m/s", "7 kg*m/s", "10 kg*m/s", "25 kg*m/s"},                // Q6
    {"3.33 N*s", "13 N*s", "30 N*s", "7 N*s"},                           // Q7
    {"doubled", "conserved", "zero", "variable"},                       // Q8
    {"momentum only", "kinetic energy only", "both momentum and kinetic energy", "neither"}, // Q9
    {"bounce apart with the same speed", "stick together after colliding", "lose all momentum", "gain kinetic energy"}, // Q10
 
    // ---------- MIXED ----------
    {"1 m/s", "2 m/s", "4 m/s", "6 m/s"},                                // Q11
    {"1000 N", "2000 N", "4000 N", "5000 N"},                            // Q12
    {"Momentum is conserved", "Kinetic energy is conserved", "Total mass changes", "Velocity is zero"}, // Q13
    {"15 kg*m/s", "6 kg*m/s", "21 kg*m/s", "3 kg*m/s"},                  // Q14
    {"Newton's first law", "Conservation of energy", "Conservation of momentum", "Law of gravitation"}  // Q15
    };

    char answerkey[] = {
    'B', 'B', 'A', 'B', 'A',
    // Normal
    'A', 'A', 'A', 'A', 'A',
    // Mixed
    'A', 'A', 'A', 'A', 'A',
    // Easy
    'A', 'B', 'B', 'A', 'C',
    // Normal
    'C', 'C', 'B', 'C', 'B',
    // Mixed
    'B', 'C', 'B', 'A', 'C'
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