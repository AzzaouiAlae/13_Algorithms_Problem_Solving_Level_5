#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsDblLinkedList
{
	int _Size = 0;
public:

	class Node {
	public:
		T Value;
		Node* Next;
		Node* Prev;
	};

	Node* Head = NULL;

	void InsertAtBeginning(T Value)
	{
		Node* New_Node = new Node();
		New_Node->Value = Value;
		New_Node->Prev = NULL;
		New_Node->Next = Head;

		if(Head != NULL)
			Head->Prev = New_Node;

		Head = New_Node;
		_Size++;
	}

	void InsertAtEnd(T Value)
	{
		Node* New_Node = new Node();
		New_Node->Next = NULL;
		New_Node->Value = Value;
		
		_Size++;
		if (Head == NULL)
		{
			New_Node->Prev = NULL;
			Head = New_Node;
			return;
		}

		Node* Last_Node = Head;
		while (Last_Node->Next != NULL)
		{
			Last_Node = Last_Node->Next;
		}
		New_Node->Prev = Last_Node;
		Last_Node->Next = New_Node;		
	}

	void PrintList()
	{
		Node* Temp = Head;
		while (Temp != NULL)
		{
			cout << Temp->Value << "  ";
			Temp = Temp->Next;
		}
		delete Temp;
	}

	void DeleteFirstNode()
	{
		if (Head == NULL)
			return;

		_Size--;
		Node* Temp = Head;
		Head = Temp->Next;	

		if (Head == NULL)
			return;

		Head->Prev = NULL;
		Temp = NULL;
		delete Temp;		
	}

	void DeleteLastNode()
	{
		if (Head == NULL)
			return;

		Node* befor_Last_Node = Head;
		while (befor_Last_Node->Next->Next != NULL)
		{
			befor_Last_Node = befor_Last_Node->Next;
		}

		Node* Temp = befor_Last_Node->Next;
		befor_Last_Node->Next = NULL;
		Temp = NULL;
		delete Temp;
		_Size--;
	}

	void DeleteNode(Node* &NodeToDelete)
	{
		if (NodeToDelete == NULL || Head == NULL)
			return;

		if (NodeToDelete->Prev != NULL)
			NodeToDelete->Prev->Next = NodeToDelete->Next;

		if (NodeToDelete->Next != NULL)
			NodeToDelete->Next->Prev = NodeToDelete->Prev;

		NodeToDelete = NULL;

		delete NodeToDelete;
		_Size--;
	}

	Node* Find(T Value)
	{
		Node* Temp = Head;
		while (Temp != NULL)
		{
			if (Temp->Value == Value)
				return Temp;

			Temp = Temp->Next;
		}
		return NULL;
	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return Head == NULL;
	}

	void Clear()
	{			
		while (_Size > 0)
		{
			DeleteFirstNode();
		}	
	}

	void Revers()
	{
		if (Head == NULL)
			return;

		Node* Current = Head;
		Node* Temp = NULL;

		while(Current != NULL)
		{
			Temp = Current->Prev;
			Current->Prev = Current->Next;
			Current->Next = Temp;			
			Current = Current->Prev;
		}

		if (Temp != NULL)
		{
			Head = Temp->Prev;
		}
	}

	Node* GetNode(int Index)
	{
		if (Head == NULL || Index > _Size)
		{
			return NULL;
		}
			

		Node* Current = Head;
		for (int i = 0; i < Index; i++)
		{
			Current = Current->Next;

			if (Current == NULL)
				return NULL;
		}

		return Current;
	}

	T GetValue(int Index)
	{
		Node* MyNode = GetNode(Index);
		if (MyNode != NULL)		
			return MyNode->Value;
		
		return NULL;
	}

	void Update(int Index, T Value)
	{
		Node* MyNode = GetNode(Index);

		if (MyNode != NULL)
			MyNode->Value = Value;
	}

	void InsertAfter(Node* &MyNode, T Value)
	{
		if (MyNode == NULL)
			return;

		_Size++;
		Node* New_Node = new Node();
		New_Node->Value = Value;
		New_Node->Prev = MyNode;
		New_Node->Next = MyNode->Next;
		MyNode->Next = New_Node;
		MyNode->Next->Prev = New_Node;
	}

	void InsertAfter(int Index, T Value)
	{
		Node* MyNode = GetNode(Index);

		InsertAfter(MyNode, Value);
	}
};

