#pragma once
#include <iostream>
#include "clsDynamicArray.h"
using namespace std;
template<class T> class clsMyQueueArr
{
protected:
	clsDynamicArray<int> _MyList;
public:
	void Push(T Value)
	{
		_MyList.InsertAtEnd(Value);
	}
	void Pop()
	{
		_MyList.DeleteFirstItem();
	}

	void Print()
	{
		_MyList.PrintList();
	}
	int Size()
	{
		return _MyList.Size();
	}

	int Front()
	{
		return _MyList.GetItem(0);
	}

	int Back()
	{
		return _MyList.GetItem(Size() - 1);
	}

	T GetItem(T index)
	{
		return _MyList.GetItem(index);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}
	void UpdateItem(T index, T value)
	{
		_MyList.SetItem(index, value);
	}


	void InsertAtFront(T value)
	{
		_MyList.InsertAtBeginning(value);
	}
	bool InsertAfter(T index, T value)
	{
		return _MyList.InsertAfter(index, value);
	}
	void InsertAtBack(T value)
	{
		_MyList.InsertAtEnd(value);
	}

	void Clear()
	{
		_MyList.Clear();
	}
};

