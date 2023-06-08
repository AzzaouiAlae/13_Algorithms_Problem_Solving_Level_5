#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T>
class clsMyQueue
{
protected:
	clsDblLinkedList <T> MyList;
public:
	void push(T Value)
	{
		MyList.InsertAtEnd(Value);
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

	T Front()
	{
		return MyList.GetNode(0)->Value;
	}

	T Back()
	{
		return MyList.GetNode(Size() - 1)->Value;
	}
};

