#include <iostream>
#include <string>
using namespace std;
int main() {
string s = "aaabbccccd";
string ans = "";
int count = 1;
for (int i = 0; i < s.length(); i++) {
while (i < s.length() - 1 && s[i] == s[i + 1]) {
count++;
i++;
}
if(count==1)
{
ans+=s[i];
}
else
{
ans += s[i];
ans += to_string(count);
}
count = 1;
}
cout << ans;
return 0;
}