/*

Ques 1: Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.

Sample Input:- str1 = "Hello, World!"
Output:- 13


Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.

Sample Input:- String ="Hello, World!"
character=’l’
Output:- 3


Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.

Sample Input : - str1 = "Hello, "
str2 = "World!"

Sample Output :- "Hello, World!"

*/



#include<iostream>
using namespace std;


//1.

int stringLength(string str){
    int count=0;
    for(char c : str){
        count++;
    }

    return count;
}

//2

int countCharacter(string str2, char c){
    int count=0;
    for(char cc : str2){
        if(cc==c){
            count++;
        }
    }

    return count;
}

//3

string concatenateStrings(string strx1, string strx2){
    
    string strx3= strx1 + strx2;
    return strx3;

}

int main(){
    //1

    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    cout<<"Length is: "<<stringLength(str)<<endl;

    //2
    string str2;
    char c;
    cout<<"Enter string: ";
    getline(cin,str2);
    cout<<"Enter Character: ";
    cin>>c;
    cout<<"Occurance is: "<<countCharacter(str2,c)<<endl;

    //3
    string strx1, strx2;
    cout<<"Enter string 1 : ";
    getline(cin,strx1);
    cout<<endl;
    cout<<"Enter string 2 : ";
    getline(cin,strx2);
    cout<<"Occurance is: "<<concatenateStrings(strx1,strx2);
}