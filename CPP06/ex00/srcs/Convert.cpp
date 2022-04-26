/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:40:47 by user42            #+#    #+#             */
/*   Updated: 2022/03/31 13:58:53 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

//Setters

void    Convert::setValues(std::string types, std::string args)
{
	if (!(types.compare("invalid"))){
		std::cout << "invalid argument" << std::endl;
		return;
	}
    if (!(types.compare("char")))
    {
        setChar(args[0]);
        setInt(static_cast<int>(args[0]));
        setFloat(static_cast<float>(args[0]));
        setDouble(static_cast<double>(args[0]));
        return ;
    }
    this->use_stod(args, *this);
    if (this->getDouble() < 0 || this->getDouble() >= 128 || this->spe)
        this->display << "char: impossible" << std::endl;
    else if ((this->getDouble() < 32 || this->getDouble() >= 127))
        this->display << "char: Non displayable" << std::endl;
    else
        setChar(static_cast<char>(this->getDouble()));
    if (!(this->getDouble() <= std::numeric_limits<int>::max() && this->getDouble() >= std::numeric_limits<int>::min()))
        this->display << "int: impossible" << std::endl;
    else
         setInt(static_cast<int>(this->getDouble()));
    if (!(this->spe) && (!(this->getDouble() <= std::numeric_limits<float>::max() && this->getDouble() >= -std::numeric_limits<float>::max())))
        this->display << "float: impossible" << std::endl;
    else
    {
        if (this->spe)
            this->display << "float: " <<  args << "f" << std::endl;
        else
            setFloat(static_cast<float>(this->getDouble()));
    }
    if (this->spe)
        this->display << "double: " << args;
    else
    {
        this->display << "double: " << getDouble();
        if(this->getDouble() == this->getInt())
            this->display << ".0";
    }
    this->display << std::endl;
}

void    Convert::setChar(char c)
{
	this->display << "char: ";
    this->charValue = c;
    this->display << "'" << this->charValue << "'" << std::endl;
}

void    Convert::setInt(int x)
{
	this->display << "int: ";
    this->intValue = x;
    this->display << this->intValue << std::endl;
}

void    Convert::setFloat(float x)
{
    this->display << "float: ";
    this->floatValue = x;
    this->display << this->floatValue;
    if (this->floatValue == this->intValue)
      this->display << ".0";
    this->display << "f" << std::endl;
}

void    Convert::setDouble(double x)
{
	this->display << "double: ";
    this->doubleValue = x;
    this->display << this->doubleValue;
    if (this->doubleValue == this->intValue)
        this->display << ".0";
    this->display << std::endl;
}

void    Convert::setSpe()
{
    this->spe = true;
}

//Getters

int     Convert::getInt() const
{
    return (this->intValue);
}

double  Convert::getDouble() const
{
    return (this->doubleValue);
}

void    Convert::use_stod(const std::string type, Convert &tmp)
{
    int i = 0;
    int sign = 1;
    int pow = 10;
    double flo = 0.0;
    if (type[i] == '-' || type[i] == '+')
    {
        if (type[i] == '-')
            sign = -1;
        i++;
    }
    while (type[i] && type[i] <= '9' && type[i] >= '0')
    {
        tmp.doubleValue *= 10;
        tmp.doubleValue += (type[i] - '0');
        i++;
    }
    tmp.doubleValue *= sign;
    if (type[i] == '.')
    {
        i++;
    }
    while (type[i] && type[i] <= '9' && type[i] >= '0')
    {
        flo = type[i] - '0';
        tmp.doubleValue += (flo / pow) * sign;
        pow *= 10;
        i++;
    }
}

//Constructors/Destructor

Convert::Convert() : charValue(0), intValue(0), floatValue(0.0f), doubleValue(0.0), spe(false)
{
    std::cout << "Convert Constructor" << std::endl;
}

Convert::Convert(const Convert &copy)
{
    std::cout << "Convert Copy Constructor" << std::endl;
    *this = copy;
}

Convert::~Convert()
{
    std::cout << "Convert Destructor" << std::endl;
}

//Overloads

const Convert&  Convert::operator=(const Convert &copy)
{
    this->charValue = copy.charValue;
    this->intValue = copy.intValue;
    this->floatValue = copy.floatValue;
    this->doubleValue = copy.doubleValue;
    return (*this);
}

std::ostream& operator<<(std::ostream& out, Convert const& conv)
{
    out << conv.display.str();
    return (out);
}
