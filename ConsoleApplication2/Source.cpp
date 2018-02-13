#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>

using namespace std;

void main()
{

	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	int x;
	cout << "" << endl;
	cin >> x;

	if (x == 1) {

		//Дан целочисленный квадратный массив 10×10.Найти сумму элементов  каждой строки.

		int x[10][10], sum;

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				x[i][j] = 1 + rand() % 99;
				cout << x[i][j] << " \t";
			}
			cout << endl;
		}

		for (int i = 0; i < 10; i++) {
			sum = 0;
			for (int j = 0; j < 10; j++) {
				sum += x[i][j];
			}
			cout << "Сумма " << i + 1 << " строки = " << sum << endl;
		}



	}

	else if (x == 2) {
		//Дан целочисленный квадратный массив 4×4.Найти строку с наименьшей суммой элементов
		int x[4][4], sum, sr = 1000, f = 0;

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				x[i][j] = 1 + rand() % 99;
				cout << x[i][j] << " \t";

			}
			cout << endl;
		}

		for (int i = 0; i < 4; i++) {
			sum = 0;
			for (int j = 0; j < 4; j++) {
				sum += x[i][j];

			}
			if (sum < sr) {
				sr = sum;
				f = i;
			}

		}

		cout << f << "  " << sr << endl;


	}

	else if (x == 3) {
		//ана целочисленная матрица  6× 8. Найти произведение положительных элементов первого столбца.
		int x[6][8], sum = 1;

		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 8; j++) {
				x[i][j] = -10 + rand() % 20;
				cout << x[i][j] << " \t";
								
			}
			cout << endl;
		}

		for (int i = 0; i < 6; i++) {
			for (int j = 0;;) {
				if (x[i][0] > 0) {
					sum *= x[i][0];
				}

			}
		}

		cout << " summa " << sum << endl;



	}

	else if (x == 4) {
	//Составить программу, которая заполняет квадратную матрицу порядка n натуральными числами 1, 2, 3, .. ., n2, записывая их в нее "по спирали" по часовой стрелке.


	}

	else if (x == 5) {
	//Дан двухмерный целочисленный массив A(M, N).Составить  одномерный массив B из номеров строк этого массива

		int x[5][5], sum = 1, b[5];

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				x[i][j] = -10 + rand() % 20;
				cout << x[i][j] << " \t";

			}
			cout << endl;
		}

		for (int i = 0; i < 5; i++) {
			b[i] = i;
		}

		for (int i = 0; i < 5; i++) {
			cout << b[i] << " \t";
		}



	}
	}






