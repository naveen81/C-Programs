#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main(){
string str,s1;
int l,d=0,n=0;
cout<<"Enter two strings: "<<endl;
cin>>str>>s1;
cout<<"First string is: "<<str<<endl<<"Second string is: "<<s1<<endl;
str =str+s1;
cout<<"String after concatenation: "<<str<<endl;
l= str.size();
cout<<"The length of String now becomes: "<<l<<endl;
for(int i=0;str[i]!='\0';i++)
 {
     n++;
 }
cout<<"Value of counter for string is: "<<n;
return 0;
}
