#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
string str;
int l;
cin>>str;
l=str.size();
for(int i=l-1;i>=0;i--){
cout<<str[i];
}
cout<<endl;
}

return 0;
}
