/**
 * @file
 * @brief Файл, содержащий реализации функций и типов, которые задекларированы в заголовочном файле
 */

#include "class.h"
#include <stdexcept>
#include <sstream>
#include <fstream>
#include <string.h>
#include <iostream>

Ship::Ship() {
	this->name = "name";
	this->year = 0;
	this->country = "country";
	this->type = "Сухогруз";
	this->captain = "Jack Sparrow";
}

Ship::Ship(std::string s){
	std::istringstream sstream(s);
	std::getline(sstream, this->name, '|');
	sstream >> this->year;
	sstream.ignore();
	std::getline(sstream, this->country, '|');
	std::getline(sstream, this->type, '|');
	std::getline(sstream, this->captain);
}

Ship::Ship(std::string name, int year, std::string country, std::string type, std::string captain) {
	this->name = name;
	this->year = year;
	this->country = country;
	this->captain = captain;
	this->type = type;
}

Ship::~Ship() {}

void Ship::set_name(const std::string name) {
	this->name = name;
}

void Ship::set_year(const int year) {
	this->year = year;
}

void Ship::set_country(const std::string country) {
	this->country = country;
}

void Ship::set_type(const std::string type) {
	this->type = type;
}

void Ship::set_captain(const std::string captain) {
	this->captain = captain;
}


std::string Ship::get_name() {
	return this->name;
}

int Ship::get_year() {
	return this->year;
}

std::string Ship::get_country() {
	return this->country;
}

std::string Ship::get_type() {
	return this->type;
}

std::string Ship::get_captain() {
	return this->captain;
}

bool Ship::operator> (const Ship &other) {
	return (year > other.year) || (year == other.year && name > other.name) || (year == other.year && name == other.name && type > other.type);
}

bool Ship::operator< (const Ship &other) {
	return (year < other.year) || (year == other.year && name < other.name) || (year == other.year && name == other.name && type < other.type);
}

bool Ship::operator== (const Ship &other) {
	return (year == other.year && name == other.name && type == other.type);
}

bool Ship::operator>= (const Ship &other) {
	return !((year > other.year) || (year == other.year && name > other.name) || (year == other.year && name == other.name && type > other.type));
}

bool Ship::operator<= (const Ship &other) {
	return !((year < other.year) || (year == other.year && name < other.name) || (year == other.year && name == other.name && type < other.type));
}

Ship & Ship::operator= (const Ship &right) {
	name = right.name;
	year = right.year;
	country = right.country;
	type = right.type;
	captain = right.captain;
	return *this;
}

std::ostream & operator<< (std::ostream &left, const Ship &s) {
	left << s.name << '|' << s.year << '|' << s.country << '|' << s.type << '|' << s.captain;
	return left;
}