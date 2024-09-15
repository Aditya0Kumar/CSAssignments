/*
Ques 1: You are given an array and target value. Your task is to find the target value that exists in the array. If it exists inside an array then print YES otherwise NO.

Sample Input :- Array -[2,4,6,7,8]
Target: 6
Output: YES

Ques 2: You are given an array and target value. You have to find the index of target value. If target doest exist inside the array then print -1.Assume indexing is 1 based.

Sample Input :- Array -[2,4,6,7,8]
Target: 6
Output: 3
*/


#include<iostream>
using namespace std;


//1
void findTarget(int arr01[], int n01, int target01){
    for(int i=0;i<n01;i++){
        if(arr01[i]==target01){
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}

//2
int findIt(int arr[], int n, int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}



int main(){
    //1.
    int n01;
    cout<<"Size: ";
    cin>>n01;
    cout<<"Array: ";
    int arr01[n01];
    for(int i=0;i<n01;i++){
        cin>>arr01[i];
    }
    int target01;
    cout<<"Target: ";
    cin>>target01;
    cout<<"Presence:  ";
    findTarget(arr01,n01,target01);
    cout<<endl;

    //2.
    int n;
    cout<<"Size: ";
    cin>>n;
    int arr[n];
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Target: ";
    cin>> target;
    cout<<"Index: "<<findIt(arr,n,target)<<endl;
}
