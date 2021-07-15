#include<iostream>
#include "cashRegister.h";


int cashRegister::getCurentBalance()const {
	return cashOnHand;
}

void cashRegister::accceptAmount(int amountIn) {
	cashOnHand += amountIn;
}

cashRegister::cashRegister() {
	cashOnHand = 500;
}
cashRegister::cashRegister(int cashIn) {
	if (cashIn >= 0) {
		cashOnHand = cashIn;
	}
	else {
		cashOnHand = 500;
	}
}
