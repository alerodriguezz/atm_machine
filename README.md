# atm_machine
This project simulates an ATM machine for The Bank of
CSUMB. The ATM simulator asks a user to create an account. This requires a user’s account number, a
PIN number, and an initial balance for their account (this must be a positive value). Note that the PIN number must be a four-digit number. The PIN number should be between 1000 and 9999. Give the user
two opportunities to create a pin that is in the correct range.

If the account is successfully created, the user is able to continue using the ATM machine by
entering their PIN number. If the user entered the correct PIN, your program should display a menu for
the ATM machine. Otherwise, the machine should display a warning message and give then one more
chance to enter the correct PIN. If the user enters an incorrect PIN again, your program should display an error message and finish the program. If the user entered the correct PIN, your program should provide four options as below...
1. deposit
2. withdrawal
3. inquiry
4. exit

At this point, your program should continue to execute until the user selects the exit option. If the user selected an invalid option number, your program should display a warning message.
One requirement is that you use a function for the options menu code implementation. Therefore, once a
user has successfully created an account, and logged in, then the code that allow them to see the menu and conduct menu operations must happen within a function. It’s up to you to decide what parameters your function needs (although it will likely need one more their account number, pin, and balance). 
