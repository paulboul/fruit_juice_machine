class dispenserType{//�c���
public:
	int getNoOfItem()const;//�o��~��

	int getCost()const;//�o���

	void makeSale();//��֫~��

	dispenserType();

	dispenserType(int setNoOfItems, int setCost);//�]�w�~���M����

private:
	int numberOfItems;

	int cost;

};
