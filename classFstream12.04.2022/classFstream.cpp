#include <iostream>
#include <fstream>
#include <string>
#include <conio.h> // char on input output
#include "windows.h" // для Sleep();
using namespace std;

string subfile(string path, int pos) {
	ifstream in;
	in.open(path);
	if (in.is_open()) {
		string str;
		in.seekg(pos, ios::beg);
		char sym;
		while (in.get(sym))
			str += sym;
		in.close();
		return str;
	}
	in.close();
	return "";
}



unsigned int timer = 0;
char field[75][75];

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	string path = "file.txt";

	for(int i = -2; i < 50; i++)
		for (int j = -1; ;)

	//Для нажатия, _getche() - символ в начале, _getch() - просто считывает символ
	char sym;
	while (true) {
		if (_kbhit()) {
			sym = _getch();
			switch (sym) {
			case 'a': case 'A': system("cls"); cout << "Шаг в лево\n"; break;
			case 'd': case 'D': system("cls"); cout << "Шаг в право\n"; break;
			}
			//cout << "Нажато " << sym << endl;
		}
		Sleep(100);
		timer += 100;
		if (timer >= 1000) {
			cout << ".\n";
			timer = 0;
		}
	}










	//Задача 1
	/*cout << "Задача 1\nВведите позицию: ";
	cin >> n;
	cout << "Содержимое файла с введенной позиции:\n" << subfile(path, n) << endl;*/

	//Задача 2
	/*cout << "Задача 2\n";
	ifstream indate;
	indate.open("date.txt");
	int day = 0, month = 0, year = 0;
	if (indate.is_open()) {
		cout << "Файл открыт для считывания\n";
		string date;
		indate >> date;
		cout << "Содержимое файла:\n" << date << endl;
		year = stoi(date.substr(date.rfind('.') + 1));
		//cout << year << endl;
		month = stoi(date.substr(date.find('.') + 1));
		//cout << month << endl;
		day = stoi(date.substr(0));
		//cout << day << endl;
	}
	else
		cout << "Ошибка открытия файла\n";
	indate.close();

	cout << "День: " << day << endl << "Месяц: " << month << endl << "Год: " << year << "\n\n";*/


	/*fstream fs;
	fs.open(path, ios::in | ios::out | ios::ate);

	string file;

	if (fs.is_open()) {
		cout << "Файл открыт\n";
		fs.seekg(0, ios::beg);
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			file += str + "\n";
		}
		cout << file << endl;
	}
	else
		cout << "Ошибка открытия файла\n";

	if (fs.is_open()) {
		cout << "Файл открыт.\n";
		string str;
		cout << "Введите строку:\n";
		getline(cin, str);
		fs.seekg(20, ios::beg);
		fs << str << "\n";
		fs.seekg(0, ios::beg);
		getline(fs, str);
		cout << str << "\n";
	}
	else
		cout << "Ошибка открытия файла\n";

	fs.close();

	file.insert(10, "\nNEW STR\n");

	fs.open(path, ios::out | ios::in);
	if (fs.is_open()) {
		cout << "Файл открыт\n";
		fs << file << "\n";
		fs.seekg(0, ios::beg);
		while (!fs.eof()) {
			string str;
			getline(fs, str);
			cout << str << endl;
		}
	}
	else
		cout << "Ошибка отерытия файла";
	fs.close();*/

	return 0;
}