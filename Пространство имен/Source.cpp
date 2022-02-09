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
//		cout << "\nВыстрел\n";
//	}
//}
//
//namespace Exploration
//{
//	void Fire()
//	{
//		cout << "\nОгонь\n";
//	}
//}

//namespace Dragon
//{
//	int gold = 50;
//	int Кол_во_Шкур;
//	int Кол_во_Зубов;
//	int Редкий_предмет;
//	int Редкость_предмета;
//	char Items[3][15]{" Шкуры"," Зуба","Меч"};
//	char Редкость[3][20]{ " Легендарный "," Редкий "," Обычный "};
//}

class Данные_о_человеке
{
private:

	string Фамилия;
	string Имя;
	string Отчество;
	Дата дата_рождения;
public:

	void Add()
	{
		cout << "\nИнформацию о человеке\n";
		cout << "\nВведите фамилию\n";
		cin >> Фамилия;
		cout << "\nВведите имя\n";
		cin >> Имя;
		cout << "\nВведите отчество\n";
		cin >> Отчество;
		дата_рождения.Add();
	}

	void Show()
	{
		cout << "\nИнформацию о человеке\n";
		cout << "\nВведите фамилию\n";
		cout << Фамилия;
		cout << "\nВведите имя\n";
		cout << Имя;
		cout << "\nВведите отчество\n";
		cout << Отчество;
		дата_рождения.Show();


	}



};

class Дата
{
private:

	int День;
	int Месяц;
	int Год;
public:

	void Add()
	{
		cout << "\nВведите дату встречи\n";
		cin >> День; cin.ignore(1); cin >> Месяц; cin.ignore(1); cin >> Год;
	}

	void Show()
	{
		cout << "\nДата\n";
		cout << День << "." << Месяц << "." << Год;
	}

};

class Время
{
private:
	int Минуты;
	int Часы;
public:
	
	void Add()
	{
		cout << "\nВведите время встречи\n";
		cin >> Часы; cin.ignore(1); cin >> Минуты;
	}

	void Show()
	{
		cout << "\nВремя втречи\n";
		cout << Часы << ":" << Минуты;
	}

};

namespace Органайзер
{
	Дата дата;
	Время время;
	string Место;
	string Информация_о_встрече;
	Данные_о_человеке человек;


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
	//using Dragon::Кол_во_Шкур;
	//using Dragon::Кол_во_Зубов;
	//using Dragon::Items;
	//using Dragon::Редкий_предмет;
	//using Dragon::Редкость_предмета;
	//using Dragon::Редкость;
	//Кол_во_Шкур = rand() % 4 + 2;
	//Кол_во_Зубов = rand() % 10 + 2;
	//Редкий_предмет = rand() % 2 + 1;
	//Редкость_предмета = rand() % 3 + 1;
	//cout << "\nПоздравляю вы убили ЛАПЛАСА!!\n";
	//cout << "\n+" << gold << " Золота\n";
	//cout << "+" << Кол_во_Шкур << Items[0] << "\n";
	//cout << "+" << Кол_во_Зубов << Items[1] << "\n";
	//if (Редкий_предмет == 1)
	//{
	//	if (Редкость_предмета == 1)
	//	{
	//		cout << "+ " << Items[2] << Редкость[2] << "\n";
	//	}
	//	if (Редкость_предмета == 2)
	//	{
	//		cout << "+ " << Items[2] << Редкость[1] << "\n";
	//	}
	//	if (Редкость_предмета == 3)
	//	{
	//		cout << "+ " << Items[2] << Редкость[0] << "\n";
	//	}
	//}


	//string s;
	//
	//getline(cin, s);

	//cout << s;



	return 0;
}