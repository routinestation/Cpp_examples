# include<iostream>

using namespace std;


// New function
void sayHi(string name, int age){
    cout << "Hello " << name << " you are " << age << " years old!" << endl;
}

int main()
{
    sayHi("HamiD", 35);
    sayHi("Sara", 30);
    return 0;
}