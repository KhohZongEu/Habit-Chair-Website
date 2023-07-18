#include <iostream>
using namespace std;
#include <string>
string name = "";
string publish = "";

int main()
{
    cout << "Input the name of the book: ";
    cin >> name;
    cout << "Input the date of publication: ";
    cin >> publish;
    cout << "\nThe name of the Book is: " << name;
    cout << "\nThe publication date of the Book is: " << publish;
}