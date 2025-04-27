/*Write	a	program	that	computes	how	much	a	customer	has	to	pay	after	purchasing	two
items.	The	price	is	calculated	according	to	the	following	rules:
• Buy	one	get	one	half	off	promotion:	the	lower	price	item	is	half	price.
• If	the	customer	is	club	card	member,	additional	10%	off.
• Tax	is	added.
Inputs	to	the	program	include:
• Two	items’	prices
• Have	club	card	or	not	(User	enters	‘Y’	or	‘y’	for	“yes”;	‘N’	or	‘n’	for	“no”)
• Tax	rate	(User	enters	the	percentage	as	a	number;	for	example	they	enter	8.25	if	the	tax
rate	is	8.25%)
Program	displays:
• Base	price	- the	price	before	the	discounts	and	taxes
• Price	after	discounts	- the	price	after	the	buy	one	get	one	half	off	promotion	and	the member's discount, if applicable
Total price- the amount of money the customer has to pay (after tax)	*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double first_item;
    double second_item;
    double base_price;
    double price_after_50_off;
    char club_card;
    double tax_rate;
    double total_price;
    double price_after_discounts;

    cout << "Enter price of first item: ";
    cin >> first_item;

    cout << "Enter price of second item: ";
    cin >> second_item;

    base_price = first_item + second_item;

    if (first_item < second_item)
    {
        first_item = first_item * .5;
    }
    else
    {
        second_item = second_item * .5;
    }

    price_after_50_off = first_item + second_item;

    cout << "Does customer have a club card? (Y/N): ";
    cin >> club_card;

    cout << "Enter tax rate, e.g 5.5 for 5.5% tax: ";
    cin >> tax_rate;
    
    std::cout << "Base price: " << std::fixed << setprecision(1) << base_price << std::endl;

    if ((club_card == 'y') || (club_card == 'Y'))
    {
        price_after_discounts = price_after_50_off * .9;
    }
    else
    {
        price_after_discounts = price_after_50_off;
    }
    cout << "Price after discounts: " << price_after_discounts << endl;

    total_price = price_after_discounts + (price_after_discounts * tax_rate / 100);

    
    std::cout << "Total price: " << std::fixed << std::setprecision(5) << total_price << std::endl;


    return 0;
}