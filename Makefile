# Это комментарий, который говорит, что переменная CC указывает компилятор, используемый для сборки
# CC=g++
#Это еще один комментарий. Он поясняет, что в переменной CFLAGS лежат флаги, которые передаются компилятору
# CFLAGS=-Wall

all: lab1

lab1:
	g++ main.cpp class.cpp heap_sort.cpp insert_sort.cpp merge_sort.cpp -o lab1

# main.o: main.cpp
# 	$(CC) main.cpp

# class.o: class.o
# 	$(CC) class.o

# heap_sort.o: heap_sort.o
# 	$(CC) heap_sort.o

# insert_sort.o: insert_sort.o
# 	$(CC) insert_sort.o

# merge_sort.o: merge_sort.o
# 	$(CC) merge_sort.o

# clean:
# 	rm -rf *.o lab1
