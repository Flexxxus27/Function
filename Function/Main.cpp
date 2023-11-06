#include <iostream>

int sum(int num1, int num2) {
	return num1 + num2;
}
void hi() {
	std::cout << "hello world!!!\n";
}

//������� ��� ������ ������� � �������
void print_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

void mult_x5(int num) { // num - �������� ������� 
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

	// �������� � ����� �������
	
	hi();

	std::cout << "������� 2 ����� -> ";
	std::cin >> n >> m;
	std::cout << sum(n, m) << std::endl;
	


	//������� ���������� � ���������
	
	const int size = 5;
	int arr[size]{ 7, 15, 32, 23, 65 }; 
	print_arr(arr, size);
	
	arr_x5(arr);
	print_arr(arr, size);

	n = 7;
	mult_x5(n); // n - �������� �������
	std::cout << "n = " << n << std::endl;
	

	//������ 1. ������� ������������� ��������� �������
	
	std::cout << "������ 1.\n\n";
	std::cout << "������: ";
	const int size1 = 5;
	int arr1[size1]{ 10, -15, 0, 2, 23 };
	print_arr(arr1, size1);
	std::cout << "������� ������������� ���������:\n";
	positive_elements(arr1, size1);
	std::cout << '\n';
	

	//������ 2. ���������
	std::cout << "������ 2.\n\n";
	std::cout << "������� ����� -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << std::endl; 






	return 0;
}