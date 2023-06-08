#include <iostream>
#include "clsMyQueue.h"

int main()
{
    clsMyQueue <int> MyQueue;

    MyQueue.push(10);
    MyQueue.push(20);
    MyQueue.push(30);
    MyQueue.push(40);
    MyQueue.push(50);

    cout << "My Queue items\n";
    MyQueue.Print();
    cout << "\n\n\n";

    cout << "Queue size : " << MyQueue.Size() << endl;
    cout << "Queue Front : " << MyQueue.Front() << endl;
    cout << "Queue Back : " << MyQueue.Back() << endl;

    MyQueue.pop();
    cout << "\nMy Queue items\n";
    MyQueue.Print();

    cout << "\n\nItem(2) : " << MyQueue.GetItem(2);

    MyQueue.Reverse();
    cout << "\n\nMy Queue after Reverse\n";
    MyQueue.Print();

    MyQueue.Update(2, 600);
    cout << "\n\nMy Queue after Update\n";
    MyQueue.Print();

    MyQueue.InsertAfter(2, 800);
    cout << "\n\nMy Queue after Insert 800 After item(2)\n";
    MyQueue.Print();

    MyQueue.InsertAtFront(1000);
    cout << "\n\nMy Queue after Insert 1000 at front\n";
    MyQueue.Print();

    MyQueue.InsertAtBack(2000);
    cout << "\n\nMy Queue after Insert 2000 at Back\n";
    MyQueue.Print();

    MyQueue.Clear();
    cout << "\n\nMy Queue after Clear\n";
    MyQueue.Print();

    system("pause>0");
}