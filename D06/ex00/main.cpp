/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:28:29 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/16 20:00:33 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>
#include <iomanip>
#include <limits>

	template<typename T, typename L>
bool limitHandler(T nb)
{
	if(typeid(float) == typeid(nb))
		return !(nb > static_cast<double>(std::numeric_limits<L>::max()) || nb < static_cast<double>(std::numeric_limits<L>::min() ));
	if(typeid(char) == typeid(nb))
		return !(nb > std::numeric_limits<L>::max() || nb < std::numeric_limits<L>::min());
	return !(nb > static_cast<T>(std::numeric_limits<L>::max()) || nb < static_cast<T>(std::numeric_limits<L>::min() ));
}

bool	conversionImpossible(void)
{
	std::cout << "impossible" << std::endl;
	return 0;
}

	template<typename T>
bool	charCheck(T nb)
{
	std::cout << "char: ";
	if (!isprint(nb))
	{
		std::cout << "Non Displayable/" ;
		return 0;
	}
	return (limitHandler<T, char>(nb)); 
}

	template<typename T>
bool	intCheck(T nb)
{
	std::cout << "int: ";
	return (limitHandler<T, int>(nb));
}

	template<typename T>
bool	floatCheck(T nb)
{
	std::cout << "float: ";
	return !(nb > std::numeric_limits<float>::max() );
}

	template<typename T>
bool	doubleCheck(T nb)
{
	std::cout << "double: ";
	return !(nb > std::numeric_limits<double>::max());
}

	template<typename conv, typename T>
int	printInto(T type, bool (*f)(T type))
{

	if (!(*f)(type))
		return conversionImpossible();
	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	std::cout << std::setprecision(5) << static_cast<conv>(type);
	if(typeid(float) == typeid(conv))
		std::cout << 'f';
	std::cout << std::endl;
	return 1;
}

	template<typename T>
T StringToNumber(std::string string)
{
	bool neg =false;
	T valor;

	if (string[0] == '+' || string[0] == '-')
	{
		if (string[0] == '-')
			neg = true;
		string.erase(0,1);
	}
	std::stringstream stream(string);
	stream >> valor;
	if (stream.fail()) {
		throw std::invalid_argument( "received negative value" );
	}
	return neg ? -valor: valor;
}

	template<typename T>
int printAll(T nb)
{
	printInto<char, T>(nb, charCheck);
	printInto<int, T>(nb, intCheck);
	printInto<float, T>(nb, floatCheck);
	printInto<double, T>(nb, doubleCheck);
	return 0;
}

int	fkException(std::string exc)
{
	std::string  tab[3] = {"-inf", "+inf","nan"};

	for (int i = 0; i <3; i++)
		if (exc == tab[i])
		{
			std::cout << "char: impossible\nint: impossible\nfloat: " + exc + "f\ndouble: " + exc << std::endl;
			return 1;
		}
	return 0;
}

static bool isFloatNumber(const std::string& string){
	std::string::const_iterator it = string.begin();
	bool decimalPoint = false;
	size_t minSize = 0;

	if (string[0] == '.' || string[0] == 'f' || (string.length() >= 2 && (string[string.length() -1] == '.' 
					|| (string[string.length()-1] == 'f' && string[string.length()-2] == '.'))))
		return 0;
	if(string.size()>0 && (string[0] == '-' || string[0] == '+')){
		it++;
	}
	while(it != string.end()){
		if(*it == '.'){
			if(!decimalPoint) decimalPoint = true;
			else break;
		}else if(!std::isdigit(*it) && ((*it!='f') || it+1 != string.end()/* || !decimalPoint*/)){
			break;
		}
		++it;
	}
	return string.size()>minSize && it == string.end();
}

int main(int ac, char **av)
{
	std::string str;

	if (ac != 2)
	{
		std::cout << "Please give me a string of number to convert" <<std::endl;
		return 0;
	}
	str = av[1];
	if (fkException(str))
		return 0;
	try{
		if (isFloatNumber(str))
		{
			if (str.find('.') != std::string::npos)
			{
				if(str.find('f') != std::string::npos) 
				{
					str.erase(str.length()-1, 1);
					float d = StringToNumber<float>(str) ;
					printAll<float>(d);
					return 0;
				}
				double d = StringToNumber<double>(str) ;
				printAll<double>(d);
			}
			else
			{
				int d = StringToNumber<int>(str) ;
				printAll<int>(d);
			}
		}
		else if(str.length() == 1)
			printAll<char>(str[0]);
		else
			std::cout << "Please use ur brain... or at least google, if you don't know what are numbers" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible" << std::endl;
	}
}
