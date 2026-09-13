#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
    // ---------- EASY (5) ----------
    "1. What is 10% of 200?",
    "2. What is 25% of 80?",
    "3. What is 50% of 360?",
    "4. A shirt costs $40. It is increased by 10%. What is the new price?",
    "5. A price of $100 is decreased by 20%. What is the new price?",

    // ---------- NORMAL (5) ----------
    "6. What is 12% of 250?",
    "7. A laptop's price increased from $500 to $600. What is the percentage increase?",
    "8. A number decreased by 15% becomes 170. What was the original number?",
    "9. A jacket's price dropped from $80 to $60. What is the percentage decrease?",
    "10. 45 is what percent of 180?",

    // ---------- MIXED (5) ----------
    "11. After a 20% discount, a phone costs $480. What was the original price?",
    "12. A population grows from 4,000 to 4,600. What is the percentage increase?",
    "13. A price is first increased by 10% and then decreased by 10%. If the original price was $200, what is the final price?",
    "14. A worker's salary increased by 25% to $2,500. What was the original salary?",
    "15. A car's value depreciated from $20,000 to $15,000. What is the percentage change (decrease)?",

    // ---------- EASY (5) ----------
    "1. Which of the following is a scalar quantity?",
    "2. Which of the following is a vector quantity?",
    "3. If A = (3, 4), what is the magnitude of A?",
    "4. Add the vectors A = (2, 3) and B = (1, 5).",
    "5. Subtract vector B = (1, 2) from A = (4, 6).",

    // ---------- NORMAL (5) ----------
    "6. What is the unit vector in the direction of A = (3, 4)?",
    "7. Find the resultant of two vectors A = (5, 0) and B = (0, 5).",
    "8. What is the x-component of a vector with magnitude 10 at 60° from the x-axis? (cos60° = 0.5)",
    "9. Find the dot product of A = (2, 3) and B = (4, 1).",
    "10. If A = (1, 0) and B = (0, 1), what is A × B (cross product, z-component)?",

    // ---------- MIXED (5) ----------
    "11. Two vectors A = (3, 4) and B = (4, 3) are added. What is the magnitude of the resultant?",
    "12. If A · B = 0 for two nonzero vectors, what can be concluded about A and B?",
    "13. Find the cross product magnitude of A = (2, 0, 0) and B = (0, 3, 0).",
    "14. A vector has components (6, 8). What is its unit vector?",
    "15. If A = (2, -1, 3) and B = (0, 4, -2), find A · B."

    };

    string options[][4] = {
    // 1
    {"A) 10", "B) 20", "C) 15", "D) 25"},
    // 2
    {"A) 15", "B) 20", "C) 25", "D) 30"},
    // 3
    {"A) 150", "B) 160", "C) 170", "D) 180"},
    // 4
    {"A) $42", "B) $44", "C) $40", "D) $48"},
    // 5
    {"A) $70", "B) $80", "C) $85", "D) $90"},

    // 6
    {"A) 25", "B) 30", "C) 35", "D) 20"},
    // 7
    {"A) 15%", "B) 20%", "C) 25%", "D) 10%"},
    // 8
    {"A) 190", "B) 195", "C) 200", "D) 185"},
    // 9
    {"A) 20%", "B) 25%", "C) 30%", "D) 15%"},
    // 10
    {"A) 20%", "B) 25%", "C) 30%", "D) 35%"},

    // 11
    {"A) $500", "B) $550", "C) $600", "D) $575"},
    // 12
    {"A) 12%", "B) 15%", "C) 10%", "D) 18%"},
    // 13
    {"A) $198", "B) $200", "C) $202", "D) $195"},
    // 14
    {"A) $2,000", "B) $1,900", "C) $2,100", "D) $1,800"},
    // 15
    {"A) 20%", "B) 25%", "C) 30%", "D) 15%"},

    // 1
    {"A) Velocity", "B) Force", "C) Mass", "D) Displacement"},
    // 2
    {"A) Temperature", "B) Speed", "C) Acceleration", "D) Energy"},
    // 3
    {"A) 5", "B) 7", "C) 6", "D) 4"},
    // 4
    {"A) (3, 8)", "B) (1, 2)", "C) (3, 7)", "D) (2, 8)"},
    // 5
    {"A) (3, 4)", "B) (3, 3)", "C) (5, 4)", "D) (4, 4)"},

    // 6
    {"A) (0.6, 0.8)", "B) (0.8, 0.6)", "C) (3, 4)", "D) (0.5, 0.5)"},
    // 7
    {"A) 5", "B) 7.07", "C) 10", "D) 25"},
    // 8
    {"A) 5", "B) 8.66", "C) 10", "D) 6"},
    // 9
    {"A) 10", "B) 11", "C) 14", "D) 8"},
    // 10
    {"A) 0", "B) 1", "C) -1", "D) 2"},

    // 11
    {"A) 7", "B) 9.9", "C) 7.07", "D) 5"},
    // 12
    {"A) They are parallel", "B) They are equal", "C) They are perpendicular", "D) They are opposite"},
    // 13
    {"A) 0", "B) 5", "C) 6", "D) 3"},
    // 14
    {"A) (0.6, 0.8)", "B) (0.8, 0.6)", "C) (6, 8)", "D) (0.75, 1)"},
    // 15
    {"A) -10", "B) -1", "C) 10", "D) 1"}

    };

    char answerkey[] = {
    'B','B','D','B','B',   // Easy: 1-5 (Percentages) — fixed indices 2,3,4
    'B','B','C','B','B',   // Normal: 6-10
    'C','B','A','A','B',   // Mixed: 11-15

    'C','C','A','A','A',   // Easy: 1-5 (Vectors) — all correct
    'A','B','A','B','B',   // Normal: 6-10
    'B','C','C','A','A'    // Mixed: 11-15
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