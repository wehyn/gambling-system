#include <iostream>
#include <cstdlib>
using namespace std;

int main_menu(float balance);
int games();
void coinflip(float& balance);
void roulette(float& balance);
void cash_in(float& balance);
void withdraw(float& balance);

int main(){   

	float balance = 0;
	int choices;

	menu:
	do{
		choices = main_menu(balance);

		switch (choices) {
			// Games
			case 1:
				choices = games();
				switch (choices){
					// Black Jack
					case 1:
						coinflip(balance);
						break;
					// Roulette
					case 2:
						roulette(balance);
						break;
					// Back to Main Menu
					case 3:
						system("cls");
						goto menu;
						break;
					default:
						cout << "Invalid option.";
						break;
				}
				break;
			case 2: // Cash In
				cash_in(balance);
				break;
			case 3: // Withdraw
				withdraw(balance);
				break;
			case 4: // Exit
				break;
			default:
				system("cls"); 
				cout << "\t\t--- Invalid option. ---\n";
				break;

	}	

	}while (choices != 4);

	
}


// Main menu
int main_menu(float balance){

	int choices;
	system("cls");		
	cout << "_____________________________________________________________" << endl;   
	cout << "     _/_/_/    _/_/      _/_/_/  _/_/_/  _/      _/    _/_/  " << endl;
	cout << "  _/        _/    _/  _/          _/    _/_/    _/  _/    _/ " << endl;
	cout << " _/        _/_/_/_/    _/_/      _/    _/  _/  _/  _/    _/  " << endl; 
	cout << "_/        _/    _/        _/    _/    _/    _/_/  _/    _/   " << endl;
	cout << " _/_/_/  _/    _/  _/_/_/    _/_/_/  _/      _/    _/_/      " << endl;
	cout << "_____________________________________________________________" << endl;
	cout << "\t\tTotal Balance: " << balance << endl;                                                             
	cout << endl;
	cout << "\t\t[1] - Games\n";
	cout << endl;
	cout << "\t\t[2] - Deposit\n";
	cout << endl;
	cout << "\t\t[3] - Withdraw\n";
	cout << endl;
	cout << "\t\t[4] - Exit\n";
	cout << "Choose: ";
	cin >> choices;

	return choices;
}

// Games Menu
int games(){

	int choices;

	do{
		system("cls");		
		cout << "_____________________________________________________________" << endl; 											
		cout <<"     _/_/_/    _/_/    _/      _/  _/_/_/_/    _/_/_/   " << endl;
		cout <<"  _/        _/    _/  _/_/  _/_/  _/        _/          " << endl;
		cout <<" _/  _/_/  _/_/_/_/  _/  _/  _/  _/_/_/      _/_/       " << endl;
		cout <<"_/    _/  _/    _/  _/      _/  _/              _/      " << endl;
		cout <<" _/_/_/  _/    _/  _/      _/  _/_/_/_/  _/_/_/         " << endl;
		cout << "_____________________________________________________________" << endl; 
		cout << "[1] - Coinflip\n";
		cout << "[2] - Roulette\n";
		cout << "[3] - Back to Main Menu\n";                                                        
		cout << "Choose: ";
		cin >> choices;    
	}while (choices != 1 && choices != 2 && choices != 3);

	return choices; 	
}


// Deposit balance
void cash_in(float& balance){

	int cash_in;
	int option;

	system("cls");
	cout << "\nEnter the amount that you want to deposit: $";
	cin >> cash_in; 

	balance += cash_in;
	cout << "You have deposited $" << cash_in << endl;

	cout << "Transaction completed.\n\n";
		
	system("pause");

}


// Withdraw balance
void withdraw(float& balance){

	int withdraw;


	system("cls");
	cout << "Enter the amount that you want to withdraw: $";
	cin >> withdraw;

	if (withdraw > balance){
		cout << "Insufficient balance.\n";
	}
	else{
		balance -= withdraw;
		cout << "You have withdrawn $" << withdraw << endl;
		cout << "Transaction completed." << endl;
	}

	system("pause");

}


// Coinflip game
void coinflip(float& balance){

	int coinflip_generator;
	float bet;
	int coin;
	int options;
	int choice;
	int guess;

	do{
		system("cls");
		cout << "_______________________________________________________________________________________________________" << endl; 									
		cout <<" ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄        ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄            ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄ " << endl;  
		cout <<"▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░▌      ▐░▌▐░░░░░░░░░░░▌▐░▌          ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌" << endl;  
		cout <<"▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌ ▀▀▀▀█░█▀▀▀▀ ▐░▌░▌     ▐░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░▌           ▀▀▀▀█░█▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌" << endl;  
		cout <<"▐░▌          ▐░▌       ▐░▌     ▐░▌     ▐░▌▐░▌    ▐░▌▐░▌          ▐░▌               ▐░▌     ▐░▌       ▐░▌" << endl; 
		cout <<"▐░▌          ▐░▌       ▐░▌     ▐░▌     ▐░▌ ▐░▌   ▐░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░▌               ▐░▌     ▐░█▄▄▄▄▄▄▄█░▌" << endl;
		cout <<"▐░▌          ▐░▌       ▐░▌     ▐░▌     ▐░▌  ▐░▌  ▐░▌▐░░░░░░░░░░░▌▐░▌               ▐░▌     ▐░░░░░░░░░░░▌" << endl;
		cout <<"▐░▌          ▐░▌       ▐░▌     ▐░▌     ▐░▌   ▐░▌ ▐░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░▌               ▐░▌     ▐░█▀▀▀▀▀▀▀▀▀ " << endl;
		cout <<"▐░▌          ▐░▌       ▐░▌     ▐░▌     ▐░▌    ▐░▌▐░▌▐░▌          ▐░▌               ▐░▌     ▐░▌          " << endl;
		cout <<"▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌ ▄▄▄▄█░█▄▄▄▄ ▐░▌     ▐░▐░▌▐░▌          ▐░█▄▄▄▄▄▄▄▄▄  ▄▄▄▄█░█▄▄▄▄ ▐░▌          " << endl;
		cout <<"▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌      ▐░░▌▐░▌          ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌          " << endl;
 		cout <<" ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀        ▀▀  ▀            ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀           " << endl;
		cout << "_______________________________________________________________________________________________________" << endl; 									
		cout << "Do you want to play?\n";
		cout << "[1] - Yes\n";
		cout << "[2] - No\n";
		cout << "Choice: ";
		cin >> options;

		if (options == 1){
			system("cls");
			cout << "_______________________________________________________________________________________________________" << endl; 									
			cout <<" ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄▄        ▄  ▄▄▄▄▄▄▄▄▄▄▄  ▄            ▄▄▄▄▄▄▄▄▄▄▄  ▄▄▄▄▄▄▄▄▄▄▄ " << endl;  
			cout <<"▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░▌      ▐░▌▐░░░░░░░░░░░▌▐░▌          ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌" << endl;  
			cout <<"▐░█▀▀▀▀▀▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌ ▀▀▀▀█░█▀▀▀▀ ▐░▌░▌     ▐░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░▌           ▀▀▀▀█░█▀▀▀▀ ▐░█▀▀▀▀▀▀▀█░▌" << endl;  
			cout <<"▐░▌          ▐░▌       ▐░▌     ▐░▌     ▐░▌▐░▌    ▐░▌▐░▌          ▐░▌               ▐░▌     ▐░▌       ▐░▌" << endl; 
			cout <<"▐░▌          ▐░▌       ▐░▌     ▐░▌     ▐░▌ ▐░▌   ▐░▌▐░█▄▄▄▄▄▄▄▄▄ ▐░▌               ▐░▌     ▐░█▄▄▄▄▄▄▄█░▌" << endl;
			cout <<"▐░▌          ▐░▌       ▐░▌     ▐░▌     ▐░▌  ▐░▌  ▐░▌▐░░░░░░░░░░░▌▐░▌               ▐░▌     ▐░░░░░░░░░░░▌" << endl;
			cout <<"▐░▌          ▐░▌       ▐░▌     ▐░▌     ▐░▌   ▐░▌ ▐░▌▐░█▀▀▀▀▀▀▀▀▀ ▐░▌               ▐░▌     ▐░█▀▀▀▀▀▀▀▀▀ " << endl;
			cout <<"▐░▌          ▐░▌       ▐░▌     ▐░▌     ▐░▌    ▐░▌▐░▌▐░▌          ▐░▌               ▐░▌     ▐░▌          " << endl;
			cout <<"▐░█▄▄▄▄▄▄▄▄▄ ▐░█▄▄▄▄▄▄▄█░▌ ▄▄▄▄█░█▄▄▄▄ ▐░▌     ▐░▐░▌▐░▌          ▐░█▄▄▄▄▄▄▄▄▄  ▄▄▄▄█░█▄▄▄▄ ▐░▌          " << endl;
			cout <<"▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌      ▐░░▌▐░▌          ▐░░░░░░░░░░░▌▐░░░░░░░░░░░▌▐░▌          " << endl;
			cout <<" ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀        ▀▀  ▀            ▀▀▀▀▀▀▀▀▀▀▀  ▀▀▀▀▀▀▀▀▀▀▀  ▀           " << endl;
			cout << "_______________________________________________________________________________________________________" << endl;
			cout << "Enter amount to bet: $";
			cin >> bet;


			do{
				// Checks if the balance is enough
				if (bet > balance){
					cout << "You don't have enough balance.\n";
					system("pause");
					break;
				}
				balance = balance - bet;

				// Heads or Tails option
				do{
					cout << "Pick heads or tails: \n";
					cout << "[1] - Heads\n";
					cout << "[2] - Tails\n";
					cout << "Choice : ";
					cin >> guess;
					if (guess < 0 || guess >= 3){
						cout << "Heads or Tails only\n";
					}

				} while(guess < 0 || guess >= 3);

				// Coinflip Generator
				coinflip_generator = rand() % 2 + 1;

				// Determines win
				if (coinflip_generator == guess){
					cout << "\nYou have won $" << bet*2;
					balance = balance + bet*2;
				}
				else{
					cout << "\nOOPS! You have lost $" << bet << " better luck next time!" << endl;
				}

				cout << "\nThe winning coin flip is: " << coinflip_generator << endl;

				if (balance <= 0){
					cout << "Not enough money to play.";
					break;
				}

				cout << "\nDo you want to play again?\n";
				cout << "[1] - Yes\n";
				cout << "[2] - No\n";
				cout << "Choice: ";
				cin >> choice;
			} while(choice != 2);


		}

	} while (options != 2);
}

// Roulette Game
void roulette(float& balance){

	int choices;
	int choice;
	float bet;
	int guess;
	int dice;

	do{
		system("cls");
		cout << "________________________________________________________________________" << endl; 									
		cout <<"    _/_/_/                        _/              _/      _/             " << endl;  
		cout <<"   _/    _/    _/_/    _/    _/  _/    _/_/    _/_/_/_/_/_/_/_/    _/_/  " << endl;
		cout <<"  _/_/_/    _/    _/  _/    _/  _/  _/_/_/_/    _/      _/      _/_/_/_/ " << endl; 
		cout <<" _/    _/  _/    _/  _/    _/  _/  _/          _/      _/      _/        " << endl; 
		cout <<"_/    _/    _/_/      _/_/_/  _/    _/_/_/      _/_/    _/_/    _/_/_/   " << endl;
		cout << "________________________________________________________________________" << endl; 
		cout <<"\t 1. Choose a number between 1 to 10\n";
		cout <<"\t 2. Winner gets 2 times of the money bet\n";
		cout <<"\t 3. Wrong bet and you lose the amount you bet\n\n";
		cout <<"\n\n\t Your current balance is: "<<balance<<endl << endl;

		cout << "Do you want to play?\n";
		cout << "[1] - Yes\n";
		cout << "[2] - No\n";
		cout << "Choice: ";
		cin >> choices;

		if (choices == 1){
			do{
				system("cls");
				cout << "________________________________________________________________________" << endl; 									
				cout <<"    _/_/_/                        _/              _/      _/             " << endl;  
				cout <<"   _/    _/    _/_/    _/    _/  _/    _/_/    _/_/_/_/_/_/_/_/    _/_/  " << endl;
				cout <<"  _/_/_/    _/    _/  _/    _/  _/  _/_/_/_/    _/      _/      _/_/_/_/ " << endl; 
				cout <<" _/    _/  _/    _/  _/    _/  _/  _/          _/      _/      _/        " << endl; 
				cout <<"_/    _/    _/_/      _/_/_/  _/    _/_/_/      _/_/    _/_/    _/_/_/   " << endl;
				cout << "________________________________________________________________________" << endl;
				cout << "Enter amount to bet: ";
				cin >> bet;

				// Checks if balance is enough
				if (bet > balance){
					cout << "You don't have enough balance.\n";
					system("pause");
					break;
				}
				balance = balance - bet;

				// Player's guess
				do{
					cout << "Guess any number between 1 and 10: ";
					cin >> guess;
					if (guess <= 0 || guess > 10){
						cout << "\n Number should be between 1 to 10\n";
						cout << "Re-Enter number";
					}

				} while(guess <= 0 || guess > 10);

				// Dice generator
				dice = rand() % 10 + 1;

				if (dice == guess){
					cout << "You have won $" << bet*2;
					balance = balance + bet*2;
				}
				else{
					cout << "OOPS! You have lost $" << bet << " better luck next time!" << endl;
				}

				cout << "\nThe winning number is: " << dice << endl;

				if (balance <= 0){
					cout << "Not enough money to play.";
					break;
				}

				cout << "\nDo you want to play again?\n";
				cout << "[1] - Yes\n";
				cout << "[2] - No\n";
				cout << "Choice: ";
				cin >> choice;
			}while (choice == 1);
		}


	}while (choices != 2);
}