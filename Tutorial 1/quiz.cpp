#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string questions[] = {
        {"If a and b are positive integers such that GCD(a,b) = 12 and LCM(a,b) = 180, which of the following CAN be the value of a+b? "},
   
        {"Which of the following numbers is irrational? "},

        {"If N = 2^4 x 3^3 x 5^2, then the number of positive factors of N is: "},

        {"Three bells ring at intervals of 12, 18, and 30 seconds respectively. If they ring together at exactly 10:00:00, after how many seconds will they next ring together? "},

        {"Which statement is always true? "},

        {"A number n leaves remainder 5 when divided by 12 and remainder 9 when divided by 16. What is the smallest positive value of n? "},

        {"If the HCF of two numbers is 18 and their product is 5832, which of the following could be their LCM? "},
        
        {"What is the value of 48 + 36 / 6 x 3 - 10? "},

        {"Simplify: 120 - [36 / 3 x (5 + 1)] + 8. "},

        {"What is 25 x 48 - 25 x 18? "},

        {"A number is divided by 8 and then 6 is added to the result. If the final answer is 21, what was the original number? "},

        {"What is the value of 3 + 4 x 2^2 - 18 / 3? "},

        {"Without using a calculator, which is the closest value of 49.8 x 20.1? "},

        {"Estimate 398 x 51 by rounding each number to the nearest ten. "},

        {"A shopkeeper has Rs. 2,500. He spends Rs. 875 on books and Rs. 640 on clothes. He then receives Rs. 300. Approximately how much money does he have left? "},
        {"Which of the following is an SI fundamental quantity? "},

        {"A distance of 5.6 km is equal to how many micrometers? "},

        {"Which of the following has the dimensions of velocity? "},

        {"The value 0.004560 written in scientific notation is: "},

        {"How many significant figures are present in 0.0050600? "},

        {"A measurement is recorded as 25.4 +/- 0.2 cm. What is the percentage uncertainty approximately? "},

        {"Which of the following is a derived SI unit? "},

        {"A length is measured as 2.50 m. If it is converted into millimeters, which value correctly represents the measurement with the same number of significant figures? "},
        
        {"Which of the following is a scalar quantity? "},

        {"Two vectors have magnitudes 6 N and 8 N and act in the same direction. What is the magnitude of their resultant? "},

        {"Two perpendicular vectors have magnitudes 6 N and 8 N. What is the magnitude of their resultant? "},

        {"A vector has components 3 units in the x-direction and 4 units in the y-direction. What is its magnitude? "},

        {"Two vectors have magnitudes 10 N and 6 N and act in opposite directions. What is the magnitude of their resultant? "},

        {"A vector of magnitude 10 units makes an angle of 30 degrees with the positive x-axis. What is its x-component? "},

        {"Two perpendicular vectors have magnitudes 5 N and 12 N. What angle does their resultant make with the 5 N vector? "}
    };

    string options[][4] = {
        {"A. 72", "B. 84", "C. 96", "D. 108"},

        {"A. sqrt(81)/9", "B. sqrt(50) - 5sqrt(2)",
         "C. sqrt(18)/sqrt(2)", "D. sqrt(12) - sqrt(3)"},

        {"A. 48", "B. 60", "C. 72", "D. 90"},

        {"A. 90", "B. 120", "C. 180", "D. 360"},

        {"A. The sum of two irrational numbers is irrational.",
         "B. The product of two irrational numbers is irrational.",
         "C. The sum of a rational and an irrational number is irrational.",
         "D. The difference of two irrational numbers is irrational."},

        {"A. 29", "B. 41", "C. 57", "D. 69"},

        {"A. 162", "B. 216", "C. 324", "D. 486"},
        
        {"A. 56", "B. 62", "C. 68", "D. 74"},

        {"A. 50", "B. 56", "C. 64", "D. 72"},

        {"A. 650", "B. 700", "C. 750", "D. 800"},

        {"A. 96", "B. 108", "C. 120", "D. 128"},

        {"A. 11", "B. 13", "C. 15", "D. 17"},

        {"A. 900", "B. 950", "C. 1000", "D. 1050"},

        {"A. 18,000", "B. 20,000", "C. 21,000", "D. 22,000"},

        {"A. Rs. 1,185", "B. Rs. 1,285", "C. Rs. 1,385", "D. Rs. 1,485"},
        {"A. Force", "B. Energy", "C. Electric current", "D. Pressure"},

        {"A. 5.6 x 10^6 micrometers", "B. 5.6 x 10^7 micrometers", 
        "C. 5.6 x 10^9 micrometers", "D. 5.6 x 10^12 micrometers"},

        {"A. [M L T^-1]", "B. [M L T^-2]", 
        "C. [M L^2 T^-2]", "D. [M^0 L^0 T^-1]"},

        {"A. 4.56 x 10^-2", "B. 4.56 x 10^-3", 
        "C. 45.6 x 10^-4", "D. 0.456 x 10^-2"},

        {"A. 3", "B. 4", "C. 5", "D. 6"},

        {"A. 0.08%", "B. 0.79%", "C. 1.27%", "D. 2.54%"},

        {"A. Kilogram", "B. Meter", "C. Second", "D. Newton"},

        {"A. 250 mm", "B. 2.50 mm", "C. 2.50 x 10^3 mm", "D. 250. mm"},
        {"A. Displacement", "B. Velocity", "C. Speed", "D. Acceleration"},

        {"A. 2 N", "B. 8 N", "C. 14 N", "D. 48 N"},

        {"A. 2 N", "B. 10 N", "C. 14 N", "D. 48 N"},

        {"A. 3 units", "B. 4 units", "C. 5 units", "D. 7 units"},

        {"A. 4 N", "B. 6 N", "C. 16 N", "D. 60 N"},

        {"A. 5 units", "B. 5sqrt(3) units", "C. 10 units", "D. 10sqrt(3) units"},

        {"A. 22.6 degrees", "B. 45 degrees", "C. 67.4 degrees", "D. 90 degrees"}

    };

    int size2 = sizeof(questions) / sizeof(questions[0]);

    char answerkey[] = {
    'C', 'D', 'B', 'C', 'C', 'B', 'C',
    'A', 'B', 'C', 'C', 'B', 'C', 'B', 'B',
    'C', 'C', 'A', 'B', 'C', 'B', 'D', 'C',
    'C', 'C', 'B', 'C', 'A', 'B', 'C'
    };
    char guess;
    int score = 0;

    for (int i = 0; i < size2; i++)
    {
        cout << "\n**********************************";
        cout << '\n' << questions[i];
        cout << "\n**********************************";

        for (int j = 0; j < size; j++)
        {
            cout << "\n" << options[i][j];
        }

        cout << "\n";

        cin >> guess;

        guess = toupper(guess);

        if (guess == answerkey[i])
        {
            cout << "CORRECT\n";
            score++;
        }
        else
        {
            cout << "WRONG";
            cout << "\nAnswer: " << answerkey[i] << '\n';
        }
    }

    cout << "\n# of questions: " << size;
    cout << "\nYour score is : " << score;
    cout << "\nScore percentage: " << (score / (double)size) * 100 << "%";

    cout << "\n\nPress Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}