//This program asks the user what size of pizzas they would like to order for a party, and the number of expected attendees.
//It then calculates, based on a standard area per slice of pizza, the number of slices each pizza will have,
//as well as the total number of pizzas needed to feed everyone at the party.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	const int SLICES_PER_PERSON = 3;			//Number of slices each person is expected to eat
	const float AREA_OF_SLICE = 14.125;			//The required area of a slice of pizza
	const float PI = 3.14159;					//Pi
	float diameter;								//Diameter of pizzas that the customer wishes to order, in inches
	int numPeople;								//Number of people expected to attend the party;
	float radius;								//Radius of the pizza, calculated using diameter input by user
	float area;									//Area of pizza, calculated using PI and radius
	float slicesPerPizza;						//Number of slices per pizza, calculated using area of pizza and required area per slice
	float slicesNeeded;							//Number of slices needed, based on expected number of attendees;
	float pizzasNeeded;							//Number of pizzas needed, based on number of slices needed and number of slices per pizza;

	//Prompt the user for the information we need to make the calculations.
	cout << "What size pizzas would you like to order (in inches)? ";
	cin >> diameter;
	cout << "How many people do you expect to attend the party? ";
	cin >> numPeople;

	//Calculate the area of the pizzas the customer will be ordering.
	radius = diameter / 2;
	area = PI * pow(radius, 2);

	//Calculate the number of slices that each pizza can be cut into, based on the required area per slice.
	slicesPerPizza = area / AREA_OF_SLICE;

	//Calculate the number of slices needed, based on the expected number of attendees.
	slicesNeeded = numPeople * SLICES_PER_PERSON;

	//Calculate the number of pizzas needed, based on the number of slices needed and the number of slices per pizza.
	pizzasNeeded = slicesNeeded / slicesPerPizza;

	//Tell the user how many pizzas they will need for the party, and how many slices each pizza should be cut into,
	//in order to meet the minimum requirement for area per slice.
	//Express the number of slices as a fixed point number rounded to one decimal place, as per assignment requirements.
	//No requirements given for formatting of other output.
	cout << endl << "If " << numPeople << " people attend your party and you want to order " << diameter << "-inch pizzas, then assuming that each person eats "
		<< fixed << setprecision(1) << SLICES_PER_PERSON << " slices, you will need " << pizzasNeeded << " pizzas cut into " << slicesPerPizza << " slices each "
		<< "in order to feed everyone adequately." << endl << endl;

	system("PAUSE");
	return 0;

}