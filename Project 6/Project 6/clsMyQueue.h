#pragma once
#include <iostream>
#include "clsMyDainamicaArray.h"

using namespace std;

template <class T>
class clsMyQueue
{
protected:
	clsMyDainamicaArray <T> MyList;
public:
	void push(T Value)
	{
		MyList.InsertAtEnd(Value);
	}

	void pop()
	{
		MyList.DeleteFirstItem();
	}

	void Print()
	{
		MyList.PrintList();
	}

	int Size()
	{
		return MyList.Size();
	}

	T Front()
	{
		return MyList.GetItem(0);
	}

	T Back()
	{
		return MyList.GetItem(Size() - 1);
	}

	T GetItem(int Index)
	{
		return MyList.GetItem(Index);
	}

	void Reverse()
	{
		MyList.Revese();
	}

	void Update(int Index, T Value)
	{
		MyList.SetItem(Index, Value);
	}

	void InsertAfter(int Index, T Value)
	{
		MyList.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value)
	{
		MyList.InsertAtBeginnine(Value);
	}

	void InsertAtBack(T Value)
	{
		MyList.InsertAtEnd(Value);
	}

	void Clear()
	{
		MyList.Clear();
	}
};

