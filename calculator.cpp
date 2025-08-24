#include<iostream>
#include<cmath>
#include<windows.h>

using namespace std;

void show_calculator() {
	cout << "----------------------------------------------" << endl;
	cout << "------                                   -----" << endl;
	cout << "-               SCIENTIFIC                   -" << endl;
	cout << "_               CALCULATOR                   -" << endl;
	cout << "------                                   -----" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "_      +        |        -       |     *     _" << endl;
	cout << "_     Add       |      Minus     |  Multiply _" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "_      /        |       m        |     L     _" << endl;
	cout << "_    Divide     |      Mod       |    Log    _" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "_       S       |      C         |     P     _" << endl;
	cout << "_    Square     |     Cube       |    Power  _" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "_     s         |      c         |     t     _" << endl;
	cout << "_    Sin        |     Cos        |    Tan    _" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "_     r         |      k         |     .     _" << endl;
	cout << "_    Sq root    |    clear       |   close   _" << endl;
	cout << "----------------------------------------------" << endl;
}

void display_output(double answer) {
	cout << "----------------------------------------------" << endl;
	cout << "------                        ----------" << endl;
	cout << "-       CURRENT               |      " << endl;
	cout << "_       OUTPUT IS :           |   "<<answer<< endl;
	cout << "------                        ----------" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "_      +        |        -       |     *     _" << endl;
	cout << "_     Add       |      Minus     |  Multiply _" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "_      /        |       m        |     L     _" << endl;
	cout << "_    Divide     |      Mod       |    Log    _" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "_       S       |      C         |     P     _" << endl;
	cout << "_    Square     |     Cube       |    Power  _" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "_     s         |      c         |     t     _" << endl;
	cout << "_    Sin        |     Cos        |    Tan    _" << endl;
	cout << "----------------------------------------------" << endl;
	cout << "_     r         |      k         |     .     _" << endl;
	cout << "_    Sq root    |    clear       |   close   _" << endl;
	cout << "----------------------------------------------" << endl;


}
int main() {
	double num1 = 0.0;
	double num2 = 0.0;

	double answer = 0.0;
	char inp = '\n';
	bool converter = 0;


	//show_calculator();
	while (inp != '.') {
		if (converter == 1) {
			// In this case we will take only one input
			display_output(answer);
			cout << " Enter : " << endl;
			cin >> inp;

			if (inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' || inp == 'p') {
				num1 = answer;

				cout << "Enter num2 :" << endl;
				cin >> num2;
			}
			else if (inp == 'k' || inp == '.') {
				// just don't take any input 

			}
			else {
				num1 = answer;
			}
		}
		else {
			// In this case we will take two input 
			show_calculator();
			cout << " Enter : " << endl;
			cin >> inp;

			if (inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' || inp == 'p') {
				cout << "Enter num1 :" << endl;
				cin >> num1;
				cout << "Enter num2 :" << endl;
				cin >> num2;
			}
			else if (inp == 'k' || inp == '.') {
				// just don't take any input 

			}
			else {
				cout << "Enter num 1:" << endl;
				cin >> num1;
			}
			converter = 1;

		}
		switch (inp) {
		case '+' :
			answer = num1 + num2;
			break;
		case '-' :
			answer = num1 - num2;
			break;
		case '*' :
			answer = num1 * num2;
			break;
		case '/' :
			answer = num1 / num2;
			break;
		case 'm' :
			answer = int(num1) % int(num2);
			break;
		case 'L' :
			answer = log(num1);
			break;
		case 'S' :
			answer = num1 * num1;
			break;
		case 'C' :
			answer = num1 * num1 * num1;
			break;
		case 'P' :
			answer = pow(num1, num2);
			break;
		case 's':
			answer = sin(num1);
			break;
		case 'c':
			answer = cos(num1);
			break;
		case 't':
			answer = tan(num1);
			break;
		case 'r':
			answer = sqrt(num1);
			break;
		case 'k' :
			converter = 0;
		case '.':
			break;
		default:
			cout << "~~~~~~~~You entered invalid value~~~~~~~~~~~ " << endl;
		}
		system("cls");
	

	}
}