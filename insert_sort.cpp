/**
 * @file
 * @brief Данный файл содержит реализацию сортировки вставками
 */

#ifndef INSERT_SORT
#define INSERT_SORT

#include <vector>

/**
 * @brief Функция сортировки вставками
 * @param arr массив(вектор), который необходимо отсортировать
 */

template <typename T>
void insert_sort(std::vector<T> &arr) {
	T x;
	int j;
	for (int i = 0; i < arr.size(); i++) {
		x = arr[i];

		for (j = i-1; j >= 0 && arr[j] > x; j--) {
			arr[j+1] = arr[j];
		}
		arr[j+1] = x;
	}
}

#endif // INSERT_SORT