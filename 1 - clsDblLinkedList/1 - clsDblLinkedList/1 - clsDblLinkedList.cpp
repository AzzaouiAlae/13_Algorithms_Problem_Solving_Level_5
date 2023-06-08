#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MydblLinkedList;
    MydblLinkedList.InsertAtBeginning(1);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(5);

    MydblLinkedList.PrintList();

    cout << "\n\nSize of My List is : " << MydblLinkedList.Size() << endl << endl << endl;

    clsDblLinkedList<int>::Node* NodeToFind;
    NodeToFind = MydblLinkedList.GetNode(2);
    cout << "\n\nMy Node of index [2] is : " << NodeToFind->Value << endl;

    MydblLinkedList.UpdateItem(0, 600);

    cout << "\n\nMy item of index [0] is : " << MydblLinkedList.GetItem(0) << endl;

    MydblLinkedList.InsertAfter(0, 5);

    cout << "\n\nMy item of index [1] is : " << MydblLinkedList.GetItem(1) << endl;

    cout << "\n\nAfter Insert\n";
    MydblLinkedList.PrintList();

    system("pause>0");
}