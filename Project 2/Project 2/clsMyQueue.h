#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsMyQueue
{
public:
	
	class Node {
		Node* _Next;
		Node* _Prev;
	public:
		T Value;
		friend class clsMyQueue;
	};

private:
	Node* _Front = NULL;
	Node* _Back = NULL;
	int _Size = 0;

public:

	void push(T Value)
	{
		_Size++;
		Node* New_Node = new Node();
		New_Node->Value = Value;
		New_Node->_Next = NULL;

		if (_Back == NULL)
		{
			New_Node->_Prev = NULL;
			_Front = New_Node;
			_Back = New_Node;
		}
		
		_Back->_Next = New_Node;
		New_Node->_Prev = _Back;
		_Back = New_Node;
	}

	void pop()
	{
		if (_Front == NULL)
			return;

		_Size--;
		Node* Temp = _Front;

		if (_Front->_Next == NULL)
			_Back = NULL;

		_Front = _Front->_Next;

		delete Temp;
	}

	void Print()
	{
		Node* Temp = _Front;
		while (Temp != NULL)
		{
			cout << Temp->Value << "  ";
			Temp = Temp->_Next;
		}
	}

	int Size()
	{
		return _Size;
	}

	T Front()
	{
		return _Front->Value;
	}

	T Back()
	{
		return _Back->Value;
	}
};

