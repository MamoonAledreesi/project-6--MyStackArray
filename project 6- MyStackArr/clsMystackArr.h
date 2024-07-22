#pragma once
#include<iostream>
#include"clsDynamicArray.h"
#include"clsMyQueueArr.h"

using namespace std;


template<class T> class clsMystackArr:public clsMyQueueArr <T>
{
	public:
	void Push(T Item)
	{
		clsMyQueueArr<T>::_MyList.InsertAtEnd(Item);
	}
	T Top()
	{
		return clsMyQueueArr<T>::Back();
	}

	T Button()
	{
		return clsMyQueueArr<T>::Front();
	}
	void Pop()
	{
		clsMyQueueArr<T>::_MyList.DeleteLastItem();
	}

};

