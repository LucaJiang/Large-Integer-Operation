#pragma once
#include <iostream>
const int MaxSize = 1000;          //1000ֻ��ʾ���Ե����ݣ����Ը���ʵ��������嶨��

template <class DataType>        //����ģ����SeqList
class SeqList
{
public:
	//���� ����
	SeqList() { length = 0; sign = 0; }            //�޲ι��캯��������һ���յ�˳���
	SeqList(DataType a[], int n);       //�вι��캯��������һ������Ϊn��˳���
	SeqList(SeqList&p);
	~SeqList() { }                   //��������Ϊ��

	void CheckIndex(int Index) const;
	int Length() const { return length; }        //�����Ա�ĳ���
	void Change(int i, DataType y);         //�ѵ�iλ��Ϊy
	void Insert(int i, const DataType& x);       //��������������Ա��е�i��λ�ò���ֵΪx��Ԫ��
	DataType Delete(int i);              //ɾ��������ɾ�����Ա�ĵ�i��Ԫ��
	void PrintList() const;                     //������������������������Ԫ��

	//Adtional
	void OverTurn(int h, int r);  //��ת
	void Reserve() { OverTurn(1, length); }
	friend SeqList<int> myAdd(const SeqList<int>& x, const SeqList<int>& y);
	friend SeqList<int> mySub(const SeqList<int>& x, const SeqList<int>& y);
	friend SeqList<int> myMul(const SeqList<int>& x, const SeqList<int>& y);
	friend struct StrofDiv myDiv(const SeqList<int>& x, const SeqList<int>& y);
	friend SeqList<int> Multiply_x(int x, SeqList<int> A);
	friend SeqList<int> div2(SeqList<int>& x);
	friend int Compare(const SeqList<int>& x, const SeqList<int>& y);

	//overload operator
	SeqList<int> operator +(const SeqList<int>&x) const;
	SeqList<int> operator -(const SeqList<int>&x) const;
	SeqList<int> operator *(const SeqList<int>&x) const;
	struct StrofDiv operator /(const SeqList<int>&x) const;

	DataType data[MaxSize];           //�������Ԫ�ص�����
	int length;                        //���Ա�ĳ���
	bool sign; //+:0; -:1 ���ڽ��������������
};

// store ans of /
struct StrofDiv
{
	SeqList<int>quotient;
	SeqList<int>mod;
	StrofDiv() {} //constructor
	StrofDiv(const StrofDiv&p)
	{//copy constructor
		*this = p;
	}
};

// store input 
struct myINPUT
{
	SeqList<int>x;
	SeqList<int>y;
	char op;  //operation +-*/
	myINPUT() {}
	myINPUT(const myINPUT&p) { *this = p; }
};