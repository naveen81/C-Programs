#include<bits/stdc++.h>
using namespace std;

void findMinAvgSubarray(int a[], int n, int k)
{
    if(n<k)
        return;

    int res_index =0;
    int cur_sum = 0;
    for(int i=0;i<k;i++)
        cur_sum += a[i];

    int min_sum = cur_sum;
    for(int i=k; i<n; i++)
    {
        cur_sum = cur_sum + a[i] - a[i-k];

        if(cur_sum < min_sum)
        {
            min_sum = cur_sum;
            res_index = i-k+1;
        }
    }

    cout<<"Subarray between ["<<res_index<<", "<<res_index+k-1<<"] has minimum average which is "<<min_sum/k<<endl;
}

int main()
{
    int a[] = {3, 7, 5, 20, -10, 0, 12};
    int k = 2;//subarray size
    int n = sizeof(a)/sizeof(a[0]);
    findMinAvgSubarray(a, n, k);
    return 0;
}
