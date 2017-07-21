//Find the minimum distance between two numbers
#include<iostream>
#include<limits.h>
using namespace std;

int minDist(int arr[], int n, int x,int y)
{
    int min_dist = INT_MAX;
    int prev,i=0;

    for(i=0;i<n;i++)
    {
        if(arr[i]==x ||arr[i]==y)
        {
            prev = i;
            break;
        }
    }
    for(; i<n;i++)
    {
        if(arr[i]==x || arr[i]==y)
        {
            if(arr[prev]!=arr[i] && (i-prev) < min_dist )
            {
                min_dist = i-prev;
                prev = i;
            }
            else
                prev = i;
        }
    }
    return min_dist;
}

int main()
{
    int arr[] = {3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 2;
    int y = 8;
    cout<<"Minimum distance is "<<minDist(arr, n, x, y)<<endl;
    return 0;
}
