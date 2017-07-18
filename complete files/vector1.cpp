#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(8);

    vec.push_back(1);
    vec.push_back(8);
    cout<<vec[2];
    for(int i; i<vec.size(); i++)
        cout<< vec[i] << " ";
    cout<<vec.size();
    return 0;
}
