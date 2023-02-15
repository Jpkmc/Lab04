#include "checkingmodule.h"


char user;

void deposit(float& balance, float amount) {
	balance = balance + amount;

}
char MainMenu() {
	char user;
	char upperUser;
	cout << setw(35) << "Main Menu" << endl;
	cout << setw(45) << right << "( Enter one of the following )" << endl;
	cout << setw(50) << right << "(D)eposit, (W)ithdrawn, (L)oan, (Q)uit" << endl;
	cin >> user;
	upperUser = toupper(user);
	while ((toupper(user) != 'D') && (toupper(user) != 'W') && (toupper(user) != 'L') && (toupper(user) != 'Q')) {
		cout << "Invaild Choice. Please try again." << endl;
		cout << setw(35) << endl << "Main Menu " << endl;
		cout << setw(45) << right << "( Enter one of the following )" << endl;
		cout << setw(50) << right << "(D)eposit, (W)ithdrawn, (L)oan, (Q)uit" << endl;
		cin >> user;
		upperUser = toupper(user);
	}
	return upperUser;
}
	
float getValue(string input){
	float val = 0;
	while (val <= 0) {
		cout << input;
		cin >> val;
		cout << endl;
		if (val < 0) {
			cout << "The deposit must be greater than or equal to 0" << endl;
			continue;
		}
		break;
	}
	return val;

}

float getValueOL(string input, float upperLimit){
	float val;
	cout << "How much do you want to withdraw? == > " << endl;
	cin >> val;

	while (val <= 0 || val > upperLimit) {
		cout << "Enter a value within the range 0 to " << upperLimit << endl;
		cout << endl << "How much do you want to withdraw? == > " << endl;
		cin >> val;
	}
	
	return val;
	
}

float getInterestRate(int score){
	float interest;
	if (score < 500) {
		interest = 0.05;
	}
	else if (score >= 500 && score <= 700) {
		interest = 0.03;
	}
	else if (score > 700) {
		interest = 0.01;
	}
	return interest;
}

void withDraw(float& balance, float amount){
	balance = balance - amount;
}

int getLoanMonths(){
	int loan;
	cout << "How many months, do you want on the loan (12,24,36,60) == > ";
	cin >> loan;
	while ((loan == 0) || (loan % 12 != 0)) {
		cout << "You must enter 12, 24, 36, 60 only"  << endl;
		cout << endl << "How many months, do you want on the loan (12,24,36,60) == > ";
		cin >> loan;
	}
	return loan;
	
}

float getCreditRating(){
	int credit;
	cout << "What is your credit rating [300, 850] == > ";
	cin >> credit;

	while ((credit <= 300) || (credit >= 850)) {
		cout << "Choose a number between 300 and 850." << endl;
		cout << endl << "What is your credit rating [300, 850] == > ";
		cin >> credit;
	}
	
	return credit;
	
}

float calLoanAmount(float a, float ir, int months){
	float amount;

	amount = a * pow((1 + (ir / 12)), (months / 12.0));

	return amount;

}

void Output(int deposit) {
	cout << endl << "Summary of Account";
	cout << endl << "---------------------";
	cout << endl << "Total Amount = " << deposit << endl;
}
void Output1(float pamt, int months, float intrate, float lamount) {
	cout << endl << "Loan Summary";
	cout << endl << "---------------------";
	cout << endl << "Principal Amount = " << pamt;
	cout << endl << "Months = " << months;
	cout << endl << "Interest Rate = " << intrate;
	cout << endl << "Your Total Loan Amount is: " << lamount;
}
