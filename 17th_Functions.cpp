# include<iostream>

using namespace std;

// Create a function signature if you would like to call your main function first
void sayHi(string name, int age);

int main()
{
    sayHi("HamiD", 35);
    sayHi("Sara", 30);
    return 0;
}

// New function
void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << " years old!" << endl;
}