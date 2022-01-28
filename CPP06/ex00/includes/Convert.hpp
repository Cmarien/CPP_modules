/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:40:00 by user42            #+#    #+#             */
/*   Updated: 2022/01/28 10:48:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>

class Convert
{
private:
    char    charValue = 0;
    int     intValue = 0;
    float   floatValue = 0.0f;
    double  doubleValue = 0.0;
    const std::string types[3] = {"int", "float", "double"};
    bool    spe = false;

    void   (Convert::*f[3])(const std::string type, Convert&);
public:
    std::stringstream display;
    Convert();
    Convert(const Convert&);
    ~Convert();
    const Convert&  operator=(const Convert&);

    void   use_stoi(const std::string type, Convert&);
    void   use_stof(const std::string type, Convert&);
    void   use_stod(const std::string type, Convert&);
    char    getChar() const;
    int     getInt() const;
    float   getFloat() const;
    double  getDouble() const;
    void    setChar(char);
    void    setInt(int);
    void    setFloat(float);
    void    setDouble(double);
    void    setSpe();
    void    setValues(std::string type, std::string arg);
    const std::string   getType(int index) const;
};

#include <iostream>
std::ostream& operator<<(std::ostream& out, Convert const& rhs);


#endif