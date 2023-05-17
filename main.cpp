#include "class.h"
#include <iostream>
#include <locale>
#include <fcntl.h>
// #include <windows.h>
#include <fstream>
#include <time.h>
#include <string>
#include <vector>
#include "insert_sort.cpp"
#include "heap_sort.cpp"
#include "merge_sort.cpp"


#pragma execution_character_set( "utf-8" )

int main() {
	// SetConsoleOutputCP( 65001 );

	setlocale(LC_ALL, "eu_EU.UTF-8");

	std::vector<Ship> arr;
	std::ifstream in;
	std::ofstream out;
	clock_t start, end;

	// Сортировка вставками
	{
		// Сортировка 1000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 1000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		insert_sort(arr);
		end = clock();

		out.open(".\\sorted\\1000_sorted_insert.txt");
		out << "Сортировка 1000 элементов заняла " << (end - start) << " секунд\n\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 10000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 10000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		insert_sort(arr);
		end = clock();

		out.open(".\\sorted\\10000_sorted_insert.txt");
		out << "Сортировка 10000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 20000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 20000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		insert_sort(arr);
		end = clock();

		out.open(".\\sorted\\20000_sorted_insert.txt");
		out << "Сортировка 20000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 40000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 40000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		insert_sort(arr);
		end = clock();

		out.open(".\\sorted\\40000_sorted_insert.txt");
		out << "Сортировка 40000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 60000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 60000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		insert_sort(arr);
		end = clock();

		out.open(".\\sorted\\60000_sorted_insert.txt");
		out << "Сортировка 60000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 80000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 80000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		insert_sort(arr);
		end = clock();

		out.open(".\\sorted\\80000_sorted_insert.txt");
		out << "Сортировка 80000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 100000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 100000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		insert_sort(arr);
		end = clock();

		out.open(".\\sorted\\100000_sorted_insert.txt");
		out << "Сортировка 100000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();
	}

	// Пирамидальная сортировка
	{
		// Сортировка 1000 элементов
		in.open("data.txt");
		for (int i = 0; i < 1000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		heap_sort(arr, arr.size());
		end = clock();

		out.open(".\\sorted\\1000_sorted_heap.txt");
		out << "Сортировка 1000 элементов заняла " << (end - start) << " секунд\n\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 10000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 10000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		heap_sort(arr, arr.size());
		end = clock();

		out.open(".\\sorted\\10000_sorted_heap.txt");
		out << "Сортировка 10000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 20000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 20000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		heap_sort(arr, arr.size());
		end = clock();

		out.open(".\\sorted\\20000_sorted_heap.txt");
		out << "Сортировка 20000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 40000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 40000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		heap_sort(arr, arr.size());
		end = clock();

		out.open(".\\sorted\\40000_sorted_heap.txt");
		out << "Сортировка 40000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 60000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 60000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		heap_sort(arr, arr.size());
		end = clock();

		out.open(".\\sorted\\60000_sorted_heap.txt");
		out << "Сортировка 60000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 80000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 80000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		heap_sort(arr, arr.size());
		end = clock();

		out.open(".\\sorted\\80000_sorted_heap.txt");
		out << "Сортировка 80000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 100000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 100000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		heap_sort(arr, arr.size());
		end = clock();

		out.open(".\\sorted\\100000_sorted_heap.txt");
		out << "Сортировка 100000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();
	}



	// Сортировка слиянием
	{
		// Сортировка 1000 элементов
		in.open("data.txt");
		for (int i = 0; i < 1000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		merge_sort(arr, 0, arr.size()-1);
		end = clock();

		out.open(".\\sorted\\1000_sorted_merge.txt");
		out << "Сортировка 1000 элементов заняла " << (end - start) << " секунд\n\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 10000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 10000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		merge_sort(arr, 0, arr.size()-1);
		end = clock();

		out.open(".\\sorted\\10000_sorted_merge.txt");
		out << "Сортировка 10000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 20000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 20000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		merge_sort(arr, 0, arr.size()-1);
		end = clock();

		out.open(".\\sorted\\20000_sorted_merge.txt");
		out << "Сортировка 20000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 40000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 40000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		merge_sort(arr, 0, arr.size()-1);
		end = clock();

		out.open(".\\sorted\\40000_sorted_merge.txt");
		out << "Сортировка 40000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 60000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 60000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		merge_sort(arr, 0, arr.size()-1);
		end = clock();

		out.open(".\\sorted\\60000_sorted_merge.txt");
		out << "Сортировка 60000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 80000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 80000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		merge_sort(arr, 0, arr.size()-1);
		end = clock();

		out.open(".\\sorted\\80000_sorted_merge.txt");
		out << "Сортировка 80000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();

		// Сортировка 100000 элементов:
		in.open("data.txt");
		for (int i = 0; i < 100000; i++){
			std::string str;
			getline(in, str);
			Ship el(str);
			arr.push_back(el);
		}
		in.close();

		start = clock();
		merge_sort(arr, 0, arr.size()-1);
		end = clock();

		out.open(".\\sorted\\100000_sorted_merge.txt");
		out << "Сортировка 100000 элементов заняла " << (end - start) << " секунд\n";
		for (int i = 0; i < arr.size(); i++) {
			out << arr[i] << '\n';
		}
		out.close();
		arr.clear();
	}

	return 0;
}