#include<iostream>
using namespace std;

int bubblesort(int arr[],int n){
    int temp;
    int count=0;
    for(int k=0;k<n-1;k++)
    {
        for(int j=0;j<n-k-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n,i;
    int count=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];

    }

cout<<bubblesort(arr,n);    

    return 0;
}