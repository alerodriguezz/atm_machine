/*
	Title: project1
	Abstract: This project simulates an ATM machine for The Bank of
CSUMB. The ATM simulator asks a user to create an account. This requires a user’s account number, a
PIN number, and an initial balance for their account (this must be a positive value). Note that the PIN
number must be a four-digit number. The PIN number should be between 1000 and 9999. Give the user
two opportunities to create a pin that is in the correct range.
			  If the account is successfully created, the user is able to continue using the ATM machine by
entering their PIN number. If the user entered the correct PIN, your program should display a menu for
the ATM machine. Otherwise, the machine should display a warning message and give then one more
chance to enter the correct PIN. If the user enters an incorrect PIN again, your program should display an
error message and finish the program. If the user entered the correct PIN, your program should provide
four options as below.
		      1. deposit
			  2. withdrawal
			  3. inquiry
			  4. exit
			 At this point, your program should continue to execute until the user selects the exit option. If the user
selected an invalid option number, your program should display a warning message.
One requirement is that you use a function for the options menu code implementation. Therefore, once a
user has successfully created an account, and logged in, then the code that allow them to see the menu and
conduct menu operations must happen within a function. It’s up to you to decide what parameters your
function needs (although it will likely need one more their account number, pin, and balance). 
	
	Author: Alex Rodriguez
	Date: 3/6/15

*/

#include <iostream>
using namespace std;

// Prototypes

void options_menu(int accnt_num, int init_bal, int PIN);


int main()
{
	// Computer welcomes user asks user to enter account number
	int accnt_num;
	cout << "**** Welcome to The Bank of CSUMB. *****\n"
		<< "Acount Creation: \n"
		<< "Enter your account number: ";
	cin >> accnt_num;
	// Computer asks user for PIN number. If user fails once, user is given a second chance.
	int PIN, PIN2;
	cout << "Enter your PIN: ";
	cin >> PIN;
	if (PIN <= 1000 || PIN >= 9999)
	{	//User is given second chance 
		cout << "Invalid PIN. Please try again with a four digit number.\n"
			<< "Enter your PIN: ";
		cin >> PIN;
	}
	if (PIN <= 1000 && PIN >= 9999)
	{
		cout << "Ivalid PIN. \n Thank you for using CSUMB Bank. ";
		system("pause");
		return 0;
	}
		
	// Computer presents user with available balance 
		int init_bal;
		cout << "Enter the initial balance: ";
		cin >> init_bal; 
		cout << endl;
		// Computer congratulates user
		cout << "Congratulations!\n"
			<< "Your account (" << accnt_num << ") was succesfully created.\n";
		
     // User is asked for PIN again
		cout << "Enter your PIN to contunue: ";
		cin >> PIN2;
		if (PIN == PIN2)
		{
			options_menu(accnt_num, init_bal, PIN);
		}
		else
		{
			cout << "Invalid PIN. Please try again.\n"
				 << "Enter your PIN: ";
			cin >> PIN2;
			if (PIN == PIN2)
			{
				options_menu(accnt_num, init_bal, PIN);
			}
			else
			{
				cout << "Error. Thank you for choosing The Bank of CSUMB.\n"
					"Have a nice day.\n";


				return 0;
			}
		}
			
		system("pause");
		return 0;
}

void options_menu(int accnt_num, int init_bal, int PIN)
{
	int dep_amt, withd_amt, user_choice;

	do
	{
		cout << "Select your transaction: \n";
		cout << "1. deposit\n"
			<< "2. withdrawal\n"
			<< "3. inquiry\n"
			<< "4. exit\n";

		cin >> user_choice;

		
		if (user_choice == 1)		//deposit code
		{
			cout << "How much would you like to deposit? ";
			cin >> dep_amt;
			cout << endl;
			init_bal = init_bal + dep_amt;
			cout << "Your new balance is $\n" << init_bal;
		}
		
		else if (user_choice == 2)		// withdraw code
		{
			cout << "How much do you want to withdraw?";
			cin >> withd_amt;
			init_bal = init_bal - withd_amt; cout << endl;
			if (withd_amt <= init_bal)
			{
				cout << "Your new balance is $\n" << init_bal;
			}
			else
			{
				cout << "This is over your current balance. Please try again.\n";
			}
		}
		else if (user_choice == 3)					//inquiry
		{
			cout << "Your account number: " << accnt_num << endl;
			cout << "Your PIN: " << PIN << endl;
			cout << "Current balance: " << init_bal;
		}
		else if (user_choice == 4)		//exit 
		{
			cout << "Thank you for using CSUMB ATM.\n";
		}
		else
		{
			cout << "Warning: Invalid input" << endl;
		}
	} while (user_choice != 4);

	return;
}
	


	