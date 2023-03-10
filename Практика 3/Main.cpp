#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
void print_arr(int arr[], const int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
void fill_arr(int arr[], const int length,int A=0,int B=10) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (B - A) + A;
}
//Task 1
template<typename T>
void clear_arr(T arr[], const int length, T num) {
	for (int i = 0; i < length; i++) {
		if (arr[i] == num)
			arr[i] = 0;
	}
}
//Task 2
int index_sum(int arr1[], int arr2[], const int length1, const int length2, int index) {
	if (index >= length1 || index >= length2||index<0) {

		std::cout << "\n\nERROR\n\n";
			return 0;
	}
	return arr1[index] + arr2[index];
}
//Task 3
template<typename T>
double mean_arr(T arr[], const int length) {
	T max=arr[0], min=arr[0];
	for (int i = 1; i < length; i++) {
		max = max > arr[i] ? max : arr[i];
		min = min < arr[i] ? min : arr[i];
	}
	return (min + max) / 2.0;
		
}
//Task 4
void prime_range(int num1, int num2) {
	for (int i = num1; i < num2; i++) {
		bool isPrime = true;
		for (int j = 2; j <= i/2; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			std::cout << i <<" ";
	}
}
void prime_range(int num1) {
	for (int i = 2; i < num1; i++) {
		bool isPrime = true;
		for (int j = 2; j <= i / 2; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			std::cout << i << " ";
	}
}

//Task 5
template <typename T>
void permute_arr(T arr[], const int length) {
	int j = length / 2;
	if (length % 2)
		for (int i = 0; i < (length / 2); i++)
			std::swap(arr[i], arr[j + i + 1]);
	else
		for (int i = 0; i < length / 2; i++)
			std::swap(arr[i], arr[j + i]);
}


int main() {
	setlocale(LC_ALL, "Russian");
	//Task 1
	/*
	const int length1 = 10;
	int arr1[length1];
	fill_arr(arr1, length1);
	std::cout << "Изначальный массив:\n";
	print_arr(arr1, length1);
	std::cout << "Введите ключевое значение для обнуления ->";
	int n;
	std::cin >> n;
	clear_arr(arr1, length1, n);
	std::cout << "\n";
	print_arr(arr1, length1);
	*/
	//Task 2
	/*
	const int length2=10, length3 = 10;
	int arr2[length2], arr3[length3];
	std::cout << "Массив 1:\n";
	fill_arr(arr2, length2);
	print_arr(arr2, length2);
	std::cout << "Массив 2:\n";
	fill_arr(arr3, length3,-10,21);
	print_arr(arr3, length3);
	int index;
	std::cout << "Введите нужный индекс для суммирования ->";
	std::cin >> index;
	std::cout << "Сумма чисел под индексом " << index << " из обеих массивов = "<<index_sum(arr2,arr3,length2,length3,index);
	*/
	//Task 3
	/*
	int const length4 = 20;
	int arr4[length4];
	fill_arr(arr4, length4,10,101);
	std::cout << "Массив:\n";
	print_arr(arr4, length4);
	std::cout << "Среднее арифметическое минимального и максимального значений массива = " << mean_arr(arr4, length4) << "\n\n";
	*/
	//Task 4
	prime_range(50,100);
	//Task 5
	/*
	const int length5 = 11;
	int arr5[length5];
	std::cout << "\nArray:\n";
	fill_arr(arr5, length5);
	print_arr(arr5, length5);
	permute_arr(arr5, length5);
	std::cout << "\n\nChanged array:\n";
	print_arr(arr5, length5);
	*/
	return 0;
}