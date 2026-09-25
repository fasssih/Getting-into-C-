#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
        
    // ---------- EASY (1-3) ----------
    "Solve for x: x + 5 = 12",
    "Solve for x: 3x = 15",
    "Solve for x: x - 4 = 10",
 
    // ---------- NORMAL (4-8) ----------
    "Solve for x: 2x + 3 = 11",
    "Solve for x: 5x - 7 = 18",
    "Solve for x: x/3 + 2 = 7",
    "Solve for x: (x + 1)/2 = 4",
    "Solve for x: 4(x - 2) = 16",
 
    // ---------- MIXED (9-15) ----------
    "Solve for x: 2(x + 3) = 3(x - 1)",
    "Solve for x: (2x - 1)/3 = (x + 2)/2",
    "Solve for x: x/4 + x/2 = 6",
    "Solve for x: 5(x - 1) - 2(x + 3) = 7",
    "Word problem: The sum of a number and 8 is 23. Find the number.",
    "Word problem: Twice a number decreased by 5 is 21. Find the number.",
    "Word problem: A rectangle's length is 3 more than its width w. If the perimeter is 26, find the width.",
    // ---------- EASY (1-3) ----------
    "What is the formula for Newton's law of gravitation?",
    "Weight is the product of mass and:",
    "What is the SI unit of gravitational force?",
 
    // ---------- NORMAL (4-8) ----------
    "The value of g on the surface of Earth is approximately:",
    "As you go from the surface of Earth to a higher altitude, the value of g:",
    "Mass of an object is constant everywhere, but its weight:",
    "The gravitational field at a point is defined as:",
    "Escape velocity depends on:",
 
    // ---------- MIXED (9-15) ----------
    "Using F = G*m1*m2/r^2, if the distance r between two masses is doubled, the gravitational force becomes:",
    "Using ve = sqrt(2GM/R), if the mass M of a planet is quadrupled while R stays the same, ve becomes:",
    "Gravitational potential energy of an object is correctly expressed by:",
    "If Earth's radius were to decrease while its mass stayed the same, the value of g at the surface would:",
    "Orbital velocity of a satellite close to Earth's surface is approximately:",
    "A geostationary satellite orbits Earth with a time period equal to:",
    "Which statement correctly compares escape velocity and orbital velocity for a satellite near Earth's surface?"
    };
    string options[][4] = {
        // ---------- EASY ----------
    {"5", "7", "12", "17"},           // Q1
    {"3", "5", "12", "45"},           // Q2
    {"6", "10", "14", "40"},          // Q3
 
    // ---------- NORMAL ----------
    {"3", "4", "5", "7"},             // Q4
    {"3", "4", "5", "6"},             // Q5
    {"9", "12", "15", "21"},          // Q6
    {"5", "6", "7", "9"},             // Q7
    {"4", "5", "6", "8"},             // Q8
 
    // ---------- MIXED ----------
    {"6", "7", "8", "9"},             // Q9
    {"6", "7", "8", "9"},             // Q10
    {"6", "7", "8", "9"},             // Q11
    {"4", "5", "6", "7"},             // Q12
    {"13", "15", "17", "31"},         // Q13
    {"8", "10", "13", "16"},          // Q14
    {"4", "5", "6", "7"},              // Q15

    {"F = G*m1*m2/r^2", "F = ma", "F = mv^2/r", "F = G*m1*m2/r"},              // Q1
    {"velocity", "acceleration due to gravity", "momentum", "density"},        // Q2
    {"kg", "N", "J", "m/s^2"},                                                 // Q3
 
    // ---------- NORMAL ----------
    {"6.67e-11 m/s^2", "9.8 m/s^2", "3.8 m/s^2", "11.2 m/s^2"},                // Q4
    {"increases", "decreases", "stays the same", "becomes negative"},          // Q5
    {"is also constant everywhere", "varies with location due to changes in g", "is always zero in space", "increases with speed"}, // Q6
    {"force per unit mass at that point", "force per unit distance", "potential energy per unit charge", "mass per unit volume"}, // Q7
    {"mass of the escaping object only", "mass and radius of the planet", "color of the object", "time of day"}, // Q8
 
    // ---------- MIXED ----------
    {"same", "half", "one-fourth", "double"},                                  // Q9
    {"same", "doubled", "halved", "quadrupled"},                               // Q10
    {"U = mgh", "U = 0.5*mv^2", "U = G*M*m/r", "U = mgh (near surface) and U = -G*M*m/r (general, taking infinity as reference)"}, // Q11
    {"increase", "decrease", "remain unchanged", "become zero"},               // Q12
    {"7.9 km/s", "11.2 km/s", "3.1 km/s", "9.8 km/s"},                         // Q13
    {"1 hour", "24 hours", "27 days", "365 days"},                             // Q14
    {"escape velocity = orbital velocity", "escape velocity = orbital velocity * sqrt(2)", "escape velocity = orbital velocity / 2", "escape velocity = (orbital velocity)^2"} // Q15
    };
    char answerkey[] = {
    // Easy
    'B', 'B', 'C',
    // Normal
    'B', 'C', 'C', 'C', 'C',
    // Mixed
    'D', 'C', 'C', 'C', 'B', 'C', 'B',
    // Easy
    'A', 'B', 'B',
    // Normal
    'B', 'B', 'B', 'A', 'B',
    // Mixed
    'C', 'B', 'D', 'A', 'A', 'B', 'B'
    };
    char labels[] = {'A','B','C','D'};
    char guess;
    int score = 0;
    int size = sizeof(questions)/sizeof(questions[0]);
    int size2 = 4;
    for(int i = 0; i<size; i++){
        cout<<"*************************";
        cout<<'\n'<<i+1<<"- "<<questions[i];
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