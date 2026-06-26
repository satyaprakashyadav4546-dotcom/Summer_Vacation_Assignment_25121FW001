#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
srand(time(0));
int secretNumber = rand() % 100 + 1;
int guess;
cout << "Welcome to the Number Guessing Game!" << endl;
cout << "Guess a number between 1 and 100." << endl;
while(true)
{
cout << "Enter your guess: ";
cin >> guess;
if(guess < secretNumber)
{
cout << "Too low! Try again." << endl;
}
else if(guess > secretNumber)
{
cout << "Too high! Try again." << endl;
}
else
{
cout << "Congratulations! You guessed the correct number." << endl;
break;
}
}
    return 0;
}