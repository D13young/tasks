#include <iostream>
using namespace std;
int main()
{
	cout << "Home task #8.1.\n\n";
	int pizza, drink, quanpiz, quandrink;
	double totalpriceP, priceP, pizza1 = 6.5, pizza2 = 5.8, pizza3 = 6.2, pizza4 = 6.1;
	double totalpriceD, totalcost, priceD, drink1 = 1.2, drink2 = 1.7, drink3 = 2.1;
	cout << "Pizza #1: with chees\n";
	cout << "Pizza #2: with chicken\n";
	cout << "Pizza #3: with salmon\n";
	cout << "Pizza #4: with pork\n";
	cin >> pizza;
	switch (pizza)
	{
	case 1:
		priceP = pizza1;
		break;
	case 2:
		priceP = pizza2;
		break;
	case 3:
		priceP = pizza3;
		break;
	case 4:
		priceP = pizza4;
		break;
	default:
		cout << "Error, it's not on the menu\n";
		priceP = 0;
		return 0;
	}
	cout << "Quantity:\n";
	cin >> quanpiz;
	cout << "Drink 1, 2, 3:\n";
	cin >> drink;
	switch (drink)
	{
	case 1:
		priceD = drink1;
		break;
	case 2:
		priceD = drink2;
		break;
	case 3:
		priceD = drink3;
		break;
	default:
		cout << "Error, it's not on the menu\n";
		priceD = 0;
		return 0;
	}
	cout << "Quantity drink:\n";
	cin >> quandrink;
	totalpriceP = priceP * quanpiz;
	totalpriceD = priceD * quandrink;
	if (quanpiz >= 5) {
		cout << "1 pizza for you free\n";
		quanpiz += 1;
		totalpriceP -= priceP;
	}
	if (priceD > 2 && quandrink >= 3) {
		cout << "Discount on drinks - 15%\n";
		totalpriceD *= (1 - 0.15);
	}
	totalcost = totalpriceP + totalpriceD;
	if (totalcost > 50) {
		cout << "Total discount - 20%\n";
		totalcost *= (1 - 0.20);
	}
	cout << "Pizza: # " << pizza << " Quantity: " << quanpiz << " Cost: $" << priceP << "\n";
	cout << "Drink: # " << drink << " Quantity: " << quandrink << " Cost: $" << priceD << "\n";
	cout << "Total cost: " << totalcost << "\n";
	return 0;
}