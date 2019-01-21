#include <iostream>
#include <string>
using namespace std;

string validChoice() {
	return "Please enter a valid choice.";
}

double income()
{
	double salary = 0, savings = 0, gifted = 0, totalIncome;
		char choice;
		char loopChoice;
		bool exit = false;
		while (exit == false) {
			cout << "First we start with Income. \n What kind of income do you want to put in? \n a. Salary \n b. Savings \n c. Gifted" << endl;
			cin >> choice;

			if (choice == 'a') {
				cout << "Please enter your salary income." << endl;
				cin >> salary;
			}
			else if (choice == 'b') {
				cout << "Please enter your savings." << endl;
				cin >> savings;
			}
			else if (choice == 'c') {
				cout << "Please enter your gifted money." << endl;
				cin >> gifted;
			}
			else {
				cout << validChoice() << endl;
			}
			cout << "These are your current values:" << endl;
			cout << "salary = $"; cout << salary << endl;
			cout << "savings = $"; cout << savings << endl;
			cout << "gifted = $"; cout << gifted << endl;
			cout << "total = $"; cout << salary + savings + gifted << endl;

			cout << "Would you like to add any more? Y/N?" << endl;
			cin >> loopChoice;
			if (loopChoice == 'N' || loopChoice == 'n') {
				exit = true;
			}
			else if (loopChoice == 'Y' || loopChoice == 'y') {
				exit = false;
			}
			else {
				cout << validChoice() << endl;
			}
		}
		totalIncome = salary + savings + gifted;
		return totalIncome;
}

double outgoing()
{
	double totalOutgoing, rent = 0, transportation = 0, utility = 0, food = 0, fashion = 0, social = 0, travel = 0, other = 0;
	char choice;
	char loopChoice;
	bool exit = false;
	while (exit == false) {
		cout << "Now, what kind of expenses do you want to put in? \n a. Rent \n b. Transportation \n c. Utilities \n d. Food \n e. Fashion \n f. Social \n g. Travel \n h. Other" << endl;
		cin >> choice;

		if (choice == 'a') {
			cout << "Please enter how much you spend on rent." << endl;
			cin >> rent;
		}
		else if (choice == 'b') {
			cout << "Please enter how much you spend on transportation." << endl;
			cin >> transportation;
		}
		else if (choice == 'c') {
			cout << "Please enter how much you spend on utilities." << endl;
			cin >> utility;
		}
		if (choice == 'd') {
			cout << "Please enter how much you spend on food." << endl;
			cin >> food;
		}
		if (choice == 'e') {
			cout << "Please enter how much you spend on fashion." << endl;
			cin >> fashion;
		}
		if (choice == 'f') {
			cout << "Please enter how much you spend on social activities." << endl;
			cin >> social;
		}
		if (choice == 'g') {
			cout << "Please enter how much you spend on travel." << endl;
			cin >> travel;
		}
		if (choice == 'h') {
			cout << "Please enter how much you spend on other things." << endl;
			cin >> other;
		}
		else {
			cout << validChoice() << endl;
		}

		cout << "These are your current values:" << endl;
		cout << "rent = $"; cout << rent << endl;
		cout << "transportation = $"; cout << transportation << endl;
		cout << "utility = $"; cout << utility << endl;
		cout << "food = $"; cout << food << endl;
		cout << "fashion = $"; cout << fashion << endl;
		cout << "social = $"; cout << social << endl;
		cout << "travel = $"; cout << travel << endl;
		cout << "other = $"; cout << other << endl;
		cout << "total: $"; cout << rent + transportation + utility + food + fashion + social + travel + other << endl;
		cout << "Would you like to add any more? Y/N?" << endl;
		cin >> loopChoice;
		if (loopChoice == 'N' || loopChoice == 'n') {
			exit = true;
		}
		else if (loopChoice == 'Y' || loopChoice == 'y') {
			exit = false;
		}
		else {
			cout << validChoice() << endl;
		}
	}

	//calculation
	totalOutgoing = rent + transportation + utility + food + fashion + social + travel + other;

	return totalOutgoing;

}


int main()
{
	char runAgain;
	double theTotalIncome = 0, theTotalOutgoing, budget = 0;
	cout << "Welcome to account balance!" << endl;
	do
	{
		theTotalIncome = income();

		cout << "Your income is: $" << theTotalIncome << endl;

		theTotalOutgoing = outgoing();
		budget = theTotalIncome - theTotalOutgoing;

		cout << "You have spent: $" << theTotalOutgoing << endl;
		cout << "The amount left in your account is: $" << budget << endl;

		cout << "Do you want to run the program again? Y/N" << endl;
		cin >> runAgain;

	} 
	while (runAgain == 'y' || runAgain == 'Y');

		return 0;
}