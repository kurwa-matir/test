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

		wcout << L"���� �� ������ ���������� ���������� ��� ������� ������ 1.\n";

		cout << "���� �� ����i���� ����i�� 2.\n";

		cout << "���� �� ������ ����� ����i�� 3.\n";

		cin >> choice;

		if (choice == 1)

			while (true)

			{
				int choice2;

				cout << "���� �� ������ ������ ������� ����i�� 1.\n";

				cout << "���� �� ������ ����� � ������� ���� ����i�� 2.\n";

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