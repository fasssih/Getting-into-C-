#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
            // ---------------- EASY (Index 0-4) ----------------
    "What is the ratio of 4 to 8 in its simplest form?",
    "Which of the following is an equivalent ratio of 3:5?",
    "In a proportion a:b = c:d, which pair of terms is called the 'means'?",
    "If 2 pens cost $10, what is the cost of 6 pens? (Direct Proportion)",
    "If 3 workers finish a job in 12 days, how many days will 6 workers take? (Inverse Proportion)",

    // ---------------- NORMAL (Index 5-9) ----------------
    "Simplify the ratio 18:24.",
    "Check whether 4:6 = 10:15 forms a valid proportion.",
    "The cost of 5 kg of rice is $250. Find the cost of 8 kg. (Direct Proportion)",
    "If 8 men can build a wall in 10 days, how many days will 4 men take? (Inverse Proportion)",
    "Find x if 5:x = 15:9.",

    // ---------------- MIXED (Index 10-14) ----------------
    "A recipe uses flour and sugar in the ratio 5:2. If 20 cups of flour are used, how much sugar is needed? (Equivalent Ratio)",
    "Which of the following pairs shows an Inverse Proportion relationship?",
    "12 pencils cost $60. If pencils and cost are directly proportional, find the cost of 20 pencils.",
    "6 taps fill a tank in 8 hours. How long will 4 taps take to fill the same tank? (Inverse Proportion)",
    "Find the missing term x in the proportion 7 : 21 = x : 9.",

    // ---------------- EASY (Index 0-4) ----------------
    "In projectile motion, which component of velocity remains constant throughout the flight (ignoring air resistance)?",
    "A ball is thrown horizontally from a cliff. What is its initial vertical velocity?",
    "What force causes the vertical velocity of a projectile to change during flight?",
    "What is the shape of the path (trajectory) followed by a projectile?",
    "At the maximum height of an angled projectile, what is the vertical velocity?",
 
    // ---------------- NORMAL (Index 5-9) ----------------
    "A projectile is launched at an angle theta with initial velocity v. Which formula gives the horizontal component of velocity?",
    "Which formula gives the vertical component of initial velocity for an angled projectile?",
    "A ball is thrown horizontally from height h with no initial vertical velocity. Which formula gives the time of flight?",
    "For an angled projectile launched with velocity v at angle theta, which formula gives the time of flight?",
    "Which formula gives the maximum height reached by an angled projectile?",
 
    // ---------------- MIXED (Index 10-14) ----------------
    "Which formula gives the horizontal range of an angled projectile?",
    "At what launch angle is the range of a projectile maximum (for equal launch and landing height)?",
    "A ball is thrown horizontally at 20 m/s from a height, and it takes 2 seconds to hit the ground. What is the horizontal range? (ignore air resistance)",
    "A projectile is launched at 30 degrees above horizontal. Compared to one launched at 60 degrees with the same speed (equal launch/landing height), which statement is true?",
    "A ball is projected straight up (theta = 90 degrees). What happens to its horizontal velocity and range?"
    };

    string options[][4] = {

    // ---------------- EASY ----------------
    {"1:2", "2:1", "4:8", "1:4"},
    {"6:10", "5:3", "3:10", "9:20"},
    {"a and d", "b and c", "a and b", "c and d"},
    {"$20", "$30", "$15", "$40"},
    {"24 days", "6 days", "9 days", "12 days"},

    // ---------------- NORMAL ----------------
    {"3:4", "9:12", "6:8", "2:3"},
    {"Yes, it is a valid proportion", "No, it is not a proportion", "Cannot be determined", "Only if reversed"},
    {"$400", "$350", "$300", "$450"},
    {"5 days", "20 days", "15 days", "8 days"},
    {"3", "9", "5", "15"},

    // ---------------- MIXED ----------------
    {"8 cups", "10 cups", "4 cups", "12 cups"},
    {"Speed and time for a fixed distance", "Number of items and total cost", "Side length and area of a square", "Number of workers and total wages"},
    {"$100", "$90", "$80", "$120"},
    {"12 hours", "6 hours", "10 hours", "5.33 hours"},
    {"3", "27", "2", "63"},
    
    // ---------------- EASY ----------------
    {"Horizontal velocity", "Vertical velocity", "Both change", "Both remain constant"},
    {"0", "Equal to horizontal velocity", "Maximum", "Negative"},
    {"Gravity", "Air resistance", "Horizontal velocity", "Friction"},
    {"Parabola", "Straight line", "Circle", "Ellipse"},
    {"Zero", "Maximum", "Equal to horizontal velocity", "Negative"},
 
    // ---------------- NORMAL ----------------
    {"v cos(theta)", "v sin(theta)", "v tan(theta)", "v / cos(theta)"},
    {"v cos(theta)", "v sin(theta)", "v tan(theta)", "v / sin(theta)"},
    {"T = sqrt(2h/g)", "T = 2v sin(theta)/g", "T = h/g", "T = v/g"},
    {"T = sqrt(2h/g)", "T = 2v sin(theta)/g", "T = v^2 sin^2(theta)/2g", "T = v^2 sin(2theta)/g"},
    {"H = v^2 sin^2(theta) / 2g", "H = 2v sin(theta)/g", "H = v^2 sin(2theta)/g", "H = v cos(theta) * T"},
 
    // ---------------- MIXED ----------------
    {"R = v^2 sin(2theta)/g", "R = v^2 sin^2(theta)/2g", "R = v cos(theta) * T", "Both A and C are correct"},
    {"45 degrees", "30 degrees", "60 degrees", "90 degrees"},
    {"40 m", "20 m", "10 m", "80 m"},
    {"They have the same range", "The 30 degree projectile goes higher", "The 60 degree projectile has a shorter time of flight", "The 30 degree projectile has zero horizontal velocity"},
    {"Both horizontal velocity and range become zero", "Only horizontal velocity becomes zero", "Only range becomes zero", "Neither becomes zero"}

    };

    char answerkey[] = {
    // Easy
    'A', 'A', 'B', 'B', 'B',
    // Normal
    'A', 'A', 'A', 'B', 'A',
    // Mixed
    'A', 'A', 'A', 'A', 'A',
    // Easy
    'A', 'A', 'A', 'A', 'A',
    // Normal
    'A', 'B', 'A', 'B', 'A',
    // Mixed
    'D', 'A', 'A', 'A', 'A'
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