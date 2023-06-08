#include <iostream>
#include "clsMyQueue.h"

using namespace std;

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


    system("pause>0");
}