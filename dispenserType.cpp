#include<iostream>
#include "dispenserType.h";

int dispenserType::getNoOfItem()const {
	return numberOfItems;
}
int dispenserType::getCost()const {
	return cost;
}
void dispenserType::makeSale() {
	numberOfItems--;
}
dispenserType::dispenserType() {
	numberOfItems = 50;
	cost = 50;
}
dispenserType::dispenserType(int setNoOfItem, int setCost) {
	if (setNoOfItem >= 0) {
		numberOfItems = setNoOfItem;
	}
	else {
		numberOfItems = 50;
	}
	if (setCost >= 0) {
		cost = setCost;
	}
	else {
		cost = 50;
	}
}