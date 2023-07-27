#include<iostream>
using namespace std;

void reverseArrayFromPosition(int arr[],int n,int m){
    int s=m+1,e=n-1;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){

    int arr[5]={1,2,3,4,5};

    reverseArrayFromPosition(arr,5,4);

    return 0;
}