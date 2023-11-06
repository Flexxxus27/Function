#include <iostream>

int sum(int num1, int num2) {
	return num1 + num2;
}
void hi() {
	std::cout << "hello world!!!\n";
}

//функция для вывода массива в консоль
void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

void mult_x5(int num) { // num - параметр функции 
	num *= 5;
}

void arr_x5(int arr[]) {
	arr[1] *= 5;
}

void positive_elements(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
	std::cout << std::endl; 
}

int factorial(int num) {
	int result = 1;
	for (int i = 2; i <= num; i++)
		result *= i;
	return result;
}


int main() {
	setlocale(0, "");
	int n, m;

	// Создание и вызов функции
	
	hi();

	std::cout << "Введите 2 числа -> ";
	std::cin >> n >> m;
	std::cout << sum(n, m) << std::endl;
	


	//Функции работающие с массивами
	
	const int size = 5;
	int arr[size]{ 7, 15, 32, 23, 65 }; 
	print_arr(arr, size);
	
	arr_x5(arr);
	print_arr(arr, size);

	n = 7;
	mult_x5(n); // n - Аргумент функции
	std::cout << "n = " << n << std::endl;
	

	//Задача 1. Индексы положительных элементов массива
	
	std::cout << "Задача 1.\n\n";
	std::cout << "Массив: ";
	const int size1 = 5;
	int arr1[size1]{ 10, -15, 0, 2, 23 };
	print_arr(arr1, size1);
	std::cout << "Индексы положительных элементов:\n";
	positive_elements(arr1, size1);
	std::cout << '\n';
	

	//Задача 2. Факториал
	std::cout << "Задача 2.\n\n";
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl; 






	return 0;
}