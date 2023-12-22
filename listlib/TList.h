#pragma once
#include "TNode.h"
#include <iostream>
using namespace std;

template<class T>
class TList
{
protected:
	TNode<T>* pFirst; // ������ �����
	TNode<T>* pCurrent; // ������� �����
	TNode<T>* pPrevious; // ����� ����� �������
	TNode<T>* pLast; // ��������� �����
	TNode<T>* pStop; // �������� ���������, ����������� ����� ������
	int length; // ���������� ������� � ������

public:

	TList();
	~TList();
	int GetLength() { return length; }
	bool IsEmpty(); // ������ ���� ?
	// ������� �������
	void InsertFirst(T item); // ����� ������
	void InsertCurrent(T item); // ����� ������� 
	void InsertLast(T item);  // �������� ��������� 

	// �������� �������
	void DeleteFirst(); // ������� ������ ����� 
	void DeleteCurrent(); // ������� ������� �����

	void GoNext(); // ����� ������ �������� �����
	// (=1 ����� ���������� GoNext ��� ���������� ����� ������)

	void Reset(); // ���������� �� ������ ������
	bool IsEnd();  // ������ �������� ?

	T GetCurrentItem();
	void SetCurrentItem(T item) { pCurrent->value = item; }


};
template <class T>
TList<T>::TList()
{

}

template <class T>
TList<T>::~TList()
{

}

template <class T>
bool TList<T>::IsEmpty()
{
	return false;
}

template <class T>
void TList<T>::InsertFirst(T item)
{

}

template <class T>
void TList<T>::InsertLast(T item)
{

}

template <class T>
void TList<T>::InsertCurrent(T item)
{
	
}

template <class T>
void TList<T>::DeleteFirst()
{

}

template <class T>
void TList<T>::DeleteCurrent()
{
	
}

template <class T>
T TList<T>::GetCurrentItem()
{
	if (pCurrent == pStop)
		throw " ";
	return pCurrent->value;
}

template <class T>
void TList<T>::Reset()
{

}

template <class T>
void TList<T>::GoNext()
{

}

template <class T>
bool TList<T>::IsEnd()
{
	return false;
}





