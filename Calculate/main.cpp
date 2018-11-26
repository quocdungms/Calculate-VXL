#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	const int Tmr2Prescale = 4; 
	const double TOSC = 0.1; //us
	cout << "========= PWM Config =========\n";
	double period, duty;
	cout << "Nhap chu ky ( don vi us ) : ";
	cin >> period;
	cout << "Nhap duty cycles ( don vi us ) : ";
	cin >> duty;
	double PR2, X;
	PR2 = period / (4 * TOSC * Tmr2Prescale) - 1;
	/*cout << setprecision(4);*/
	cout << "PR2 = " << PR2 << endl;
	X =  duty / (TOSC * Tmr2Prescale);
	cout << "X = " << X << endl;
	double CCPR1L, CCP1X, CCP1Y;
	CCPR1L = X / 4;
	CCP1X = (int)X % 4;
	CCP1Y = (int)X % 4;
	cout << "CCPR1L = " << CCPR1L << endl;
	cout << "CCP1X : CCP1Y = " << CCP1X << " : " << CCP1Y << endl;
	cout << " = " << CCP1X / CCP1Y << " : " << CCP1X / CCP1Y << endl;
	cout << "========= FINISH =============\n";
	system("pause");
	return 0;
}