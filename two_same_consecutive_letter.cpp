#include <iostream>
using namespace std;
int main()
{
int c;
//Enter number of test cases
cin >> c;
while( c-- ){
        //Enter string
string s;
cin >> s;
for(int i=0; i<s.length(); i++){
if(s[i] != s[i+1]) cout << s[i];
}
cout << endl;
}
return 0;
}
