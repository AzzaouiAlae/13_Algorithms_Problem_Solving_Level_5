#include <iostream>
#include "clsMyDainamicaArray.h"

using namespace std;

int main()
{
    clsMyDainamicaArray <int> MyList(5);

    cout << "My Array is empty : " << boolalpha << MyList.IsEmpty() << endl;
    cout << "Array size : " << MyList.Size() << "\n\n";


    MyList.SetItem(0, 10);
    MyList.SetItem(1, 20);
    MyList.SetItem(2, 30);
    MyList.SetItem(3, 40);
    MyList.SetItem(4, 50);

    cout << "\nMy Array Item :\n";
    MyList.PrintList();

    MyList.InsertAtBeginnine(400);
    cout << "\n\nMy Array Item after Insert At Beginnine Value 400  :\n";
    MyList.PrintList();

    MyList.InsertBefor(2, 500);
    cout << "\n\nMy Array Item after Insert Befor 2 Value 500  :\n";
    MyList.PrintList();

    MyList.InsertAfter(2, 600);
    cout << "\n\nMy Array Item after Insert After 2 Value 600  :\n";
    MyList.PrintList();

    MyList.InsertAtEnd(800);
    cout << "\n\nMy Array Item after Insert At End Value 800  :\n";
    MyList.PrintList();

    system("pause>0");
}