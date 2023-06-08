#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsMyDainamicaArray
{
protected:
	int _Size = 0;

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

		T* ResizedArray = new T[NewSize];		

		for (int i = 0; i < NewSize && i < _Size; i++)
		{			
			*(ResizedArray + i) = *(OriginalArray + i);
		}

		_Size = NewSize;
		
		delete[] OriginalArray;
		OriginalArray = ResizedArray;
	}

};

