class dispenserType{//販賣機
public:
	int getNoOfItem()const;//得到品項

	int getCost()const;//得到錢

	void makeSale();//減少品項

	dispenserType();

	dispenserType(int setNoOfItems, int setCost);//設定品項和價格

private:
	int numberOfItems;

	int cost;

};
