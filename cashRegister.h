
class cashRegister {//������
public:

	int getCurentBalance()const;

	void accceptAmount(int amountIn);

	cashRegister();

	cashRegister(int cashIn);
private:
	int cashOnHand;
};

