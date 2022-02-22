/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:40:47 by user42            #+#    #+#             */
/*   Updated: 2022/02/22 14:50:36 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

//Setters

void    Convert::setValues(std::string types, std::string args)
{
    if (!(types.compare("char")))
    {
        this->display << "char: ";
        setChar(args[0]);
        this->display << "int: ";
        setInt(static_cast<int>(args[0]));
        this->display << "float: ";
        setFloat(static_cast<float>(args[0]));
        this->display << "double: ";
        setDouble(static_cast<double>(args[0]));
    }
    else if (!(types.compare("int")))
    {
        this->use_stoi(args, *this);
        if (this->getInt() < 0 || this->getInt() > 127)
            this->display << "char: impossible" << std::endl;
        else if (this->getInt() == 127 || this->getInt() == 0)
            this->display << "char: Non displayable" << std::endl;
        else
        {
            this->display << "char: ";
            setChar(static_cast<char>(this->getInt()));
        }
        this->display << "int: " << this->getInt() << std::endl;
        this->display << "float: ";
        setFloat(static_cast<float>(this->getInt()));
        this->display << "double: ";
        setDouble(static_cast<double>(this->getInt()));
    }
    else if (!(types.compare("float")))
    {
        this->use_stof(args, *this);
        if (this->getFloat() < 0 || this->getFloat() >= 128 || this->spe)
            this->display << "char: impossible" << std::endl;
        else if ((this->getFloat() < 1 || this->getFloat() >= 127))
            this->display << "char: Non displayable" << std::endl;
        else
        {
            this->display << "char: ";
            setChar(static_cast<char>(this->getFloat()));
        }
        if (!(static_cast<double>(this->getFloat()) <= std::numeric_limits<int>::max() && static_cast<double>(this->getFloat()) >= std::numeric_limits<int>::min()))
            this->display << "int: impossible" << std::endl;
        else
        {
            this->display << "int: ";
            setInt(static_cast<int>(this->getFloat()));
        }
        this->display << "float: " << this->getFloat();
        if (this->getFloat() == this->getInt())
            this->display << ".0";
        this->display << "f" << std::endl;
        this->display << "double: ";
        setDouble(static_cast<double>(this->getFloat()));
    }
    else if (!(types.compare("double")))
    {
        this->use_stod(args, *this);
        if (this->getDouble() < 0 || this->getDouble() >= 128 || this->spe)
            this->display << "char: impossible" << std::endl;
        else if ((this->getDouble() < 1 || this->getDouble() >= 127))
            this->display << "char: Non displayable" << std::endl;
        else
        {
            this->display << "char: ";
            setChar(static_cast<char>(this->getDouble()));
        }
        if (!(this->getDouble() <= std::numeric_limits<int>::max() && this->getDouble() >= std::numeric_limits<int>::min()))
            this->display << "int: impossible" << std::endl;
        else
        {
            this->display << "int: ";
            setInt(static_cast<int>(this->getDouble()));
        }
        if (!(this->spe) && (!(this->getDouble() <= std::numeric_limits<float>::max() && this->getDouble() >= -std::numeric_limits<float>::max())))
            this->display << "float: impossible" << std::endl;
        else
        {
            this->display << "float: ";
            setFloat(static_cast<float>(this->getDouble()));
        }
        this->display << "double: " << getDouble();
        if (this->getDouble() == this->getInt())
            this->display << ".0";
        this->display << std::endl;
    }
}

void    Convert::setChar(char c)
{
    this->charValue = c;
    this->display << "'" << this->charValue << "'" << std::endl;
}

void    Convert::setInt(int x)
{
    this->intValue = x;
    this->display << this->intValue << std::endl;
}

void    Convert::setFloat(float x)
{
    this->floatValue = x;
    this->display << this->floatValue;
    if (this->floatValue == this->intValue)
      this->display << ".0";
    this->display << "f" << std::endl;
}

void    Convert::setDouble(double x)
{
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

char    Convert::getChar() const
{
    return (this->charValue);
}

int     Convert::getInt() const
{
    return (this->intValue);
}

float   Convert::getFloat() const
{
    return (this->floatValue);
}

double  Convert::getDouble() const
{
    return (this->doubleValue);
}

const std::string   Convert::getType(int index) const
{
    return (this->types[index]);
}

//Converters

void    Convert::use_stoi(const std::string type, Convert &tmp)
{   
    int i = 0;
    int sign = 1;
    if (type[i] == '-' || type[i] == '+')
    {
        if (type[i] == '-')
            sign = -1;
        i++;
    }
    while (type[i] && type[i] <= '9' && type[i] >= '0')
    {
        tmp.intValue *= 10;
        tmp.intValue += (type[i] - '0');
        i++;
    }
    tmp.intValue *= sign;
}

void    Convert::use_stof(const std::string type, Convert &tmp)
{
    int i = 0;
    int sign = 1;
    int pow = 10;
    float flo = 0.0f;
    if (type[i] == '-' || type[i] == '+')
    {
        if (type[i] == '-')
            sign = -1;
        i++;
    }
    while (type[i] && type[i] <= '9' && type[i] >= '0')
    {
        tmp.floatValue *= 10;
        tmp.floatValue += (type[i] - '0');
        i++;
    }
    tmp.floatValue *= sign;
    if (type[i] == '.')
    {
        i++;
    }
    while (type[i] && type[i] <= '9' && type[i] >= '0')
    {
        flo = type[i] - '0';
        tmp.floatValue += (flo / pow) * sign;
        pow *= 10;
        i++;
    }
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
    this->types[0] = "int";
    this->types[1] = "float";
    this->types[2] = "double";
    this->f[0] = &Convert::use_stoi;
    this->f[1] = &Convert::use_stof;
    this->f[2] = &Convert::use_stod;
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
