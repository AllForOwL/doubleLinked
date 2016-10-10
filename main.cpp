#include <iostream>
#include "DoubleLinked.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "russian");

	DoubleLinked _doubleLinked;

	int _quentityElement = 0;
	cout << "Enter quentity elements: ";
	cin >> _quentityElement;

	int _typeElement = 0;

	int _ivalueElement = 0;
	float _fvalueElement = 0.0f;
	std::string _strvalueElement = "";
	for (int i = 0; i < _quentityElement; i++)
	{
		cout << "Enter type element(int = 0, float = 1, string = 2) : ";
		cin >> _typeElement;

		if (_typeElement == 0)
		{
			cout << "Enter value element : ";
			cin >> _ivalueElement;
			_doubleLinked.Add(_ivalueElement);
		}
		else if (_typeElement == 1)
		{
			cout << "Enter value element : ";
			cin >> _fvalueElement;
			_doubleLinked.Add(_fvalueElement);
		}
		else
		{
			cout << "Enter value element : ";
			cin >> _strvalueElement;
			_doubleLinked.Add(_strvalueElement);
		}
	}

	_doubleLinked.OutputList();

	system("pause");
	return 0;
}