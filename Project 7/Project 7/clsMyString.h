#pragma once
#include <iostream>
#include <stack>

using namespace std;


class clsMyString
{
	stack <string> _UndoStack;
	stack <string> _RedoStack;
	string _Value = "";
public:
	string GetValue()
	{
		return _Value;
	}

	void SetValue(string value)
	{
		_UndoStack.push(_Value);

		_Value = value;
	}

	__declspec(property(get = GetValue, put = SetValue)) string Value;

	void Undo()
	{		
		if (!_UndoStack.empty())
		{
			_RedoStack.push(_Value);
			_Value = _UndoStack.top();
			_UndoStack.pop();
		}		
	}

	void Redo()
	{		
		if (!_RedoStack.empty())
		{
			_Value = _RedoStack.top();
			_UndoStack.push(_RedoStack.top());
			_RedoStack.pop();
		}		
	}
};

