#include <iostream>
#include "clsMyStack.h"

using namespace std;

int main()
{
    clsMyStack <int> MyStack;

    MyStack.push(10);
    MyStack.push(20);
    MyStack.push(30);
    MyStack.push(40);
    MyStack.push(50);

    cout << "My Stack items\n";
    MyStack.Print();
    cout << "\n\n\n";

    cout << "Stack size : " << MyStack.Size() << endl;
    cout << "Stack Top : " << MyStack.Top() << endl;
    cout << "Stack Bottom : " << MyStack.Bottom() << endl;

    MyStack.pop();
    cout << "\nMy Stack items\n";
    MyStack.Print();

    cout << "\n\nItem(2) : " << MyStack.GetItem(2);

    MyStack.Reverse();
    cout << "\n\nMy Stack after Reverse\n";
    MyStack.Print();

    MyStack.Update(2, 600);
    cout << "\n\nMy Stack after Update\n";
    MyStack.Print();

    MyStack.InsertAfter(2, 800);
    cout << "\n\nMy Stack after Insert 800 After item(2)\n";
    MyStack.Print();

    MyStack.InsertAtFront(1000);
    cout << "\n\nMy Stack after Insert 1000 at front\n";
    MyStack.Print();

    MyStack.InsertAtBack(2000);
    cout << "\n\nMy Stack after Insert 2000 at Bottom\n";
    MyStack.Print();

    MyStack.Clear();
    cout << "\n\nMy Stack after Clear\n";
    MyStack.Print();

    system("pause>0");
}