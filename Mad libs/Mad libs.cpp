
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string adjective, verb, adjective2, adjective3;

    cout << "Enter a adjective, verb, adjective, and adjective into the first line of Edgar Allan Poe's The Raven.";
    cout << "\nUpon a midnight [adjective], while I [verb], [adjective] and [adjective]";

    cout << "\nEnter the first adjective ";
    getline(cin, adjective);
    cout << "\nEnter the verb ";
    getline(cin, verb);
    cout << "\nEnter the second adjective ";
    getline(cin, adjective2);
    cout << "\nEnter the third adjective ";
    getline(cin, adjective3);

    cout << "\nUpon a midnight " << adjective << ", while I " << verb << ", " << adjective2 << " and "<< adjective3 << endl;

    return 0;
}

