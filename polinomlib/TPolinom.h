#pragma once
#include "THeadList.h"
#include "TMonom.h"
#include <string>

const int nonDisplayedZeros = 4; // ���������� �������������� ����� ��� ������ ������������ ��������
								 // ���-�� �������� ����� ������� = 6 - nonDisplayedZeros


class TPolinom : public THeadList<TMonom>
{
public:
	TPolinom();
	TPolinom(TPolinom& other);
	TPolinom(string str);
	TPolinom& operator=(TPolinom& other); // ������������
	TPolinom& operator+(TPolinom& q); // �������� ���������

	// ������������� ����� �����������:
	void AddMonom(TMonom newMonom); // ���������� ������
	TPolinom MultMonom(TMonom monom); // ��������� �������
	TPolinom AddPolinom(TPolinom& other); // ���������� ��������
	TPolinom operator*(double coef); // ��������� �������� �� �����
	TPolinom operator* (TPolinom& other); // ��������� ���������
	bool operator==(TPolinom& other); // ��������� ��������� �� ���������
	string ToString(); // ������� � ������
};

TPolinom::TPolinom() :THeadList<TMonom>::THeadList()
{

}

TPolinom::TPolinom(TPolinom& other)
{

}

TPolinom::TPolinom(string str)
{	
	
}

TPolinom& TPolinom::operator=(TPolinom& other)
{
	return *this;
}

void TPolinom::AddMonom(TMonom m)
{
	
}

TPolinom TPolinom::MultMonom(TMonom monom)
{
	return *this;
}

TPolinom& TPolinom::operator+(TPolinom& other)
{
	return *this;
}

TPolinom TPolinom::AddPolinom(TPolinom& other)
{
	return *this;
}

TPolinom TPolinom::operator*(double coef)
{
	return *this;
}

TPolinom TPolinom::operator*(TPolinom& other)
{
	return *this;
}

bool TPolinom::operator==(TPolinom& other)
{
	return false;
}


string TPolinom::ToString()
{
	string result;
	return result;
}
