// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_ending_here = 0, max_so_far = INT_MIN;

    for(int i=0;i<size;i++)
    {
        max_ending_here += a[i];
        if(max_ending_here < 0)
            max_ending_here = 0;
        else if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;

    }
    return max_so_far;
}

int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n, max_sum = 0;
    n = sizeof(a)/sizeof(a[0]);
    max_sum = maxSubArraySum(a,n);
    cout<<max_sum<<endl;
    return 0;
}
