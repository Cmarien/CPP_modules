/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:40:00 by user42            #+#    #+#             */
/*   Updated: 2022/02/22 12:58:55 by cmarien          ###   ########.fr       */
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
    char    charValue;
    int     intValue;
    float   floatValue;
    double  doubleValue;
    std::string types[3];
    bool    spe;

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