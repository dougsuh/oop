// fruit.cpp
#include "fruit.h"
void fruit::showHowMuchWePay() {
	cout << name << " " << howmany * price << endl;
}
void fruit::show_all() {
	cout << name << " " << howmany << " " << price << endl;
}
void fruit::show_only_name_and_price() {
	cout << name << " " << price << endl;
}