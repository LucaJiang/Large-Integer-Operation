//����˵����2019-03-11
//�������������㣻
//����޸�ʱ�䣺2019-03-31
#include <iostream>
#include "SeqList.cpp"           //����˳�����������Ͷ���  
#include "Operation.h"       // �������� �������������

using namespace std;
//const int MaxSize = 100;  in "SeqList.h"

void problem3()
{
	myINPUT myinput;
	cout << " ";
	cin >> myinput;
	cout << "=";
	switch (myinput.op)
	{
	case '+':
	{
		cout << myinput.x + myinput.y << endl;
		break;
	}
	case '-':
	{
		cout << myinput.x - myinput.y << endl;
		break;
	}
	case '*':
	{
		cout << myinput.x * myinput.y << endl;
		break;
	}
	case '/':
	{
		cout << myinput.x / myinput.y << endl;
		break;
	}
	default:
	{
		throw"UNKNOW ERROR\n";
		break;
	}
	}

	cout << "����'+'����������'-'�˳�\n";
	char isExit;
	cin >> isExit;
	if (isExit == '+')
	{
		problem3();
	}
	else
		return;
	//	cout << myinput.x + myinput.y;
}

int main()
{
	cout << "��������������\n��ʾ����\n";
	cout << "���룺\n 123456789/5456432\n";
	cout << "�����\n=";
	int a[9] = { 1,2,3,4,5,6,7,8,9 };
	int b[7] = { 5,4,5,6,4,3,2 };
	SeqList<int> ary(a, 9);
	SeqList<int> bry(b, 7);
	cout << ary / bry << endl;
	cout << "���ڣ���ʼ������룡\n\n";
	problem3();

	cout << "�˳�\n";
	system("pause");
	return 0;
}