#include <iostream>
using namespace std;
class Voting
{
private:
 int age;
public:
 void getAge()
 {
 cout << "Enter your age: ";
 cin >> age;
 }
 void checkEligibility()
 {
 if (age >= 18)
  cout << "You are eligible to vote." << endl;
 else
 cout << "You are not eligible to vote." << endl;
 }
};
int main()
{
 Voting v;// Object creation
  v.getAge();// Input age
 v.checkEligibility(); // Check eligibility
return 0;
}
    