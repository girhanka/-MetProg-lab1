/**
 * @file
 * @brief Заголовочный файл с описанием класса
 *
 * Данный файл содержит в себе описание полей класса, его конструкторы и деструкторы, сеттеры и геттеры, а также перегрузки основных операторов сравнения и ввода/вывода
 *
*/

#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <string>
#include <cstdio> // может здесь и не понадобится

/**
 * @brief Класс, содержащий данные корабля
 */

class Ship
{
public:
	//! Название корабля
	std::string name;
	//! Год постройки
	int year;
	//! Страна производства
	std::string country;
	//! Тип корабля (танкер, сухогруз, пассажирский)
	std::string type;
	//! Капитан корабля
	std::string captain;

public:
	//! Конструктор по умолчанию
	Ship();
	//! Конструктор от параметра Строка в формате "name|year|country|type|captain"
	Ship(std::string s);
	/*
	 * Конструктор от параметров:
	 *	@param name Название корабля
	 * @param year Год постройки
	 * @param country Страна производства
	 * @param type Тип корабля (танкер/сухогруз/пассажирский)
	 * @param captain Капитан корабля
	 */
	Ship(std::string name, int year, std::string country, std::string type, std::string captain);
	//! Деструктор класса
	~Ship();

	//сеттеры:
	//! Функция, устанавливающая поле класса name в соответствии с переданным значением переменной
	void set_name (const std::string name);
	//! Функция, устанавливающая поле класса year в соответствии с переданным значением переменной
	void set_year (const int year);
	//! Функция, устанавливающая поле класса country в соответствии с переданным значением переменной
	void set_country (const std::string country);
	//! Функция, устанавливающая поле класса type в соответствии с переданным значением переменной
	void set_type (const std::string type);
	//! Функция, устанавливающая поле класса captain в соответствии с переданным значением переменной
	void set_captain (const std::string captain);

	//геттеры:
	//! Функция, которая возвращает значение поля name
	std::string get_name();
	//! Функция, которая возвращает значение поля year
	int get_year();
	//! Функция, которая возвращает значение поля country
	std::string get_country();
	//! Функция, которая возвращает значение поля type
	std::string get_type();
	//! Функция, которая возвращает значение поля captain
	std::string get_captain();

	//перегрузка операторов:
	//! Перегрузка оператора сравнения Больше
	bool operator> (const Ship &other);
	//! Перегрузка оператора сравнения Больше
	bool operator< (const Ship &other);
	//! Перегрузка оператора сравнения Меньше
	bool operator== (const Ship &other);
	//! Перегрузка оператора сравнения Равно
	bool operator!= (const Ship &other);
	//! Перегрузка оператора сравнения Больше или равно
	bool operator>= (const Ship &other);
	//! Перегрузка оператора сравнения Меньше или равно
	bool operator<= (const Ship &other);

	//! Перегрузка опервтора присваивания
	Ship & operator= (const Ship &);

	/**
	 * @brief Функция чтения данных в поток
	 * @param left поток, в которой записываются данные
	 * @param s объект класса
	 * @return поток
	 */
	friend std::ostream & operator<<(std::ostream &left, const Ship &s);
	/**
	 * @brief Функция чтения данных из потока
	 * @param left поток, из которого читаются данные объекта класса
	 * @param s объект класса
	 * @return поток
	 */
	friend std::istream & operator>>(std::istream &left, const Ship &s);
};


#endif //SHIP_H