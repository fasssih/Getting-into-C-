#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
    "Divide $360 in the ratio 2:3:4. What is the smallest share?",
    "If a:b = 2:3 and b:c = 4:5, what is a:c?",
    "8 workers can build a wall in 12 days. After 4 days, 4 workers leave. How many more days are needed to finish the wall?",
    "Find x if (x + 2) : (x - 1) = 5 : 2.",
    "A 30 L mixture has milk and water in the ratio 7:3. How much water must be added to make the ratio 7:5?",
    "Simplify: (2^3 x 4^2) / 8",
    "If 3^(x+1) = 81, what is x?",
    "Simplify: (x^-2 y^3)^-2 x x^3",
    "What is the value of 27^(2/3) x 4^(-1/2)?",
    "If 2^a = 5, what is 2^(a+2)?",
    "y is directly proportional to x^2. If y = 12 when x = 2, what is y when x = 5?",
    "y is inversely proportional to x^2. If y = 9 when x = 2, what is y when x = 6?",
    "Simplify: (a^(1/2) x a^(3/2))^3 / a^2",
    "The ratio of boys to girls is 3:5. When 12 more girls join, the ratio becomes 3:7. How many boys are there?",
    "What is the value of (5^-1 + 2^-1)^-1 ?",

    // ---------------- PHYSICS: Projectile Motion and Newton's Laws (15-29) ----------------
    "A ball is thrown horizontally at 12 m/s from a cliff 45 m high. What is its horizontal range?",
    "A projectile is launched at 50 m/s at 37 degrees above horizontal (sin 37 = 0.6, cos 37 = 0.8). What is its time of flight?",
    "For the same projectile (50 m/s at 37 degrees), what is the maximum height reached?",
    "For the same projectile (50 m/s at 37 degrees), what is the horizontal range?",
    "A projectile is launched at 20 m/s at 60 degrees above horizontal. What is its speed at the highest point?",
    "Two projectiles are launched with the same speed at 30 degrees and 60 degrees. Which one reaches the greater maximum height?",
    "A ball is thrown horizontally at 15 m/s from a cliff. What is its speed after 2 seconds?",
    "If the launch speed of a projectile is doubled (same angle, same level ground), by what factor does the range increase?",
    "A 6 kg block is pulled by a 30 N force to the right and a 18 N force to the left on a frictionless surface. What is its acceleration?",
    "A 2 kg mass hangs from a rope in an elevator accelerating upward at 3 m/s^2. What is the tension in the rope?",
    "A 5 kg mass hangs from a rope in an elevator accelerating downward at 2 m/s^2. What is the tension in the rope?",
    "A 4 kg block slides down a frictionless incline of 30 degrees. What is its acceleration?",
    "A 10 kg box is pushed with a 50 N force on a surface with kinetic friction coefficient 0.3. What is its acceleration?",
    "Masses of 3 kg and 2 kg hang over a light frictionless pulley (Atwood machine). What is the acceleration of the system?",
    "A 12 N force pushes a 2 kg block that is in contact with a 4 kg block on a frictionless surface. What is the contact force between the blocks?"
    };

    string options[][4] = {
    {"$60", "$80", "$120", "$160"},
    {"2:5", "6:20", "8:15", "4:5"},
    {"12 days", "16 days", "20 days", "24 days"},
    {"4", "2", "3", "5"},
    {"6 L", "4 L", "5 L", "8 L"},
    {"8", "16", "32", "64"},
    {"4", "5", "2", "3"},
    {"x^-1 y^-6", "x^7 y^6", "x^7 y^-6", "x y^-1"},
    {"9/2", "9", "18", "3/2"},
    {"7", "10", "20", "25"},
    {"75", "30", "60", "150"},
    {"3", "1", "4", "27"},
    {"a^2", "a^3", "a^6", "a^4"},
    {"12", "18", "24", "30"},
    {"7/10", "3/7", "10/7", "7"},

    // ---------------- PHYSICS (15-29) ----------------
    {"27 m", "36 m", "54 m", "108 m"},
    {"3 s", "4 s", "6 s", "8 s"},
    {"45 m", "30 m", "60 m", "90 m"},
    {"200 m", "300 m", "180 m", "240 m"},
    {"0 m/s", "10 m/s", "17.3 m/s", "20 m/s"},
    {"30 degrees", "Both equal", "Depends on mass", "60 degrees"},
    {"20 m/s", "35 m/s", "25 m/s", "15 m/s"},
    {"2", "4", "3", "8"},
    {"8 m/s^2", "2 m/s^2", "5 m/s^2", "0.5 m/s^2"},
    {"20 N", "14 N", "6 N", "26 N"},
    {"40 N", "50 N", "60 N", "10 N"},
    {"10 m/s^2", "8.66 m/s^2", "5 m/s^2", "2.5 m/s^2"},
    {"2 m/s^2", "3 m/s^2", "5 m/s^2", "1 m/s^2"},
    {"1 m/s^2", "5 m/s^2", "10 m/s^2", "2 m/s^2"},
    {"8 N", "4 N", "6 N", "12 N"}
    };

    char answerkey[] = {
   // Math (0-14)
    'B', 'C', 'B', 'C', 'A',
    'B', 'D', 'C', 'A', 'C',
    'A', 'B', 'D', 'B', 'C',
    // Physics (15-29)
    'B', 'C', 'A', 'D', 'B',
    'D', 'C', 'B', 'B', 'D',
    'A', 'C', 'A', 'D', 'A'
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
        cout<<'\n'<<labels[j]<<") "<<options[i][j];
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