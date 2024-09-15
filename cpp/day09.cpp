/*

Ques 1: Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address of this variable.
Print the value of the variable using both the variable itself and the pointer.

Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the array.
Use pointer arithmetic to print all the elements of the array.

Ques 3: Create a program that demonstrates the use of a pointer to a pointer.
Declare an integer variable, a pointer to the integer, and a pointer to that pointer.
Use all three to print the value of the integer.

*/

#include<iostream>
using namespace std;

int main(){
    //1
    int var01;
    cout<<"Enter value: ";
    cin>>var01;

    int* ptr01=&var01;

    cout<<"Variable itself: "<<var01<<endl;
    cout<<"Value using pointer: "<<*ptr01;
    cout<<endl;
    //2
    
    int arr[5]={1,2,3,4,5};
    int* ptr02=arr;

    for(int i=0;i<5;i++){
        cout<<*(ptr02+i)<<" ";
    }
    cout<<endl;
    //3
    int var03=5;
    int* ptr03 = &var03;
    int** pptr03=&ptr03;

    cout<<"integer variable: "<<var03<<endl<<"pointer to the integer: "<<*ptr03<<endl<<"a pointer to that pointer: "<<**pptr03<<endl;
}
