#include "GlobalHeader.h"
#include "DayManager.h"
#include "Inventory.h"
#include "Shop.h"


int main()
{
	Inventory* bag = new Inventory();
	Shop* price = new Shop();
	Manager* dayManager = new Manager();
	bag->flourQuantity = 1;
	bag->cheeseQuantity = 1;
	bag->olivesQuantity = 1;
	bag->eggsQuantity = 1;
	bag->powderQuantity = 1;

	bag->breadQuantity = 0;
	bag->oliveCakeQuantity = 0;
	bag->cheeseCakeQuantity = 0;

	price->flourPrice = 2;
	price->cheesePrice = 3;
	price->olivesPrice = 5;
	price->eggsPrice = 4;
	price->powderPrice = 1;

	price->breadPrice = 2;
	price->oliveCakePrice = 3;
	price->cheeseCakePrice = 5;

	int money = rand() % 100 + 1;
	srand((unsigned int)time(0));
	int day = 1;
	for (day = 1; day < 10; day++) 
	{
			cout << "Day" << day << endl;
			dayManager->Money(&money);
			dayManager->Buy(bag, price, &money);
			if (money <  0) 
			{
				dayManager->GameOver();
				break;
			}
			else
			{
				dayManager->DoProduct(bag);
				dayManager->Sell(bag, price, &money);
				money = money;
			}
	}
}