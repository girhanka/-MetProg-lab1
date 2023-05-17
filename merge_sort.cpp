/**
 * @file
 * @brief Данный файл содержит реализацию сортировки слиянием
 */

#ifndef MERGE_SORT
#define MERGE_SORT

#include <vector>

/**
 * @brief Функция слияния двух упорядоченных массивов в один
 * @param arr исходный массив
 * @param low индекс, отвечающий за первый эелемент первого массива для слияния
 * @param mid индекс, отвечающий за последний элемент первого массива; (mid + 1) первый элемент второго массива
 * @param high индекс последнего элемента второго массива
 */
template <typename T>
void merge (std::vector<T>& arr, long low, long mid, long high)
{
	T *b = new T[high + 1 - low];
	long l, i, j, k;
	l = low;
	i = 0;
	j = mid + 1;

	while (l <= mid && j <= high) {
		if (arr[l] <= arr[j]) {
			b[i] = arr[l];
			l++;
		}
		else {
			b[i] = arr[j];
			j++;
		}
		i++;
	}

	if (l > mid) {
		for (k = j; k <= high; k++) {
			b[i] = arr[k];
			i++;
		}
	}
	else {
		for (k = l; k <= mid; k++) {
			b[i] = arr[k];
			i++;
		}
	}

	for (k = 0; k <= high - low; k++) {
		arr[k + low] = b[k];
	}
	delete[] b;
}

/**
 * @brief Функция сортировки слиянием
 * @param arr массив, котоырй надо отсортировать
 * @param low индекс первого элемента массива в общем массиве
 * @param high инекс последнего элемента массива в общем массиве
 */
template <typename T>
void merge_sort(std::vector<T>& arr, long low, long high)
{
	long mid;
	if (low < high) {
		mid = (low + high) / 2;
		merge_sort(arr, low, mid);
		merge_sort(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}
}

#endif // MERGE_SORT