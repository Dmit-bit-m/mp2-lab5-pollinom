#pragma once
#include "TList.h"
using namespace std;


template<class T>
class THeadList : public TList<T>
{
protected:
	TNode<T>* pHead;  // ���������, pFirst - ����� �� pHead
public:
	THeadList();
	~THeadList();
	void InsertFirst(T item); // ������� ������� ����� ���������
	void DeleteFirst(); // ������� ������ �����
};

template<class T>
THeadList<T>::THeadList()
{

}

template<class T>
THeadList<T>::~THeadList()
{

}

template <class T>
void THeadList<T>::InsertFirst(T item)
{

}

template <class T>
void THeadList<T>::DeleteFirst()
{

}