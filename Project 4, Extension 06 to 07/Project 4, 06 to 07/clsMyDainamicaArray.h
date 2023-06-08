#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsMyDainamicaArray
{
protected:
	int _Size = 0;
	T* _TempArr;

public:
	T* OriginalArray;

	clsMyDainamicaArray(int Size = 0)
	{
		if (Size < 0)
			Size = 0;

		_Size = Size;
		OriginalArray = new T[Size];
	}

	~clsMyDainamicaArray()
	{
		delete[] OriginalArray;
	}

	void PrintList()
	{
		for (int i = 0; i < _Size; i++)
		{
			cout << *(OriginalArray + i) << "  ";
		}			
	}

	void SetItem(int index, T Value)
	{
		*(OriginalArray + index) = Value;
	}

	bool IsEmpty()
	{
		return _Size == 0;
	}

	int Size()
	{
		return _Size;
	}

	void Resize(int NewSize)
	{
		if (NewSize < 0)
			NewSize = 0;

		_TempArr = new T[NewSize];

		for (int i = 0; i < NewSize && i < _Size; i++)
		{			
			*(_TempArr + i) = *(OriginalArray + i);
		}

		_Size = NewSize;
		
		delete[] OriginalArray;
		OriginalArray = _TempArr;
	}

	T GetItem(int index)
	{
		T *Item = new T;
		if (index > _Size || index < 0)		
			return *Item;

		return OriginalArray[index];
	}

	void Revese()
	{
		_TempArr = new T[_Size];
		for (int i = 0; i < _Size; i++)
		{
			_TempArr[i] = OriginalArray[_Size - 1 - i];
		}
		delete[] OriginalArray;
		OriginalArray = _TempArr;
	}

	void Clear()
	{
		OriginalArray = new T[0];
		_Size = 0;
	}

	void DeleteItemAt(int Index)
	{
		if (Index > _Size)
			return;

		_TempArr = new T[_Size-1];
		for (int i = 0, j = 0; i < _Size; i++)
		{
			if (Index == i)
				continue;

			_TempArr[j] = OriginalArray[i];
			j++;
		}
		delete[] OriginalArray;
		OriginalArray = _TempArr;

		_Size--;
	}

	void DeleteFirstItem()
	{		
		DeleteItemAt(0);
	}

	void DeleteLastItem()
	{		
		DeleteItemAt(_Size-1);
	}
};

