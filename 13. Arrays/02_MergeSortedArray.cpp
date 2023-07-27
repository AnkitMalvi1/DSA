#include<iostream>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j])
            arr3[k++]=arr1[i++];
        else
            arr3[k++]=arr1[j++];
    }
    while (i<n)
    {
        arr3[k++]=arr1[i++];
    }
    while (j<m)
    {
        arr3[k++]=arr2[j++];
    }
    
}

int main(){
    int arr1[6]={1,2,3,0,0,0};
    int arr2[3]={2,3,5};
    int arr3[]={0};
    merge(arr1,6,arr2,3,arr3);

}