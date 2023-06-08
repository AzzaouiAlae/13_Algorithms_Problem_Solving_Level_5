#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T>
class clsMyStack
{
protected:
	clsDblLinkedList <T> MyList;
public:
	void push(T Value)
	{
		MyList.InsertAtBeginning(Value);
	}

	void pop()
	{
		MyList.DeleteFirstNode();
	}

	void Print()
	{
		MyList.PrintList();
	}

	int Size()
	{
		return MyList.Size();
	}

	T Top()
	{
		return MyList.GetNode(0)->Value;
	}

	T Bottom()
	{
		return MyList.GetNode(Size() - 1)->Value;
	}

	T GetItem(int Index)
	{
		return MyList.GetValue(Index);
	}

	void Reverse()
	{
		MyList.Revers();
	}

	void Update(int Index, T Value)
	{
		MyList.Update(Index, Value);
	}

	void InsertAfter(int Index, T Value)
	{
		MyList.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Value)
	{
		MyList.InsertAtBeginning(Value);
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

