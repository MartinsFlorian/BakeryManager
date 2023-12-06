#pragma once
#include "GlobalHeader.h"
#include "Inventory.h"
#include "Shop.h"
class Manager
{
public:

	void Money(int* money);
	void Buy(Inventory* bag, Shop* price, int* money);
	void DoProduct(Inventory* bag);
	void Sell(Inventory* bag, Shop* price, int* money);
	void GameOver();
};




