#include "Lab04.h"


bool isTrue;

int main()
{
	char c;
	float depositVal;
	float depositAMT = 0;
	float withdrawnAMT;
	float loan;
	int loanMonths;
	int princple;
	float amount;
	float interestRate;
	string value;
	isTrue = true;

	while (isTrue) {
		c = MainMenu();
		if (c == toupper('q')) {
			isTrue = false;
			break;
		}
		else {
			switch (toupper(c)) {

			case 'D':
				value = "How much do you want to deposit == > ";
				depositVal = getValue(value);
				deposit(depositAMT, depositVal);
				Output(depositAMT);
				break;

			case 'W':
				withdrawnAMT = getValueOL(" ", depositAMT);
				withDraw(depositAMT, withdrawnAMT);
				Output(depositAMT);

				break;

			case 'L':
				loan = getCreditRating();
				cout << endl;
				loanMonths = getLoanMonths();
				interestRate = getInterestRate(loan);
				cout << endl << "How much you do you want to borrow? == >";
				cin >> princple;
				amount = calLoanAmount(princple, interestRate, loanMonths);
				Output1(princple, loanMonths, interestRate, amount);
				cout << endl;
				break;

			case 'Q':

				break;

			}
		}
	}
}
