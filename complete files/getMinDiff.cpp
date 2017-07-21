// C++ program to find the minimum possible
// difference between maximum and minimum
// elements when we have to add/subtract
// every number by k
#include<bits/stdc++.h>
using namespace std;

int getMaxDiff(int a[],int n, int k)
{
    int mx = *max_element(a, a+n);
    int mn = *min_element(a, a+n);

    int sum = accumulate(a, a+n, 0);
    if(sum <= k*n)
    {
        for(int i=0; i<n; i++)
            a[i] += k;
        return mx-mn;
    }

    for(int i=0;i<n;i++)
    {
        if(abs((mx+mn)-2*(a[i]+k)) <= abs((mx+mn)-2*(a[i]-k)))
            a[i] += k;
        else
            a[i] -= k;
    }
    return (*max_element(a, a+n) - *min_element(a, a+n));
}

int main()
{
    int arr[] = {1, 10, 14, 14, 14, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 6;
    int res = getMaxDiff(arr, n, k);
    //Modified array
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\nMaximum difference between height of two towers is :"<<res<<endl;
    return 0;
}
