#include "stdafx.h"
#include "Calc.h"

// test
Calc::Calc()
{
	//numbs.emplace(0.0);
	//act.emplace('0');
}

Calc::Calc(double numb, char ac)
{
	numbs.emplace(numb);
	act.emplace(ac);
}

Calc::Calc(const Calc & C)
{
	numbs.push(C.numbs.top());
	act.emplace(C.act.top());
}


Calc::~Calc()
{
}

int Calc::Priority(char a)
{
	switch (a)
	{
	case '+':
	case '-':
		return 2;
	case '*':
	case '/':
		return 3;

	case '(':
		return 1;
	case ')':
		return 0;
	case '=':
		return 6;
	default:
		return -1;
	}




	return -1;
}



void Calc::Oper(char c)
{
	double r = numbs.top();
	numbs.pop();
	double l = numbs.top();
	numbs.pop();
	switch (c)
	{
	case'+':
		numbs.push(l + r);
		act.pop();
		break;
	case'-':
		numbs.push(l - r);
		act.pop();
		break;
	case'*':
		numbs.push(l * r);
		act.pop();
		break;
	case'/':
		numbs.push(double(l / r));
		act.pop();
		break;
	}
}








string Calc::Ulator(string tmp)
{
	string sres;
	char res[256];
	string stmp;
	double n;
	int i = 0, j = 0;
	

	while (i < tmp.length())
	{

		while (isdigit(tmp[i]) || tmp[i] == '.')
		{
			stmp += tmp[i];
			i++;
		}
		if (tmp[i] != '(')
		{
			n = atof(stmp.c_str());
			numbs.emplace(n);
			stmp = "";
		}

		switch (tmp[i])
		{

		case '+':
			if (!act.empty())
			{
				while (Priority(tmp[i]) < Priority(act.top()))
				{
					Oper(act.top());
					if (act.empty())
						break;
				}
			}
			break;
		case '-':
			if (!act.empty())
			{
				while (Priority(tmp[i]) < Priority(act.top()))
				{
					Oper(act.top());
					if (act.empty())
						break;
				}
			}
			break;
		case '*':
			if (!act.empty())
			{
				while (Priority(tmp[i]) < Priority(act.top()))
				{
					Oper(act.top());
					if (act.empty())
						break;
				}
			}
			break;
		case '/':
			if (!act.empty())
			{
				while (Priority(tmp[i]) < Priority(act.top()))
				{
					Oper(act.top());
					if (act.empty())
						break;
				}
			}
			break;
		case ')':
			if (!act.empty())
			{
				while (act.top() != '(' && tmp[i] == ')')
				{
					Oper(act.top());
					if (act.empty())
						break;

					if (tmp[i] == ')' && act.top() == '(')
					{
						act.pop();
						i++;
						if (act.empty())
							break;
					}
				}

				if (tmp[i] == '=')
				{
					while (!act.empty())
					{
						Oper(act.top());

					}

					//cout << numbs.top() << '\n';
					sprintf(res, "%.3f", numbs.top());
					while (res[j] != '\0')
					{
						sres += res[j];
						j++;
					}
					return sres;
					break;
				}
			}

			break;



		} // switch (tmp[i])

		if (!act.empty())
		{
			while (Priority(tmp[i]) == Priority(act.top()) && tmp[i] != '(')
			{
				Oper(act.top());
				if (act.empty())
					break;
			}
		}

		if (tmp[i] != '=')
			act.emplace(tmp[i]);


		if (tmp[i] == '=')
		{
			while (!act.empty())
			{
				Oper(act.top());
			}
			//cout << numbs.top() << '\n';

			
			sprintf(res, "%.3f", numbs.top());
			while (res[j] != '\0')
			{
				sres += res[j];
				j++;
			}
			return sres;
			break;
		}
		
		i++;

	} // while (i < tmp.length())








	

	sprintf(res, "%.3f", numbs.top());
	while (res[i] != '\0')
	{
		sres += res[i];
		i++;
	}
	return sres;
}