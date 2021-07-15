#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include "cashRegister.h";
#include "dispenserType.h";
using namespace std;

void showSelection() {
	cout << "***Welcome to Shelly's Fruit Juie Shop ***" << endl;
	cout << "To select an item, enter " << endl;
	cout << "1 for apple juice " << endl;
	cout << "2 for orange juice " << endl;
	cout << "3 ofr mando lassi " << endl;
	cout << "4 for fruit puch " << endl;
	cout << " 9 to exit " << endl;
}
void sellProduct(dispenserType& product, cashRegister& pCounter) {

	int amount;
	int amount2;

	if (product.getNoOfItem() > 0) {
		cout << "Plese deposit " << product.getCost() << " cents" << endl;
		cin >> amount;

		if (amount < product.getCost()) {
			cout << "Please deposit another " << product.getCost() - amount << " cents " << endl;
			cin >> amount2;
			amount = amount + amount2;

		}

		if (amount >= product.getCost()) {
			pCounter.accceptAmount(amount);
			product.makeSale();
			cout << "Collect your item at the bottom and enjoy." << endl;
		}
		else {
			cout << "The amount is not enough." << "Collect what you deposited. " <<endl <<endl;
			
		}
		cout << "*-*-**-**-*-*-**-*-*-*-*-*-*-*-*-*-*-*" << endl << endl;

	}
	else {
		cout << "Sorry, this item is sold out." << endl;
	
	}

	

}


int main() {

	cashRegister counter;
	dispenserType appleJuice(1, 50);
	dispenserType orangeJuice(100, 65);
	dispenserType mangoLassi(75, 45);
	dispenserType fruitPunch(100, 85);

	int choice=0;

	showSelection();
	cin >> choice;

	while (choice != 9) {
		switch (choice) {

		case 1:
			sellProduct(appleJuice, counter);
			break;
		case 2:
			sellProduct(orangeJuice, counter);
			break;
		case 3:
			sellProduct(mangoLassi, counter);
			break;
		case 4:
			sellProduct(fruitPunch, counter);
			break;
		default:
			cout << "Invalid selection." << endl;





		}

		showSelection(); 
		cin >> choice;
		

	}








	return 0;
} 