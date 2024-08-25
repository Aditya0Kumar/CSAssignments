#include<iostream>
#include <string>
#include <cmath>
using namespace std;

/*
========================================================================================
Ques - 01 - Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

Sample Input :- Enter the first string: Hello
Enter the second string: World

Sample Output:- Concatenated string: HelloWorld
==============================================================================================

Ques-02 -Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

Sample Input:- Enter grade 1: 85
Enter grade 2: 90
Enter grade 3: 78
Enter grade 4: 92
Enter grade 5: 88

Sample Output:- The average grade is: 86.6

=================================================================================================
Ques-03 - Write a C++ program that takes an integer as input from the user and outputs its square.

Sample Input:- Enter a number: 7

Sample Output :- The square of 7 is: 49
=================================================================================================
*/



int main(){
    

    //1.
    string str1;
    string str2;
    cout<< "Enter the first string: ";
    cin>>str1;
    
    cout <<"Enter the second string: ";
    cin>>str2;
    
    cout<< "Concanated string : " << str1 + str2;
    cout<< endl;


    //2.
    int sum=0;
    for(int i =1;i<=5;i++){
        int m;
        cout<<"Enter grade "<<i<<": ";
        cin >> m;
        sum+=m;
    }
    float avg=sum/5.0;
    cout<< "The average grade is: "<<avg<<endl;
    
    
    //3.
    int x;
    cout << "Enter a number:";
    cin >> x;
    cout << "The square of " <<x<< " is: "<<x*x;

    return 0;
}