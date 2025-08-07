#include<iostream>
using namespace std;
void missingNumber(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        
    }
    int totalSum=(n*(n+1))/2;
    int missingNumber = totalSum - sum;
    cout<<"Missing Number is "<<missingNumber;
}
int main(){
    int arr[7]{1,2,3,4,6,7};
    missingNumber(arr,7);
}