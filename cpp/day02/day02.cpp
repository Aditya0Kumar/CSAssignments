#include<iostream>
#include <string>
#include <cmath>
using namespace std;

/*

Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

Sample Input:- Enter the first number: 10
Enter the second number: 20
Enter the third number: 15

Sample Output :- The largest number is: 20


Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
Grade Criteria:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: 0-59

Sample Input:- Enter the score: 85
Sample Output:- Grade: B"


Ques-03: Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

Sample Input:-Enter a number : 5
Sample Output :- The month is: May"


*/


int main(){
    //1.

    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    if((a>b)&&(a>c)){
        cout<<"The largest number is: "<<a;
    }
    else if((b>a)&&(b>c)){
        cout <<"The largest number is: "<<b;
    }
    else{
        cout<< "The largest number is: "<<c;
    }
    cout<<endl;

    //2.
    int m;
    cout<<"Enter the score: ";
    cin >> m;
    cout <<"Grade: ";
    if(m>=90) {cout << "A";}
    else if(m>=80 && m<90){cout << "B";}
    else if(m>=70 && m<80){cout << "C";}
    else if(m>=60 && m<70){cout << "D";}
    else{cout<<"F";}
    cout<<endl;

    //3.
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<"The month is: ";
    switch(x){
        case 1:
        cout<<"January";
        break;
        case 2:
        cout<<"February";
        break;
        case 3:
        cout<<"March";
        break;
        case 4:
        cout<<"April";
        break;
        case 5:
        cout<<"May";
        break;
        case 6:
        cout<<"June";
        break;
        case 7:
        cout<<"July";
        break;
        case 8:
        cout<<"August";
        break;
        case 9:
        cout<<"September";
        break;
        case 10:
        cout<<"August";
        break;
        case 11:
        cout<<"Nevember";
        break;
        case 12:
        cout<<"December";
        break;
        default:
        cout<< "Invalid";
        break;
    }
    cout>>endl;
}