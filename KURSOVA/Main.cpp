#include <iostream>

#include <fstream>

#include <string>

#include <stdio.h>

#include "search.h"

#include "worker.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "");

	int choice;

	while (true) {

		wcout << L"якщо ви бажаЇте подивитис€ ≥нформац≥ю про магазин нажм≥ть 1.\n";

		cout << "якщо ви працiвник нажмiть 2.\n";

		cout << "якщо ви хочете вийти нажмiть 3.\n";

		cin >> choice;

		if (choice == 1)

			while (true)

			{
				int choice2;

				cout << "якщо ви хочете знайти магазин нажмiть 1.\n";

				cout << "якщо ви хочете вийти в головне меню нажмiть 2.\n";

				cin >> choice2;

				if (choice2 == 1)

					search();

				if (choice2 == 2)

					break;

			}

		if (choice == 2)

			worker();

		if (choice == 3)

			break;

	}

}