#include<iostream>

using namespace std;

int main()
{
    string color, pluralNoun, celebrity;

    cout << "Enter a color: " << endl;
    getline( cin, color);

    cout << "Enter your plural noun: " << endl;
    getline (cin, pluralNoun);

    cout << "Enter a celebrity name: " << endl;
    getline (cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    

    return 0;
}