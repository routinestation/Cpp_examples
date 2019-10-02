# include <iostream>

using namespace std;

int main()
{
    // Example 1
    cout << "Hello";
    cout << "Routine Station " << endl;

    // Example 2
    cout << "Hello\n";
    cout << "Routine Station" << endl;

    // Example 3
    string phrase = "Routine Station";
    cout << phrase << endl;

    // Example 4
    cout << phrase.length() <<endl;

    // Example 5
    // Index in C++
    // Routine Station
    // 0123456789...
    cout << phrase[0] << endl;

    // Example 6 
    // Replace
    phrase[0] = 'M';
    cout << phrase << endl;

    // Example 7
    // find
    cout << phrase.find("Station") <<endl;

    // Example 8
    // replace
    string subPhrase;
    subPhrase = phrase.substr(8, 3);
    cout << subPhrase << endl;




    return 0;
}