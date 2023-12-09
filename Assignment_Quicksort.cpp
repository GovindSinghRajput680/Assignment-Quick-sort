#include<iostream>
using namespace std;
int main(){//Q 3
    int n;
cout<<"Enter the size of array : ";
cin>>n;
int arr[n];
cout<<"Enter elements of array : ";
for(int i =0;i<n;i++) cin>>arr[i];

// Now solution  start
int i =0,j = n-1;
while(i<=j){
    if(arr[i]<arr[i+1]) i++;
    else if(arr[j]>arr[j-1]) j--;
    else break;
}
swap(arr[i],arr[j]);
for(int i =0;i<n;i++) cout<<arr[i]<<" ";

}