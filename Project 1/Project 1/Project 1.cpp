#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MyList;

    MyList.InsertAtEnd(1);
    MyList.InsertAtEnd(2);
    MyList.InsertAtEnd(3);
    MyList.InsertAtEnd(4);
    MyList.InsertAtEnd(5);
    MyList.InsertAtEnd(6);
    MyList.InsertAtEnd(7);
    MyList.InsertAtEnd(8);


    cout << "My List items\n";   
    MyList.PrintList();

    clsDblLinkedList <int>::Node* N1 = MyList.GetNode(5);

    cout << "\n\n" << N1->Value << endl;

    MyList.Update(0, 500);

    cout << "The Value is : " << MyList.GetValue(0);

    MyList.InsertAfter(N1, 100);

    cout << "\n\nMy List items\n";
    MyList.PrintList();

    system("pause>0");
}