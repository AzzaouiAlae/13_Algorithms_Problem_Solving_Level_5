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

    cout << "\n\nItem (2) : " << MyList.GetItem(2);

    MyList.Revese();
    cout << "\n\nMy Array Item after revers:\n";
    MyList.PrintList();

    MyList.DeleteItemAt(3);
    cout << "\n\nMy Array Item after Delete Item At (3):\n";
    MyList.PrintList();
    
    system("pause>0");
}