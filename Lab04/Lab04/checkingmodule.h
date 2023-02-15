#pragma once

#include <iostream>
#include<iomanip>
#include<vector>
#include<cmath>
#include<string>

using namespace std;

void deposit(float& balance, float amount);
char MainMenu();
float getValue(string input);
float getValueOL(string input, float upperLimit);
float getInterestRate(int score);
void withDraw(float& amountS, float amountR);
int getLoanMonths();
float getCreditRating();
float calLoanAmount(float a, float ir, int months);
void Output(int deposit);
void Output1(float pamt, int months, float intrate, float lamount);
