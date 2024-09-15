/*

Ques 1: Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an integer array. Test your function with various arrays in the main() function.

Example:

Input: {1, 5, 3, 9, 2}
Output: 9

Ques 2: Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a palindrome (a word, phrase, or sequence that reads the same backward as forward). The function should ignore spaces, punctuation, and case sensitivity. Test your function with various strings in the main() function.

Example:

Input: "A man, a plan, a canal, Panama"
Output: true

*/


#include<iostream>
using namespace std;

int findMax(const int arr[], int size){
    int max=INT_MIN;

    for(int i=0;i < size; i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }

    return max;
}


bool isPalindrome(const string str){
    string str2;

    for(char c : str){
        if(isalnum(c)){
            str2+=tolower(c);
        }
    }

    int low=0;
    int high=str2.length()-1;

    while(low<high){
        if(str2[low] != str2[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}


int main(){
    //1. 
    int size;
    cin>>size;
    cout<<"Array: ";
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<findMax(arr,size)<<endl;

    //2. 
    string str;
    cout<<"string: ";
    getline(cin,str);

    cout<<isPalindrome(str);
}
