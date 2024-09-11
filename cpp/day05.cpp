/*

Ques-01 Write a C++ function that checks whether an integer is odd or even. If the integer is odd, print "Odd"; otherwise, print "Even."

Sample Input:
Enter a number: 5

Sample Output:
Odd


Ques-02 Write a C++ function that takes a string as input and reverses it.

Sample Input:
Enter a string: CipherSchools

Sample Output:
Reversed string: sloohcSrehpiC


Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
Assuming that string contains only lowercase.

Sample Input:
Enter a string: cipherschools

Sample Output:
Number of vowels: 4
Number of consonants: 9

*/


#include<iostream>
#include<string>

using namespace std;

void q1() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << (num % 2 == 0 ? "Even" : "Odd") << endl;
}

string reverseString(string str) {
    string reverse = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reverse += str[i];
    }

    return reverse;
}

void q2() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reverse = reverseString(str);
    cout << "Reversed string: " << reverse << endl;
}

void count(string str) {
    int vowels = 0, consonants = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        } else {
            consonants++;
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}

void q3() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    count(str);
}

int main() {
    q1();
    q2();
    q3();
    return 0;
}