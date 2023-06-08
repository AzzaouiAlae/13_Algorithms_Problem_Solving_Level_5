#include <iostream>
#include "clsDynamicArray.h"

int main()
{
    clsDynamicArray <int> MyList(5); 

    cout << "My Array is empty : " << MyList.IsEmpty() << endl;
    cout << "Array size : " << MyList.Size() << "\n\n";


    MyList.SetItem(0, 10);
    MyList.SetItem(1, 20);
    MyList.SetItem(2, 30);
    MyList.SetItem(3, 40);
    MyList.SetItem(4, 50);

    MyList.PrintList();


    system("pause>0");

}