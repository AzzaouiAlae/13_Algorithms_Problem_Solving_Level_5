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

    cout << "\n\nValue 30 is in the item index : " << MyList.Find(30) << "\n\n";

    MyList.InsertAt(3, 500);
    cout << "\nMy Array Item after Insert At index 3 Value 500  :\n";
    MyList.PrintList();

    system("pause>0");
}