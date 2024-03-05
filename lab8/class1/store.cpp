#include "store.h"
void store::total_price() {
	float total = 0;
	total += apple.howmany * apple.price;
	total += pear.howmany * pear.price;
	total += peach.howmany * peach.price;
	cout << " total = " << total << endl;
}