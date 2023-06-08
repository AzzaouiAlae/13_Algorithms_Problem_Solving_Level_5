#include <iostream>
#include "clsMyString.h"

using namespace std;

int main()
{
    clsMyString MyString;
    MyString.Value = "Alae 1";
    cout << "Value 1 : " << MyString.Value << "\n\n";

    MyString.Value = "Alae 2";
    cout << "Value 2 : " << MyString.Value << "\n\n";

    MyString.Value = "Alae 3";
    cout << "Value 3 : " << MyString.Value << "\n\n";

    MyString.Value = "Alae 4";
    cout << "Value 4 : " << MyString.Value << "\n\n";

    cout << "----------------------------------------\n";
    MyString.Undo();
    cout << "Undo 1 : " << MyString.Value << "\n\n";

    MyString.Undo();
    cout << "Undo 2 : " << MyString.Value << "\n\n";

    MyString.Undo();
    cout << "Undo 3 : " << MyString.Value << "\n\n";

    MyString.Undo();
    cout << "Undo 4 : " << MyString.Value << "\n\n";

    cout << "----------------------------------------\n";
    MyString.Redo();
    cout << "Redo 1 : " << MyString.Value << "\n\n";

    MyString.Redo();
    cout << "Redo 2 : " << MyString.Value << "\n\n";

    MyString.Redo();
    cout << "Redo 3 : " << MyString.Value << "\n\n";


    MyString.Redo();
    cout << "Redo 4 : " << MyString.Value << "\n\n";
}