#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T>
class clsDynamicArray
{
	clsDblLinkedList <T> _MyList;
public:
	clsDynamicArray()
	{
	}

	clsDynamicArray(int Index)
	{
		for (int i = 0; i < Index; i++)
		{
			T* Value = new T;

			_MyList.InsertAtEnd(*Value);
		}
	}

	void PrintList()
	{
		_MyList.PrintList();
	}

	void SetItem(int Index, T Value)
	{
		_MyList.Update(Index, Value);
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	int Size()
	{
		return _MyList.Size();
	}
};

