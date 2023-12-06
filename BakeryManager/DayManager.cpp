#include "DayManager.h"

void Manager::Money(int* money)
{
	cout << "You have " << *money << " euros" << endl;
}
void Manager::GameOver() 
{
	system("cls");
	cout << "Game Over !!!" << endl;
}


void Manager::Buy(Inventory* bag, Shop* price, int* money)
{
	cout << "You have :" << endl << bag->flourQuantity << " Flour" << endl
		<< bag->cheeseQuantity << " Cheese" << endl << bag->olivesQuantity << " Olives" << endl
		<< bag->eggsQuantity << " Eggs" << endl << bag->powderQuantity << " Baking Powder" << endl;



	cout << " What ingredients do you want to buy ?" << endl << "You can buy " << endl
		<< "1- flour" << endl << "2- cheese" << endl << "3- olives" << endl << "4- eggs" << endl
		<< "5- baking powder" << endl << "6- Quit the shop" << endl;

	int ingredientbuy;
	cin >> ingredientbuy;

	while (ingredientbuy != 6 && *money>0)
	{
		if (ingredientbuy == 1)
		{
			cout << "You buy one flour" << endl;
			bag->flourQuantity += 1;

			cout << " What ingredients do you want to buy ?" << endl << "You can buy " << endl
				<< "1- flour" << endl << "2- cheese" << endl << "3- olives" << endl << "4- eggs" << endl
				<< "5- baking powder" << endl << "6- Quit the shop" << endl;

			*money -= price->flourPrice;
			cout << "You have : " << *money << " euros" << endl;

			cin >> ingredientbuy;
		}
		else if (ingredientbuy == 2)
		{
			cout << "You buy one cheese" << endl;
			bag->cheeseQuantity += 1;

			cout << " What ingredients do you want to buy ?" << endl << "You can buy " << endl
				<< "1- flour" << endl << "2- cheese" << endl << "3- olives" << endl << "4- eggs" << endl
				<< "5- baking powder" << endl << "6- Quit the shop" << endl;

			*money -= price->cheesePrice;
			cout << "You have : " << *money << " euros" << endl;

			cin >> ingredientbuy;
		}
		else if (ingredientbuy == 3)
		{
			cout << "You buy one olive" << endl;
			bag->olivesQuantity += 1;

			cout << " What ingredients do you want to buy ?" << endl << "You can buy " << endl
				<< "1- flour" << endl << "2- cheese" << endl << "3- olives" << endl << "4- eggs" << endl
				<< "5- baking powder" << endl << "6- Quit the shop" << endl;

			*money -= price->olivesPrice;
			cout << "You have : " << *money << " euros" << endl;

			cin >> ingredientbuy;
		}
		else if (ingredientbuy == 4)
		{
			cout << "You buy one egg" << endl;
			bag->eggsQuantity += 1;

			cout << " What ingredients do you want to buy ?" << endl << "You can buy " << endl
				<< "1- flour" << endl << "2- cheese" << endl << "3- olives" << endl << "4- eggs" << endl
				<< "5- baking powder" << endl << "6- Quit the shop" << endl;

			*money -= price->eggsPrice;
			cout << "You have : " << *money << " euros" << endl;

			cin >> ingredientbuy;
		}
		else if (ingredientbuy == 5)
		{
			cout << "You buy one baking powder" << endl;
			bag->powderQuantity += 1;

			cout << " What ingredients do you want to buy ?" << endl << "You can buy " << endl
				<< "1- flour" << endl << "2- cheese" << endl << "3- olives" << endl << "4- eggs" << endl
				<< "5- baking powder" << endl << "6- Quit the shop" << endl;

			*money -= price->powderPrice;
			cout << "You have : " << *money << " euros" << endl;

			cin >> ingredientbuy;
		}

	}

	return;
}

void Manager::DoProduct(Inventory* bag)
{
	cout << "What do you want to do ?" << endl << "You can do " << endl << "1- bread" << endl << "2- cheese cake" << endl << "3- olive cake" << endl << "4- Quit furnace" << endl;

	int action;
	cin >> action;

	while (action != 4)
	{
		if (action == 1)
		{
			cout << "You need 2 flour and 1 baking powder." << endl;

			if (bag->flourQuantity >= 2 && bag->powderQuantity >= 1)
			{
				bag->breadQuantity += 1;
				bag->flourQuantity -= 1;
				bag->powderQuantity -= 1;

				cout << "You have : " << bag->breadQuantity << " bread" << endl;
				cout << "What do you want to do ?" << endl << "You can do " << endl << "1- bread" << endl << "2- cheese cake" << endl << "3- olive cake" << endl << "4- Quit furnace" << endl;
			}
			else
			{
				cout << "You can't do it !" << endl;
			}
			cin >> action;
		}
		else if (action == 2)
		{
			cout << "You need flour, cheese and eggs." << endl;

			if (bag->flourQuantity >= 2 && bag->cheeseQuantity >= 2 && bag->eggsQuantity >=3)
			{
				bag->cheeseCakeQuantity += 1;
				bag->flourQuantity -= 1;
				bag->cheeseQuantity -= 1;
				bag->eggsQuantity -= 2;

				cout << "You have : " << bag->cheeseCakeQuantity << " cheese cake" << endl;
				cout << "What do you want to do ?" << endl << "You can do " << endl << "1- bread" << endl << "2- cheese cake" << endl << "3- olive cake" << endl << "4- Quit furnace" << endl;
			}
			else
			{
				cout << "You can't do it !" << endl;
			}
			cin >> action;
		}
		else if (action == 3)
		{
			cout << "You need flour, cheese, olives, eggs and baking powder." << endl;
			if (bag->flourQuantity >= 2 && bag->powderQuantity >= 1 && bag->cheeseQuantity >= 2 && bag->olivesQuantity >= 3 && bag->eggsQuantity >= 3)
			{
				bag->oliveCakeQuantity += 1;
				bag->flourQuantity -= 1;
				bag->powderQuantity -= 1;
				bag->cheeseQuantity -= 1;
				bag->olivesQuantity -= 3;
				bag->eggsQuantity -= 2;

				cout << "You have : " << bag->oliveCakeQuantity << " olive cake" << endl;
				cout << "What do you want to do ?" << endl << "You can do " << endl << "1- bread" << endl << "2- cheese cake" << endl << "3- olive cake" << endl << "4- Quit furnace" << endl;
			}
			else
			{
				cout << "You can't do it !" << endl;
			}
			cin >> action;
		}
	}
}

void Manager::Sell(Inventory* bag, Shop* price, int* money)
{
	cout << "What do you want to sell ?" << endl << "1- bread" << endl << "2- cheese cake" << endl << "3- olive cake" << endl << "4- Stop sell" << endl;
	int sellProduct;
	cin >> sellProduct;

	while (sellProduct != 4)
	{
		if (sellProduct == 1)
		{
			if (bag->breadQuantity >= 1) 
			{
				bag->breadQuantity -= 1;
				cout << "You sell one bread" << endl;

				cout << "What do you want to sell ?" << endl << "1- bread" << endl << "2- cheese cake" << endl << "3- olive cake" << endl << "4- Stop sell" << endl;

				*money += price->breadPrice;
				cout << "You have : " << *money << " euros" << endl;
			}
			else 
			{
				cout << "You can't sell it !" << endl;
			}
			cin >> sellProduct;
		}
		else if (sellProduct == 2)
		{
			if (bag->cheeseCakeQuantity >= 1)
			{
				bag->cheeseCakeQuantity -= 1;
				cout << "You sell one cheese cake" << endl;

				cout << "What do you want to sell ?" << endl << "1- bread" << endl << "2- cheese cake" << endl << "3- olive cake" << endl << "4- Stop sell" << endl;
				*money += price->cheeseCakePrice;
				cout << "You have : " << *money << " euros" << endl;
			}
			else 
			{
				cout << "You can't sell it !" << endl;
			}
			cin >> sellProduct;
		}
		else if (sellProduct == 3)
		{
			if (bag->oliveCakeQuantity >= 1)
			{
				bag->oliveCakeQuantity -= 1;
				cout << "You sell one olive Cake" << endl;

				cout << "What do you want to sell ?" << endl << "1- bread" << endl << "2- cheese cake" << endl << "3- olive cake" << endl << "4- Stop sell" << endl;
				*money += price->oliveCakePrice;
				cout << "You have : " << *money << " euros" << endl;
			}
			else
			{
				cout << "You can't sell it !" << endl;
			}
			cin >> sellProduct;
		}
	}
}