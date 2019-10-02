#include<iostream>

using namespace std;

int main()
{
    int luckyNums [] = {5, 3, 7, 11, 9};
    //                  0  1  2   3  4        
    cout << luckyNums[2] << endl;

    //Modify
    luckyNums [3] = 8;
    cout << luckyNums[3]<< endl;

     
    return 0;
}