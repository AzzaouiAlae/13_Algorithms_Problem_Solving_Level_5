#pragma once
#include <iostream>

using namespace std;



template <class T>
class clsDblLinkedList
{
	int _size = 0;

	
public:	
	class Node
	{		
	public:		
		T Value;
		Node* Next;
		Node* Prev;
	};

	Node * Head = NULL;	

	void InsertAtEnd(T Value)
	{
		_size++;
		Node * New_Node = new Node();
		New_Node->Value = Value;
		New_Node->Next = NULL;

		if (Head == NULL)
		{
			New_Node->Prev = NULL;
			Head = New_Node;
			return;
		}

		Node *Last_Node = Head;

		while (Last_Node->Next != NULL)
		{
			Last_Node = Last_Node->Next;
		}
		New_Node->Prev = Last_Node;
		Last_Node->Next = New_Node;
	}

	void PrintList()
	{
		Node *Temp = Head;

		while (Temp != NULL)
		{
			cout << Temp->Value << "  ";
			Temp = Temp->Next;
		}
		delete Temp;
	}

	void InsertAtBeginning(T Value)
	{
		_size++;
		Node *New_Node = new Node();

		New_Node->Value = Value;
		New_Node->Next = Head;
		New_Node->Prev = NULL; 

		if(Head != NULL)
			Head->Prev = New_Node;

		Head = New_Node;
	}

	void DeleteFirstNode()
	{				
		if (Head == NULL)
			return;

		_size--;

		Node *NodeToDelete = Head;
		Head = NodeToDelete->Next;

		if (Head != NULL)
			Head->Prev = NULL;

		delete NodeToDelete;
	}

	void DeleteLastNode()
	{
 		if (Head == NULL)
			return;

		_size--;

		if (Head->Next == NULL)
		{
			Head = NULL;
			return;
		}

		Node *Last_Node = Head;

		while (Last_Node->Next != NULL)
		{
			Last_Node = Last_Node->Next;
		}
		if (Last_Node->Prev != NULL)
			Last_Node->Prev->Next = NULL;

		Last_Node = NULL;

		delete Last_Node;
	}

	void DeleteNode(Node *NodeToDelete)
	{		
		if (NodeToDelete == NULL)
			return;

		_size--;
		NodeToDelete->Prev->Next = NodeToDelete->Next;
		NodeToDelete->Next->Prev = NodeToDelete->Prev;
		NodeToDelete = NULL;
		delete NodeToDelete;
	}

	void InsertAfter(Node* &Current, T Value)
	{
		_size++;
		if (Current == NULL)
		{
			InsertAtEnd(Value);
			return;
		}
		Node* New_Node = new Node();
		New_Node->Value = Value;
		New_Node->Next = Current->Next;
		New_Node->Prev = Current;
		Current->Next = New_Node;
	}

	Node *Find(T Value)
	{
		Node *Temp = Head;
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
		return _size;
	}

	bool IsEmpty()
	{
		return Head == NULL;
	}

	void Clear()
	{		
		while (_size > 0)
		{			
			DeleteFirstNode();
		}
	}

	void Reverse()
	{
		Node* Temp = NULL;
		Node* Current = Head;
		while (Current != NULL)
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
		if (Head == NULL || Index > _size)
			return NULL;

		Node* Node_Index = Head;
		for (int i = 0; i < Index; i++)
		{
			if (Node_Index == NULL)
				return NULL;

			Node_Index = Node_Index->Next;
		}
		return Node_Index;
	}

	T GetItem(int Index)
	{
		Node* ItemNode = GetNode(Index);
		
		if (ItemNode == NULL)
			return NULL;

		else
			return ItemNode->Value;
	}

	bool UpdateItem(int Index, T Value)
	{
		Node * NodeToUpdate = GetNode(Index);
		if (NodeToUpdate != NULL)
		{
			NodeToUpdate->Value = Value;
			return true;
		}

		else
			return false;
	}

	bool InsertAfter(int Index, T Value)
	{
		Node* Current = GetNode(Index);

		if (Current == NULL)
			return false;

		InsertAfter(Current, Value);
		return true;
	}
};

