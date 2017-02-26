#include<iostream>
#include<stdio.h>
using namespace std;
int main ( ) {
    int A[50],n ;
    printf("Enter the size of Array: ");
    cin>> n;
    for(int i=0;i<n;i++)
        cin>>A[i];

    // Take a variable of integer type to store sum and initialize it to 0 .
    int SUM = 0;

    /* Run a loop from starting index to ending index. */

    for( int i = 0 ; i < n ;i++ ) {
        SUM = SUM + A[ i ] ;
    }
    printf("The required output is:  %d\n", SUM);
    return 0;
}
