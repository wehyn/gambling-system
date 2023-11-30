#include <iostream>
#include <cstdlib>
using namespace std;

int main_menu();
int games();
int coinflip();
int roulette();
void cash_in(int& balance);
void withdraw(int& balance);

int main(){   

	int balance = 0;
	int choices;

	menu:
	do{
		cout << "_____________________________________________________________" << endl;   
		cout << "     _/_/_/    _/_/      _/_/_/  _/_/_/  _/      _/    _/_/  " << endl;
		cout << "  _/        _/    _/  _/          _/    _/_/    _/  _/    _/ " << endl;
		cout << " _/        _/_/_/_/    _/_/      _/    _/  _/  _/  _/    _/  " << endl; 
		cout << "_/        _/    _/        _/    _/    _/    _/_/  _/    _/   " << endl;
		cout << " _/_/_/  _/    _/  _/_/_/    _/_/_/  _/      _/    _/_/      " << endl;
		cout << "_____________________________________________________________" << endl;
		cout << "Total Balance: " << balance;                                                                
		cout << endl;
		cout << "\t\t[1] - Games\n";
		cout << endl;
		cout << "\t\t[2] - Cash in\n";
		cout << endl;
		cout << "\t\t[3] - Withdraw\n";
		cout << endl;
		cout << "\t\t[4] - Exit\n";
		cout << "Choose: ";
		cin >> choices;

		switch (choices) {
			// Games
			case 1:
				choices = games();
				switch (choices){
					// Black Jack
					case 1:
						coinflip();
						break;
					// Roulette
					case 2:
						roulette();
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

void cash_in(int& balance){

	int cash_in;

	system("cls");
	cout << "Enter the amount you want to deposit: ";
	cin >> cash_in; 

	balance += cash_in;
	cout << "You deposited ₱" << cash_in;
	cout << "Total balance: " << balance;

}

void withdraw(int& balance){

	int withdraw;

	system("cls");
	cout << "Enter the amount you want to withdraw";
	cin >> withdraw;

	if (withdraw > balance){
		cout << "Insufficient balance.";
	}
	else{
		balance -= withdraw;
		cout << "You have withdrawn " << withdraw;
		cout << "Total balance: " << balance;
	}


}




int coinflip(){

	int coin;
	int options;

		system("cls");
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
		
		coin = (rand() % 2);
		cout << "The Coin is about to flip!\n";
		cout << "Lock in your Choice!";
		cout << "[1] - Heads!\n";
		cout << "[2] - Tails!\n";
		cout << "[3] - Exit\n";
		cout << "Choice: ";
		cin >> options;  

		switch (options) {
			case 1:
				cout << "You chose heads!" << endl;
				if (coin == 1){
					cout << "You Won!!" << endl;
				
				}
				else {
					cout << "You Lost!!" << endl;
				}
				break;
			case 2:
				cout << "You chose tails!" << endl;
				if (coin == 2) {
					cout << "You won!!" << endl;
				
				}
				else {
					cout << "You Lost!!" << endl;
				}
				break;
			default: 
				break;
		}

	

			


	return options;
}

int roulette(){

	int choices;

	do{
		system("cls");     															
		cout <<"    _/_/_/                        _/              _/      _/             " << endl;  
		cout <<"   _/    _/    _/_/    _/    _/  _/    _/_/    _/_/_/_/_/_/_/_/    _/_/  " << endl;
		cout <<"  _/_/_/    _/    _/  _/    _/  _/  _/_/_/_/    _/      _/      _/_/_/_/ " << endl; 
		cout <<" _/    _/  _/    _/  _/    _/  _/  _/          _/      _/      _/        " << endl; 
		cout <<"_/    _/    _/_/      _/_/_/  _/    _/_/_/      _/_/    _/_/    _/_/_/   " << endl;
		cout << "[3] - Exit\n";
		cout << "Choice: ";
		cin >> choices; 
	}while (choices != 3);
	system("cls");

	return choices;
}