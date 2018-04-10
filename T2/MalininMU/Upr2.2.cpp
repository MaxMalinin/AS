// Upr2.2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <array>

void farr1(std::array<int, 10>& a1);
void farr2(int* a2);
void farr3(int* a3);



int main()
{
	std::array<int, 10> arr1;
	int* arr2;
	arr2 = new int[10];
	int arr3[10];

	farr1(arr1);
	farr2(arr2);
	farr3(arr3);

	system("pause");
	return 0;
}

void farr1(std::array<int, 10>& a1) {
	for (size_t i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			a1[i] *= 2;
			std::cout << a1[i] << std::endl;
		}
		else { std::cout << --a1[i] << std::endl; }
	}

}
void farr2(int* a2) {
	for (size_t i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			a2[i] *= 2;
			std::cout << a2[i] << std::endl;
		}
		else { std::cout << --a2[i] << std::endl; }
	}

}
void farr3(int* a3) {
	for (size_t i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			a3[i] *= 2;
			std::cout << a3[i] << std::endl;
		}
		else { std::cout << --a3[i] << std::endl; }
	}

}