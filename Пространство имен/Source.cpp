#include<iostream>
#include<string>
using namespace std;

//namespace s
//{
//	const double pi = 3.14;
//	class s
//	{
//	public:
//		void show()
//		{
//			cout << pi;
//		}
//	};
//}

//namespace Combat
//{
//	void Fire()
//	{
//		cout << "\n�������\n";
//	}
//}
//
//namespace Exploration
//{
//	void Fire()
//	{
//		cout << "\n�����\n";
//	}
//}

//namespace Dragon
//{
//	int gold = 50;
//	int ���_��_����;
//	int ���_��_�����;
//	int ������_�������;
//	int ��������_��������;
//	char Items[3][15]{" �����"," ����","���"};
//	char ��������[3][20]{ " ����������� "," ������ "," ������� "};
//}

class ������_�_��������
{
private:

	string �������;
	string ���;
	string ��������;
	���� ����_��������;
public:

	void Add()
	{
		cout << "\n���������� � ��������\n";
		cout << "\n������� �������\n";
		cin >> �������;
		cout << "\n������� ���\n";
		cin >> ���;
		cout << "\n������� ��������\n";
		cin >> ��������;
		����_��������.Add();
	}

	void Show()
	{
		cout << "\n���������� � ��������\n";
		cout << "\n������� �������\n";
		cout << �������;
		cout << "\n������� ���\n";
		cout << ���;
		cout << "\n������� ��������\n";
		cout << ��������;
		����_��������.Show();


	}



};

class ����
{
private:

	int ����;
	int �����;
	int ���;
public:

	void Add()
	{
		cout << "\n������� ���� �������\n";
		cin >> ����; cin.ignore(1); cin >> �����; cin.ignore(1); cin >> ���;
	}

	void Show()
	{
		cout << "\n����\n";
		cout << ���� << "." << ����� << "." << ���;
	}

};

class �����
{
private:
	int ������;
	int ����;
public:
	
	void Add()
	{
		cout << "\n������� ����� �������\n";
		cin >> ����; cin.ignore(1); cin >> ������;
	}

	void Show()
	{
		cout << "\n����� ������\n";
		cout << ���� << ":" << ������;
	}

};

namespace ����������
{
	���� ����;
	����� �����;
	string �����;
	string ����������_�_�������;
	������_�_�������� �������;


}


int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	//s::s s;
	 //s.show();

	//Combat::Fire();
	//Exploration::Fire();

	//using Dragon::gold;
	//using Dragon::���_��_����;
	//using Dragon::���_��_�����;
	//using Dragon::Items;
	//using Dragon::������_�������;
	//using Dragon::��������_��������;
	//using Dragon::��������;
	//���_��_���� = rand() % 4 + 2;
	//���_��_����� = rand() % 10 + 2;
	//������_������� = rand() % 2 + 1;
	//��������_�������� = rand() % 3 + 1;
	//cout << "\n���������� �� ����� �������!!\n";
	//cout << "\n+" << gold << " ������\n";
	//cout << "+" << ���_��_���� << Items[0] << "\n";
	//cout << "+" << ���_��_����� << Items[1] << "\n";
	//if (������_������� == 1)
	//{
	//	if (��������_�������� == 1)
	//	{
	//		cout << "+ " << Items[2] << ��������[2] << "\n";
	//	}
	//	if (��������_�������� == 2)
	//	{
	//		cout << "+ " << Items[2] << ��������[1] << "\n";
	//	}
	//	if (��������_�������� == 3)
	//	{
	//		cout << "+ " << Items[2] << ��������[0] << "\n";
	//	}
	//}


	//string s;
	//
	//getline(cin, s);

	//cout << s;



	return 0;
}