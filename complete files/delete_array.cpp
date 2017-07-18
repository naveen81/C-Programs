#include<iostream>
using namespace std;
int findElement(int arr[], int n, int key);
int deleteElement(int arr[], int n,int key){
    int pos;

    pos = findElement(arr,n,key);
    if(pos==-1)
    {
       cout<<"Element not found";
        return n;
    }
    for(int i=pos; i<n-1;i++)
        arr[i] = arr[i+1];
    return n-1;
}
int findElement(int arr[],int n,int key){

    for(int i=0;i<n;i++)
        if(arr[i]==key)
            return i;
    return -1;
}

int main(){
    int i;
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 30;

    cout<<"Array before deletion"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<"\t";

    n= deleteElement(arr, n, key);

    cout<<"\nArray after deletion"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<"\t";

    return 0;
}
