#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {

    // ---------- EASY (5) ----------
    "1. What is 2^3?",
    "2. What is 5^0?",
    "3. What is x^1?",
    "4. Simplify: 3^2 x 3^3 (using laws of exponents)",
    "5. What is 4^-1?",

    // ---------- NORMAL (5) ----------
    "6. Simplify: (2^4) / (2^2)",
    "7. Simplify: (x^3)^2",
    "8. What is 2^-3 as a fraction?",
    "9. Simplify: a^5 x a^-2",
    "10. What is 9^(1/2)?",

    // ---------- MIXED / HARD (5) ----------
    "11. Simplify: (x^2 y^3)^2 / x^4",
    "12. What is 8^(2/3)?",
    "13. Simplify: (2^-2) x (2^5) / (2^1)",
    "14. What is 16^(-1/2)?",
    "15. Simplify: (a^3 b^-2)^-1",
    // ---------- EASY (5) ----------
    "1. Which law states that an object at rest stays at rest unless acted on by a net force?",
    "2. What is the formula for Newton's Second Law?",
    "3. What is inertia?",
    "4. Newton's Third Law states that for every action there is an equal and opposite what?",
    "5. What is the SI unit of force?",

    // ---------- NORMAL (5) ----------
    "6. A 10 kg object accelerates at 2 m/s^2. What net force is acting on it?",
    "7. What does a free-body diagram show?",
    "8. If a 5 N force acts on a 1 kg mass, what is its acceleration?",
    "9. What force opposes the relative motion between two surfaces in contact?",
    "10. What is the tension in a rope holding a stationary 2 kg mass, using g = 10 m/s^2?",

    // ---------- MIXED / HARD (5) ----------
    "11. A book rests on a table. What is the normal force on a 4 kg book, using g = 10 m/s^2?",
    "12. A 20 N force pushes a 5 kg box on a frictionless surface. What is its acceleration?",
    "13. Two blocks (3 kg and 2 kg) are connected by a string on a frictionless table, pulled by a 10 N force. What is the tension between the blocks?",
    "14. A rocket expels gas backward, causing it to move forward. Which law best explains this?",
    "15. A crate is pulled with 15 N force but friction is 6 N. What is the net force on the crate?"
    };

    string options[][4] = {
        // ---------- EASY (5) ----------
    {"5", "6", "8", "9"},                       // 2^3
    {"0", "1", "5", "undefined"},                // 5^0
    {"0", "1", "x", "x^2"},                      // x^1
    {"3^5", "3^6", "9^5", "27^2"},                // 3^2 * 3^3
    {"4", "1/4", "-4", "0"},                      // 4^-1

    // ---------- NORMAL (5) ----------
    {"2^2", "2^6", "2^8", "4^2"},                 // 2^4 / 2^2
    {"x^5", "x^6", "x^9", "x^1"},                 // (x^3)^2
    {"1/8", "-8", "8", "-1/8"},                   // 2^-3
    {"a^3", "a^7", "a^-10", "a^10"},              // a^5 * a^-2
    {"3", "4.5", "81", "18"},                     // 9^(1/2)

    // ---------- MIXED / HARD (5) ----------
    {"y^6", "x^2 y^6", "x^6 y^2", "x y^6"},        // (x^2 y^3)^2 / x^4  -> y^6
    {"4", "16", "2", "8"},                         // 8^(2/3)
    {"16", "2^2", "4", "2^6"},                     // 2^-2 * 2^5 / 2^1
    {"4", "1/4", "-4", "16"},                       // 16^(-1/2)
    {"b^2/a^3", "a^3/b^2", "a^-3 b^2", "a^3 b^2"},   // (a^3 b^-2)^-1
    // ---------- EASY (5) ----------
    {"First Law", "Second Law", "Third Law", "Law of Gravitation"},  // First Law
    {"F = ma", "F = mv", "F = m/a", "F = a/m"},                      // F=ma
    {"Resistance of an object to change in motion", "The force of gravity", "The speed of an object", "The mass of a planet"}, // Inertia
    {"Force", "Reaction", "Mass", "Acceleration"},                    // Third Law
    {"Newton (N)", "Joule (J)", "Watt (W)", "Pascal (Pa)"},           // SI unit of force

    // ---------- NORMAL (5) ----------
    {"5 N", "20 N", "12 N", "8 N"},                                   // F = 10 x 2 = 20N
    {"All forces acting on an object", "The object's speed over time", "The object's mass and volume", "The object's energy"}, // FBD
    {"5 m/s^2", "1 m/s^2", "0.2 m/s^2", "6 m/s^2"},                   // a = F/m = 5/1
    {"Tension", "Normal force", "Friction", "Gravity"},                // Friction
    {"20 N", "0.2 N", "10 N", "2 N"},                                 // T = mg = 2*10

    // ---------- MIXED / HARD (5) ----------
    {"40 N", "4 N", "0.4 N", "400 N"},                                // N = mg = 4*10
    {"25 m/s^2", "4 m/s^2", "0.25 m/s^2", "100 m/s^2"},               // a = F/m = 20/5
    {"6 N", "10 N", "4 N", "2 N"},                                    // T = (m2/(m1+m2)) x F = (2/5)*10
    {"First Law", "Second Law", "Third Law", "Law of Friction"},      // Third Law
    {"9 N", "21 N", "15 N", "6 N"}                                    // Net = 15-6=9
    };

    char answerkey[] = {
    // ---------- MATH ----------
    // Easy
    'C', 'B', 'C', 'A', 'B',

    // Normal
    'A', 'B', 'A', 'A', 'A',

    // Mixed / Hard
    'A', 'A', 'B', 'B', 'C',

    // ---------- PHYSICS ----------
    // Easy
    'A', 'A', 'A', 'B', 'A',

    // Normal
    'B', 'A', 'A', 'C', 'A',

    // Mixed / Hard
    'A', 'B', 'C', 'C', 'A'
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