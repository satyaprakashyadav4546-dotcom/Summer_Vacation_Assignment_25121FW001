#include <iostream>
using namespace std;
int main()
{
    int score = 0, ans;
    cout << "===== QUIZ APPLICATION =====" << endl;
    // Question 1
    cout << "\n1. What is the capital of India?" << endl;
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai" << endl;
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == 2)
    {
        cout << "Correct!" << endl;
        score++;
    }
    else
    {
        cout << "Wrong!" << endl;
    }
    // Question 2
    cout << "\n2. Which language is used for C++ programming?" << endl;
    cout << "1. HTML\n2. C++\n3. SQL\n4. CSS" << endl;
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == 2)
    {
        cout << "Correct!" << endl;
        score++;
    }
    else
    {
        cout << "Wrong!" << endl;
    }
    // Question 3
    cout << "\n3. How many days are there in a week?" << endl;
    cout << "1. 5\n2. 6\n3. 7\n4. 8" << endl;
    cout << "Enter your answer: ";
    cin >> ans;
    if (ans == 3)
    {
        cout << "Correct!" << endl;
        score++;
    }
    else
    {
        cout << "Wrong!" << endl;
    }
    cout << "\n===== RESULT =====" << endl;
    cout << "Your Score = " << score << " / 3" << endl;
    if (score == 3)
        cout << "Excellent!" << endl;
    else if (score == 2)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;
    return 0;
}