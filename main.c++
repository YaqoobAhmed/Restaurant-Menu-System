#include<iostream>
#include<conio.h>
using namespace std;
void displaymenu();
void takecustomerdata();
void deals();
void sweet();
void desi();
void fastfood();
void beverages();
int i, deal, dealop;
char type, y;
double net = 0, quantity, chargeb = 0, chargef = 0, chargep = 0, charges = 0, d1 = 0, d2 = 0, d3 = 0, d4 
= 0, d5 = 0, d6 = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s = 0, j = 0, k = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, t 
= 0, b1 = 0, b2 = 0, b3 = 0, b4 = 0, b5 = 0;
int main()
{
cout << "\n\t\t=========================================" << endl;
cout << "\n\t\tWELCOME TO 'KHA LE DABA KE' RESTAURANT" << endl;
cout << "\n\t\t=========================================" << endl;
cout << "\t\t\t******TASTE THE BEST*****" << endl;
displaymenu();
takecustomerdata();

return 0;
}
void displaymenu()
{
cout << "\t ****GROUP MEMBERS*****" << endl;
cout << "\t\tYAQOOB AHMED" << endl;
cout << "\t\tBILAL NAJAM" << endl;
cout << "\t\tMUHIB MALLICK" << endl;
cout << "\t\tABDUL QADIR" << endl;
cout << "\t\tSHAHEER JAWAID" << endl;
cout << "\t\t\t\t=========" << endl;
cout << "\t\t\t\tMenu list" << endl;
cout << "\t\t\t\t=========" << endl;
cout << "\n**PLEASE PRESS ENTER AFTER EVERY INPUT**" << endl;
}
void deals()
{
do
{
cout << "\nIf You Want To Add Deals Please Press Y/N (Y for Yes / N for No): ";
cin >> y;
if (y == 'Y' || y == 'y')
{
cout << "\nEnter Option's Number: ";
cin >> deal;
switch (deal)

{
case 1:
do {
cout << "You choose OPTION 1\n";
cout << "1) 2 Chicken Burgers with fries and 1.5 litre drink. 
RS: " << 749 << endl;
cout << "2) 2 Zinger Burgers with a club sandwich a 2.25 litre 
drink. RS: " << 899 << endl;
cout << "3) 3 Beef Burgers with 2 wings and 2 cans of cold 
drink. RS: " << 1999 << endl;
cout << "4) 5 Cheese Burgers with 3 wings and 2 packet of 
fries. " << 1799 << endl;
cout << "Now select Deal: ";
cin >> dealop;
cout << "Enter Quantity: ";
cin >> quantity;
if (dealop == 1)
{
s = s + quantity * 749;
cout << "You select " << 2 * quantity << " Chicken 
Burgers with fries and (" << quantity << ") 1.5 litre drink." << endl;
cout << "Your Total amount is: " << s << endl;
}
else if (dealop == 2)
{
j = j + quantity * 899;
cout << "You select " << 2 * quantity << " Zinger 
Burgers with " << 1 * quantity << " Club Sandwich And (" << quantity << ") 2.25 litre drink." << endl;
cout << "Your Total amount is: " << j << endl;
}
else if (dealop == 3)

{
k = k + quantity * 1999;
cout << "You select " << 3 * quantity << " Beef 
Burgers with " << 2 * quantity << " wings and " << 2 * quantity << " cans of cold drink." << endl;
cout << "Your Total amount is: " << k << endl;
}
else if (dealop == 4)
{
m = m + quantity * 1799;
cout << "You select " << 5 * quantity << " Cheese 
Burgers with " << 3 * quantity << " wings and " << 2 * quantity << " packet of fries." << endl;
cout << "Your Total amount is: " << m << endl;
}
else
{
cout << "\nInvalid option.." << endl;
cout << "\n**PLEASE TRY AGAIN**" << endl;
}
} while (dealop > 4);
break;
case 2:
do
{
cout << "You choose OPTION 2\n";
cout << "1)1 Small Pizza with 1 can of drink. RS: " << 350 << 
endl;
cout << "2)3 Small Pizza. RS: " << 699 << endl;
cout << "3)1 Small Pizza and 1 Medium Pizza with 1.5 litre 
drink. RS: " << 949 << endl;
cout << "4)2 Medium Pizza and 1 large pizza with 1.5 litre 
drink. RS: " << 1499 << endl;

cout << "5)3 Large Pizza with Jumbo drink. RS: " << 1999 << 
endl;
cout << "6)1 Jumbo Pizza. RS: " << 1800 << endl;
cout << "Now select Deal: ";
cin >> dealop;
cout << "Enter Quantity: ";
cin >> quantity;
if (dealop == 1)
{
n = n + quantity * 350;
cout << 1 * quantity << " Small Pizza with " << 1 * 
quantity << " cans of drink." << endl;
cout << "Your Total amount is: " << n << endl;
}
else if (dealop == 2)
{
o = o + quantity * 699;
cout << 3 * quantity << " Small Pizza." << endl;
cout << "Your Total amount is: " << o << endl;
}
else if (dealop == 3)
{
p = p + quantity * 949;
cout << 1 * quantity << " Small Pizza and " << 1 * 
quantity << " Medium Pizza with (" << quantity << ") 1.5 litre drink" << endl;
cout << "Your Total amount is: " << p << endl;
}
else if (dealop == 4)
{
q = q + quantity * 1499;

cout << 2 * quantity << " Medium Pizza and " << 1 * 
quantity << " large pizza with(" << quantity << ") 1.5 litre drink." << endl;
cout << "Your Total amount is: " << q << endl;
}
else if (dealop == 5)
{
r = r + quantity * 1999;
cout << 3 * quantity << " Large Pizza with " << 
quantity << " Jumbo drink." << endl;
cout << "Your Total amount is: " << r << endl;
}
else if (dealop == 6)
{
t = t + quantity * 1800;
cout << 1 * quantity << " Jumbo Pizza." << endl;
cout << "Your Total amount is: " << t << endl;
}
else
{
cout << "\nInvalid option.." << endl;
cout << "\n**PLEASE TRY AGAIN**" << endl;
}
} while (dealop > 6);
break;
}
}
else if (y == 'N' || y == 'n')
{
cout << "\n'You Didn't Choose Any Deals'" << endl;
}
else

{
cout << "\nYou Enter Wrong Character" << endl;
cout << "\n**PLEASE TRY AGAIN**";
}
}while (y != 'Y' && y != 'y' && y != 'N' && y != 'n');
}
void fastfood()
{
do
{
cout << "\nIf You Want To Add Fast Food Item Please Press Y/N (Y for Yes / N for 
No): ";
cin >> y;
if (y == 'Y' || y == 'y')
{
cout << "Burger => Price 200" << endl;
cout << "French Fries => Price 50" << endl;
cout << "Pizza => Price 500" << endl;
cout << "Sandwich => Price 150" << endl;
do {
cout << "\nEnter Food Type [B or F or P or S]" << endl;
cout << "Press B - Burger " << endl;
cout << "Press F - French Fries " << endl;
cout << "Press P - Pizza " << endl;
cout << "Press S - Sandwich " << endl;
cin >> type;
switch (type)
{
int cheese;
case 'B':
int l;
do {
cout << "Press 1 For (Zinger): Press 2 For (Beef 
Burger): Press 3 For (Chicken Crispy) => ";
cin >> l;
cout << "NOTE: All Burgers Have Same Price. EXTRA 
Cheese Cost: Rs.30 " << endl;
switch (l)
{
case 1:
cout << "Enter Quantity: ";
cin >> quantity;
chargeb = chargeb + quantity * 200;
cout << "If You Want To Add Cheese Please 
Press 1(Any other Character Would be 'NO')" << endl;
cin >> cheese;
if (cheese == 1)
{
chargeb = chargeb + quantity * 30;
}
cout << "Total Charge : " << chargeb << 
endl;
cout << "You ordered " << quantity << " " << 
" Zinger Burger" << endl;
break;
case 2:
cout << "Enter Quantity: ";
cin >> quantity;
chargeb = chargeb + quantity * 200;
cout << "If You Want To Add Cheese Please 
Press 1(Any other Character Would be 'NO')" << endl;
cin >> cheese;
if (cheese == 1)
{
chargeb = chargeb + quantity * 30;
}
cout << "Total Charge : " << chargeb << 
endl;
cout << "You ordered " << quantity << " " << 
"Beef Burger" << endl;
break;
case 3:
cout << "Enter Quantity: ";
cin >> quantity;
chargeb = chargeb + quantity * 200;
cout << "If You Want To Add Cheese Please 
Press 1(Any other Character Would be 'NO')" << endl;
cin >> cheese;
if (cheese == 1)
{
chargeb = chargeb + quantity * 30;
}
cout << "Total Charge : " << chargeb << 
endl;
cout << "You ordered " << quantity << " " << 
"Chicken Crispy" << endl;
break;
}
} while (l > 3);
break;
case 'F':
cout << "Enter Quantity: ";
cin >> quantity;
cout << "EXTRA Cheese Cost: Rs.20 " << endl;
chargef = chargef + quantity * 50;
cout << "If You Want To Add Cheese Please Press 1(Any 
other Character Would be 'NO')" << endl;
cin >> cheese;
if (cheese == 1)
{
chargef = chargef + quantity * 20;
}
cout << "Total Charge : " << chargef << endl;
cout << "You ordered " << quantity << " " << "Fries" << endl;
break;
case 'P':
cout << "Enter Quantity: ";
cin >> quantity;
chargep = chargep + quantity * 500;
cout << "EXTRA Cheese Toping Cost: Rs.100 " << endl;
cout << "If You Want To Add Chese Please Press 1(Any other 
Character Would be 'NO')" << endl;
cin >> cheese;
if (cheese == 1)
{
chargep = chargep + quantity * 100;
}
cout << "Total Charge : " << chargep << endl;
cout << "You ordered " << quantity << " " << "Pizza" << endl;
break;
case 'S':
cout << "Enter Quantity: ";
cin >> quantity;
charges = charges + quantity * 150;
cout << "Total Charge : " << charges << endl;
cout << "You ordered " << quantity << " " << "Sandwich" << 
endl;
break;
case 'b':
int l1;
do {
cout << "Pewss 1 For (Zinger): Press 2 For (Beef 
Burger): Press 3 For (Chicken Crispy) => ";
cin >> l1;
cout << "NOTE: All Burgers Have Same Price. EXTRA 
Cheese Cost: Rs.30 " << endl;
switch (l1)
{
case 1:
cout << "Enter Quantity: ";
cin >> quantity;
chargeb = chargeb + quantity * 200;
cout << "If You Want To Add Chese Please 
Press 1(Any other Character Would be 'NO')" << endl;
cin >> cheese;
if (cheese == 1)
{
chargeb = chargeb + quantity * 30;
}
cout << "Total Charge : " << chargeb << 
endl;
cout << "You ordered " << quantity << " " << 
" Zinger Burger" << endl;
break;
case 2:
cout << "Enter Quantity: ";
cin >> quantity;
chargeb = chargeb + quantity * 200;
cout << "If You Want To Add Chese Please 
Press 1(Any other Character Would be 'NO')" << endl;
cin >> cheese;
if (cheese == 1)
{
chargeb = chargeb + quantity * 30;
}
cout << "Total Charge : " << chargeb << 
endl;
cout << "You ordered " << quantity << " " << 
"Beef Burger" << endl;
break;
case 3:
cout << "Enter Quantity: ";
cin >> quantity;
chargeb = chargeb + quantity * 200;
cout << "If You Want To Add Cheese Please 
Press 1(Any other Character Would be 'NO')" << endl;
cin >> cheese;
if (cheese == 1)
{
chargeb = chargeb + quantity * 30;
}
cout << "Total Charge : " << chargeb << 
endl;
cout << "You ordered " << quantity << " " << 
"Chicken Crispy" << endl;
break;
}
} while (l1 > 3);
break;
case 'f':
cout << "Enter Quantity: ";
cin >> quantity;
cout << "EXTRA Cheese Cost: Rs.20 " << endl;
chargef = chargef + quantity * 50;
cout << "If You Want To Add Cheese Please Press 1(Any 
other Character Would be 'NO')" << endl;
cin >> cheese;
if (cheese == 1)
{
chargef = chargef + quantity * 20;
}
cout << "Total Charge : " << chargef << endl;
cout << "You ordered " << quantity << " " << "Fries" << endl;
break;
case 'p':
cout << "Enter Quantity: ";
cin >> quantity;
chargep = chargep + quantity * 500;
cout << "EXTRA Cheese Toping Cost: Rs.100 " << endl;
cout << "If You Want To Add Cheese Please Press 1(Any 
other Character Would be 'NO')" << endl;
cin >> cheese;
if (cheese == 1)
{
chargep = chargep + quantity * 100;
}
cout << "Total Charge : " << chargep << endl;
cout << "You ordered " << quantity << " " << "Pizza" << endl;
break;
case 's':
cout << "Enter Quantity: ";
cin >> quantity;
charges =charges + quantity * 150;
cout << "Total Charge : " << charges << endl;
cout << "You ordered " << quantity << " " << "Sandwich" << 
endl;
break;
default:
cout << "You entered invalid type!" << endl;
cout << "\n**PLEASE TRY AGAIN**" << endl;
}
} while (type != 'B' && type != 'F' && type != 'P' && type != 'S' && type != 'b' 
&& type != 'f' && type != 'p' && type != 's');
}
else if (y == 'N' || y == 'n')
{
cout << "\n'You Didn't Choose Any Fast Food Item'" << endl;
}
else
{
cout << "\nYou Enter Wrong Character" << endl;
cout << "\n**PLEASE TRY AGAIN**";
}
}while (y != 'Y' && y != 'y' && y != 'N' && y != 'n');
}
void desi()
{
do
{
cout << "\nIf You Want To Add Desi Food Item Please Press Y/N (Y for Yes / N for No) 
: ";
cin >> y;
if (y == 'Y' || y == 'y')
{
int dealopdesi;
do {
cout << "1)1 kg Beaf Nihari: " << 450 << endl;
cout << "2)Mutton karahi. (Full) RS: " << 920 << " 'OR' " << " Half " << 
500 << endl;
cout << "3)Seekh Kabab. (6 Stick) RS: " << 350 << " 'OR' " << "(12 
Stick) " << 750 << endl;
cout << "4)1 kg biryani.(Chicken) RS: " << 290 << " 'OR' " << " (Beef) " 
<< 420 << endl;
cout << "5)1 kg (fish) Pomfret Fry RS: " << 1250 << endl;
cout << "6)Malai Tikka (Qtr). RS: " << 270 << " 'OR' " << " (half) " << 
500 << " 'OR' " << " (Full) " << 700 << endl;
cout << "Now select options: ";
cin >> dealopdesi;
if (dealopdesi == 1)
{
cout << "Enter Quantity: ";
cin >> quantity;
d1 = d1 + quantity * 450;
cout << "you selcted 1 kg beaf Nihari." << endl;
cout << "Your Total amount is: " << d1 << endl;
}
else if (dealopdesi == 2)
{
int size;
do{
cout << "\nPress 1 For Half 'OR' Press 2 For Full:";
cin >> size;
switch (size)
{
case 1:
cout << "Enter Quantity: ";
cin >> quantity;
d2 = d2 + quantity * 500;
cout << "You selected " << quantity << " Half Mutton 
karahi." << endl;
cout << "Your Total amount is: " << d2 << endl;
case 2:
cout << "Enter Quantity: ";
cin >> quantity;
d2 = d2 + quantity * 920;
cout << "You selected " << quantity << " Full Mutton 
karahi." << endl;
cout << "Your Total amount is: " << d2 << endl;
default:
cout << "Invalid option.." << endl;
cout << "\n**PLEASE TRY AGAIN**" << endl;
}
} while (size > 2);
}
else if (dealopdesi == 3)
{
int size;
do {
cout << "\nPress 1 For (6 Stick) 'OR' Press 2 For (12 
Stick) :";
cin >> size;
switch (size)
{
case 1:
cout << "Enter Quantity: ";
cin >> quantity;
d3 = d3 + quantity * 350;
cout << "You selected " << 6 * quantity << " 
seekh Kabab" << endl;
cout << "Your Total amount is: " << d3 << 
endl;
case 2:
cout << "Enter Quantity: ";
cin >> quantity;
d3 = d3 + quantity * 350;
cout << "You selected " << 12 * quantity << " 
seekh Kabab" << endl;
cout << "Your Total amount is: " << d3 << 
endl;
default:
cout << "Invalid option.." << endl;
cout << "\n**PLEASE TRY AGAIN**" << endl;
}
} while(size > 2);
}
else if (dealopdesi == 4)
{
int x, z, z1;
do {
cout << "\nPress 1 For (Chicken) 'OR' Press 2 For 
(Beef) :";
cin >> x;
switch (x)
{
case 1:
do {
cout << "\nPress 1 For Half 'OR' 
Press 2 For Full:";
cin >> z;
switch (z)
{
case 1:
cout << "Enter Quantity: ";
cin >> quantity;
d4 = d4 + quantity * 170;
cout << "You selected (" << 
quantity << ") 1/2 kg (Chicken) biryani." << endl;
cout << "Your Total amount 
is: " << d4 << endl;
break;
case 2:
cout << "Enter Quantity: ";
cin >> quantity;
d4 = d4 = quantity * 290;
cout << "You selected (" << 
1 * quantity << ") kg (Chicken) biryani." << endl;
cout << "Your Total amount 
is: " << d4 << endl;
break;
default:
cout << "Invalid option.." << 
endl;
cout << "\n**PLEASE TRY 
AGAIN**" << endl;
}
} while (z > 2);
break;
case 2:
do {
cout << "\nPress 1 For Half 'OR' 
Press 2 For Full:";
cin >> z1;
switch (z1)
{
case 1:
cout << "Enter Quantity: ";
cin >> quantity;
d4 = d4 + quantity * 220;
cout << "You selected (" << 
quantity << ") 1/2 kg (Beef) biryani." << endl;
cout << "Your Total amount 
is: " << d4 << endl;
break;
case 2:
cout << "Enter Quantity: ";
cin >> quantity;
d4 = d4 + quantity * 420;
cout << "You selected (" << 
1 * quantity << ") kg (Beef) biryani." << endl;
cout << "Your Total amount 
is: " << d4 << endl;
break;
default:
cout << "Invalid option.." << 
endl;
cout << "\n**PLEASE TRY 
AGAIN**" << endl;
}
} while (z1 > 2);
break;
default:
cout << "Invalid option.." << endl;
cout << "\n**PLEASE TRY AGAIN**" << endl;
}
}while (x > 2);
}
else if (dealopdesi == 5)
{
d5 = d5 + quantity * 1250;
cout << "You selected " << 1 * quantity << " kg (fish) Pomfret 
Fry." << endl;
cout << "Your Total amount is: " << d5 << endl;
}
else if (dealopdesi == 6)
{
 int v;
do {
cout << "\nPress 1 For (Qtr) 'OR' Press 2 For (Half) 
'OR' Press 3 For (Full) :";
cin >> v;
switch (v)
{
case 1:
cout << "Enter Quantity: ";
cin >> quantity;
d6 = d6 + quantity * 270;
cout << "You selected Malai Tikka (Qtr)." << 
endl;
cout << "Your Total amount is: " << d6 << 
endl;
break;
case 2:
cout << "Enter Quantity: ";
cin >> quantity;
d6 = d6 + quantity * 500;
cout << "You selected Malai Tikka (Half)." << 
endl;
cout << "Your Total amount is: " << d6 << 
endl;
break;
case 3:
cout << "Enter Quantity: ";
cin >> quantity;
d6 = d6 + quantity * 700;
cout << "You selected Malai Tikka (Full)." << 
endl;
cout << "Your Total amount is: " << d6 << 
endl;
break;
default:
cout << "Invalid option.." << endl;
cout << "\n**PLEASE TRY AGAIN**" << endl;
break;
}
} while (v > 3);
}
else
{
cout << "Invalid option.." << endl;
cout << "\n**PLEASE TRY AGAIN**" << endl;
}
}while (dealopdesi > 6);
}
else if (y == 'N' || y == 'n')
{
cout << "\n'You Didn't Choose Any Desi Food Item'" << endl;
}
else
{
cout << "\nYou Enter Wrong Character" << endl;
cout << "\n**PLEASE TRY AGAIN**";
}
} while (y != 'Y' && y != 'y' && y != 'N' && y != 'n');
}
void sweet()
{
do {
cout << "\nIf You Want To Add Sweet Item Please Press Y/N (Y for Yes / N for No): ";
cin >> y;
if (y == 'Y' || y == 'y')
{
int dealop;
do {
cout << "1) 1 kg gulab jamun . " << 900 << endl;
cout << "2) 1 kg Gajar ka Halwa. : " << 1800 << endl;
cout << "3) 1 kg each Kheer/ Feerni RS: " << 325 << endl;
cout << "4) 3 family bowl of icecream. " << 460 << endl;
cout << "Now select options: ";
cin >> dealop;
if (dealop == 1)
{
int v;
do {
cout << "Press 1 For (1/2) Kg 'OR' Press 2 For (1) Kg: 
";
cin >> v;
switch (v)
{
case 1:
cout << "Enter Quantity: ";
cin >> quantity;
s1 = s1 + quantity * 480;
cout << "(" << quantity << ") of 1/2 kg gulab 
jamun." << endl;
cout << "Your Total amount is: " << s1 << 
endl;
break;
case 2:
cout << "Enter Quantity: ";
cin >> quantity;
s1 = s1 + quantity * 900;
cout << "(" << quantity << ") of 1 kg gulab 
jamun." << endl;
cout << "Your Total amount is: " << s1 << 
endl;
break;
default:
cout << "Enter Quantity: ";
cin >> quantity;
cout << "\nYou Enter Wrong Character" << 
endl;
cout << "\n**PLEASE TRY AGAIN**";
}
} while (v > 2);
}
else if (dealop == 2)
{
cout << "Enter Quantity: ";
cin >> quantity;
s2 = s2 + quantity * 1800;
cout << "You selected " << 1 * quantity << " kg Gajar ka 
Halwa." << endl;
cout << "Your Total amount is: " << s2 << endl;
}
else if (dealop == 3)
{
cout << "Enter Quantity: ";
cin >> quantity;
s3 = s3 + quantity * 325;
cout << "You selected " << 1 * quantity << " kg each Kheer/ 
Feerni." << endl;
cout << "Your Total amount is: " << s3 << endl;
}
else if (dealop == 4)
{
cout << "Enter Quantity: ";
cin >> quantity;
s4 = s4 + quantity * 460;
cout << "You selected " << 3 * quantity << " Family bowl of 
icecream." << endl;
cout << "Your Total amount is: " << s4 << endl;
}
else
{
cout << "Invalid option.." << endl;
cout << "\n**PLEASE TRY AGAIN**";
}
} while (dealop > 4);
}
else if (y == 'N' || y == 'n')
{
cout << "\n'You Didn't Choose Any Sweet Item'" << endl;
}
else
{
cout << "\nYou Enter Wrong Character" << endl;
cout << "\n**PLEASE TRY AGAIN**";
}
} while (y != 'Y' && y != 'y' && y != 'N' && y != 'n');
}
void beverages()
{
do {
cout << "\nIf You Want To Add Sweet Item Please Press Y/N (Y for Yes / N for No): ";
cin >> y;
if (y == 'Y' || y == 'y')
{
int dealop;
do {
cout << "1) Chapati Rs. " << 15 << " 'OR' Naam Rs. " << 25 << " 'OR' 
Roghni Naam Rs. " << 35 << endl;
cout << "2) 1 Raita Rs. : " << 40 << endl;
cout << "3) 1 Salad RS: " << 40 << endl;
cout << "4) 1 Cold Drink (Can). " << 80 << endl;
cout << "Now select options: ";
cin >> dealop;
if (dealop == 1)
{
int v;
do {
cout << "Press 1 For (Chapati) 'OR' Press 2 For 
(Naan) 'OR' Press 3 For (Roghni Naan) ";
cin >> v;
switch (v)
{
case 1:
cout << "Enter Quantity: ";
cin >> quantity;
b1 = b1 + quantity * 15;
cout << "(" << quantity << ") Chapati." << 
endl;
cout << "Your Total amount is: " << b1 << 
endl;
break;
case 2:
cout << "Enter Quantity: ";
cin >> quantity;
b1 = b1 + quantity * 25;
cout << "(" << quantity << ") Naan." << endl;
cout << "Your Total amount is: " << b1 << 
endl;
break;
case 3:
cout << "Enter Quantity: ";
cin >> quantity;
b1 = b1 + quantity * 35;
cout << "(" << quantity << ") Roghni Naan." 
<< endl;
cout << "Your Total amount is: " << b1 << 
endl;
break;
default:
cout << "\nYou Enter Wrong Character" << 
endl;
cout << "\n**PLEASE TRY AGAIN**";
}
} while (v > 3);
}
else if (dealop == 2)
{
cout << "Enter Quantity: ";
cin >> quantity;
b2 = b2 + quantity * 40;
cout << "You selected " << 1 * quantity << " Raita." << endl;
cout << "Your Total amount is: " << b2 << endl;
}
else if (dealop == 3)
{
cout << "Enter Quantity: ";
cin >> quantity;
b3 = b3 + quantity * 40;
cout << "You selected " << 1 * quantity << " Salad." << endl;
cout << "Your Total amount is: " << b3 << endl;
}
else if (dealop == 4)
{
cout << "Enter Quantity: ";
cin >> quantity;
b4 = b4 + quantity * 80;
cout << "You selected " << 1 * quantity << " Cold Drink 
(Can)." << endl;
cout << "Your Total amount is: " << b4 << endl;
}
else
{
cout << "\nYou Enter Wrong Character" << endl;
cout << "\n**PLEASE TRY AGAIN**";
}
} while (dealop > 4);
}
else if (y == 'N' || y == 'n')
{
cout << "\n'You Didn't Choose Any Sweet Item'" << endl;
}
else
{
cout << "\nYou Enter Wrong Character" << endl;
cout << "\n**PLEASE TRY AGAIN**";
}
} while (y != 'Y' && y != 'y' && y != 'N' && y != 'n');
}
void takecustomerdata()
{
do
{
int open;
do {
cout << "\n***To Open Menu***" << endl;
cout << "Press 1 For 'Deals' Menu" << endl;
cout << "press 2 For 'Fast Food' Menu" << endl;
cout << "Press 3 For 'Desi Food' Menu" << endl;
cout << "press 4 For 'Sweet' Menu" << endl;
cout << "press 5 For 'Beverages' Menu" << endl;
cout << "\n Please Enter Number: ";
cin >> open;
switch (open)
{
case 1:
cout << "\n\t\t\t~~~DEALS~~~\n" << endl;
cout << " #OPTION 1" << endl;
cout << "1) 2 Chicken Burgers with fries and 1.5 litre drink." << endl;
cout << "2) 2 Zinger Burgers with a club sandwich a 2.25 litre drink." 
<< endl;
cout << "3) 3 Beef Burgers with 8 wings and 2 cans of cold drink." << 
endl;
cout << "4) 5 Cheese Burgers with 3 wings and 2 packet of fries." << 
endl;
cout << "\n #OPTION 2! " << endl;
cout << "1) 1 Small Pizza with 1 can of drink." << endl;
cout << "2) 3 Small Pizza. RS: " << o << endl;
cout << "3) 1 Small Pizza and 1 Medium Pizza with 1.5 litre drink." << 
endl;
cout << "4) 2 Medium Pizza and 1 large pizza with 1.5 litre drink." << 
endl;
cout << "5) 3 Large Pizza with Jumbo drink." << endl;
cout << "6) 1 Jumbo Pizza." << endl;
deals();
break;
case 2:
cout << "Burger => Price 200" << endl;
cout << "French Fries => Price 50" << endl;
cout << "Pizza => Price 500" << endl;
cout << "Sandwich => Price 150" << endl;
fastfood();
break;
case 3:
cout << "\nBeaf Nihari: " << endl;
cout << "Mutton karahi." << endl;
cout << "Seekh Kabab." << endl;
cout << "biryani." << endl;
cout << "Fish (Pomfret) Fry." << endl;
cout << "Malai Tikka." << endl;
desi();
break;
case 4:
cout << "Gulab jamun . " << endl;
cout << "Gajar ka Halwa. : " << endl;
cout << "Kheer/ Feerni RS: " << endl;
cout << "3 family bowl of icecream. " << endl;
sweet();



break;
case 5:
cout << "Roti" << endl;
cout << "Raita" << endl;
cout << "Salad" << endl;
cout << "Cold drink" << endl;
beverages();
break;




