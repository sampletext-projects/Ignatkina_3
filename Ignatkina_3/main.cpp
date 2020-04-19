#include <iostream>

using namespace std;

int transform(int n)
{
	//Добавляем 1 с начала и конца
	int append1 = 1;
	while (n != 0)
	{
		append1 *= 10;
		append1 += n % 10;
		n /= 10;
	}
	append1 *= 10;
	append1 += 1;

	//разворачиваем число наоброт
	int res = 0;
	
	while(append1 != 0)
	{
		res *= 10;
		res += append1 % 10;
		append1 /= 10;
	}
	
	return res;
}

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Игнаткина Валерия студент группы УТН-111\n";
	cout << "Программа преобразования числа\n";

	cout << transform(23) << "\n";
	cout << transform(234) << "\n";
	cout << transform(2345) << "\n";

	system("pause");

	return 0;
}
