#include<iostream>
using namespace std;

int getMax(int num1, int num2){
    int result;
    if (num1 > num2){
        result = num1;
    } else {
        result = num2;
    }
    return result;
}
 

int main()
{
    int num1, num2;
    cout << "Please enter 2 numbers then I will tell you the bigger one:" <<endl;
    cout << "Enter your first number: \n";
    cin >> num1; 
    cout << "Enter your second number: \n";
    cin >> num2;
    cout << "The bigger number is: " <<getMax(num1,num2) <<endl;


    return 0;
}

