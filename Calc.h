#pragma once


class Calc
{
protected:
	stack <double> numbs;
	stack <char> act;
	
public:
	
	Calc();
	Calc(double, char);
	Calc(const Calc &);
	virtual ~Calc();

	int Priority(char);
	void Oper(char);
	string Ulator(string);

};