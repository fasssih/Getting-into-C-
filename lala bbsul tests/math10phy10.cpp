#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
    "Q1. (a + b)^2 = ?",
    "Q2. (a - b)^2 = ?",
    "Q3. (a + b)(a - b) = ?",
    "Q4. Expand (x + 3)^2",
    "Q5. Using an identity, the value of 101^2 is:",

    // ----- NORMAL -----
    "Q6. Expand (2x + 3y)^2",
    "Q7. Using an identity, the value of 98 x 102 is:",
    "Q8. If a + b = 7 and ab = 12, then a^2 + b^2 = ?",
    "Q9. (x + 2)(x^2 - 2x + 4) = ?",
    "Q10. Factorise x^2 - 16",

    // ----- MIXED -----
    "Q11. If x + 1/x = 5, then x^2 + 1/x^2 = ?",
    "Q12. (a + b + c)^2 = ?",
    "Q13. If a + b + c = 0, then a^3 + b^3 + c^3 = ?",
    "Q14. Using an identity, the value of 99^3 is:",
    "Q15. If x - y = 3 and xy = 10, then x^3 - y^3 = ?",
    "Q1. The formula for centripetal acceleration is:",
    "Q2. The SI unit of angular velocity is:",
    "Q3. The centripetal force acts:",
    "Q4. The formula for centripetal force is:",
    "Q5. The SI unit of angular displacement is:",

    // ----- NORMAL -----
    "Q6. A 1000 kg car moves at 20 m/s on a circular track of radius 50 m. The centripetal force is:",
    "Q7. An object moves in a circle of radius 2 m with angular velocity 3 rad/s. Its tangential velocity is:",
    "Q8. A wheel's angular velocity increases from 0 to 20 rad/s in 5 s. Its angular acceleration is:",
    "Q9. The centripetal acceleration of a body moving at 10 m/s in a circle of radius 5 m is:",
    "Q10. An angular displacement of 180 degrees is equal to:",

    // ----- MIXED -----
    "Q11. If the speed is doubled at the same radius, the centripetal force becomes:",
    "Q12. In uniform circular motion, which quantity remains constant?",
    "Q13. A 0.5 kg stone is whirled on a 1 m string with angular velocity 4 rad/s. The tension in the string is:",
    "Q14. A body completes 120 revolutions in 1 minute. Its angular velocity is:",
    "Q15. If the radius is doubled at the same speed, the centripetal acceleration:"
    };

    string options[][4] = {
     // ----- EASY -----
    {"A) a^2 + b^2", "B) a^2 + 2ab + b^2", "C) a^2 - 2ab + b^2", "D) a^2 + ab + b^2"},
    {"A) a^2 - 2ab + b^2", "B) a^2 + 2ab + b^2", "C) a^2 - b^2", "D) a^2 - ab + b^2"},
    {"A) a^2 + b^2", "B) a^2 - b^2", "C) a^2 + 2ab - b^2", "D) a^2 - 2ab - b^2"},
    {"A) x^2 + 9", "B) x^2 + 3x + 9", "C) x^2 + 6x + 9", "D) x^2 + 6x + 3"},
    {"A) 10001", "B) 10101", "C) 10201", "D) 10221"},

    // ----- NORMAL -----
    {"A) 4x^2 + 6xy + 9y^2", "B) 4x^2 + 12xy + 9y^2", "C) 2x^2 + 12xy + 3y^2", "D) 4x^2 + 9y^2"},
    {"A) 9996", "B) 9994", "C) 10004", "D) 9896"},
    {"A) 25", "B) 37", "C) 49", "D) 19"},
    {"A) x^3 - 8", "B) x^3 + 8", "C) x^3 + 4", "D) x^3 + 2x^2 + 8"},
    {"A) (x - 4)^2", "B) (x + 4)^2", "C) (x - 4)(x + 4)", "D) (x - 8)(x + 2)"},

    // ----- MIXED -----
    {"A) 25", "B) 23", "C) 27", "D) 21"},
    {"A) a^2 + b^2 + c^2 + 2ab + 2bc + 2ca", "B) a^2 + b^2 + c^2 + ab + bc + ca",
     "C) a^2 + b^2 + c^2 - 2ab - 2bc - 2ca", "D) a^2 + b^2 + c^2"},
    {"A) 0", "B) abc", "C) 3abc", "D) a + b + c"},
    {"A) 970299", "B) 970399", "C) 970199", "D) 969299"},
    {"A) 117", "B) 27", "C) 90", "D) 147"},
     {"A) v^2/r", "B) v r^2", "C) v/r^2", "D) r/v^2"},
    {"A) m/s", "B) rad/s", "C) rad/s^2", "D) N"},
    {"A) Away from the center", "B) Along the tangent", "C) Toward the center", "D) Perpendicular to the plane of motion"},
    {"A) mv^2/r", "B) mvr", "C) mv/r", "D) mvr^2"},
    {"A) Metre", "B) Degree", "C) Radian", "D) Radian per second"},

    // ----- NORMAL -----
    {"A) 4000 N", "B) 8000 N", "C) 400 N", "D) 20000 N"},
    {"A) 1.5 m/s", "B) 5 m/s", "C) 6 m/s", "D) 9 m/s"},
    {"A) 100 rad/s^2", "B) 4 rad/s^2", "C) 25 rad/s^2", "D) 0.25 rad/s^2"},
    {"A) 2 m/s^2", "B) 50 m/s^2", "C) 20 m/s^2", "D) 15 m/s^2"},
    {"A) pi/2 rad", "B) pi rad", "C) 2pi rad", "D) 3pi/2 rad"},

    // ----- MIXED -----
    {"A) Doubles", "B) Becomes 4 times", "C) Becomes half", "D) Becomes one-fourth"},
    {"A) Velocity", "B) Acceleration", "C) Speed", "D) Direction of the force"},
    {"A) 2 N", "B) 8 N", "C) 4 N", "D) 16 N"},
    {"A) 2pi rad/s", "B) 4pi rad/s", "C) 120pi rad/s", "D) 8pi rad/s"},
    {"A) Doubles", "B) Remains the same", "C) Becomes half", "D) Becomes 4 times"}
    };

    char answerkey[] = {
    'B', 'A', 'B', 'C', 'C',
    // NORMAL
    'B', 'A', 'A', 'B', 'C',
    // MIXED
    'B', 'A', 'C', 'A', 'A',
     'A', 'B', 'C', 'A', 'C',
    // NORMAL
    'B', 'C', 'B', 'C', 'B',
    // MIXED
    'B', 'C', 'B', 'B', 'C'
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