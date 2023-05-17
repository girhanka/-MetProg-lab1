/**
 * @file
 * @brief Данный файл содержит реализацию функции пирамидальной сортировки
 */

#ifndef HEAP_SORT
#define HEAP_SORT

#include <vector>

/**
 * @brief Функция преобразования массива в кучу
 * @param arr массив, который необходимо преобразовать
 * @param k начальный индекс корневого узла
 * @param n размер кучи
 */
template <typename T>
void downHeap(std::vector<T>& arr, long k, long n) {
	long l = k;
	while (k < n / 2) {
		long child = 2 * k + 1;
		if (child < n && arr[child] < arr[child + 1])
			child++;
		if (child < n && arr[child] > arr[l])
			l = child;
		if (l == k)
			break;
		T temp = arr[l];
		arr[l] = arr[k];
		arr[k] = temp;
		k = l;
	}

}

/**
 * @brief Функция, выполняющая пирамидальную сортировку
 * @param arr массив, который необходимо отсортировать
 * @param size размер массива
 */
template <typename T>
void heap_sort(std::vector<T>& arr, long size)
{
	long i;
	T temp;

	for (i = size / 2; i >= 0; i--)
		downHeap(arr, i, size);
	for (i = size - 1; i >= 0; i--) {
		temp = arr[i];
		arr[i] = arr[0];
		arr[0] = temp;
		downHeap(arr, 0, i);
	}

}

#endif // HEAP_SORT