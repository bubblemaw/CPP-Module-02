/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:15:05 by masase            #+#    #+#             */
/*   Updated: 2025/08/11 12:05:30 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;   
    this->value = value * (1 << this->bit);
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;    
    this->value = roundf(value * (1 << this->bit));
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl; 
    this->value = obj.value;   
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->value = obj.value;
    return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
    float value;

    value = obj.toFloat();
    out << value;
    return out;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;    
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;   
    this->value = raw;
}

float Fixed::toFloat(void) const
{
    float value = (float)this->value / (1 << this->bit);
    return (value);
}

int Fixed::toInt(void) const
{
    int value = this->value / (1 << this->bit);
    return (value);
}

Fixed operator+(const Fixed &ob1, const Fixed &ob2)
{
    return Fixed(ob1.toFloat() + ob2.toFloat());
}

Fixed operator-(const Fixed &ob1, const Fixed &ob2)
{
    return Fixed(ob1.toFloat() - ob2.toFloat());
}

Fixed operator*(const Fixed &ob1, const Fixed &ob2)
{
    return Fixed(ob1.toFloat() * ob2.toFloat());
}

Fixed operator/(const Fixed &ob1, const Fixed &ob2)
{
    return Fixed(ob1.toFloat() / ob2.toFloat());
}

bool operator>(const Fixed &ob1, const Fixed &ob2)
{
    if (ob1.toFloat() > ob2.toFloat())
        return (true);
    return (false);
}

bool operator<(const Fixed &ob1, const Fixed &ob2)
{
    if (ob1.toFloat() < ob2.toFloat())
        return (true);
    return (false);
}

bool operator>=(const Fixed &ob1, const Fixed &ob2)
{
    if (ob1.toFloat() >= ob2.toFloat())
        return (true);
    return (false);
}

bool operator<=(const Fixed &ob1, const Fixed &ob2)
{
    if (ob1.toFloat() <= ob2.toFloat())
        return (true);
    return (false);
}

bool operator==(const Fixed &ob1, const Fixed &ob2)
{
    if (ob1.toFloat() == ob2.toFloat())
        return (true);
    return (false);
}

bool operator!=(const Fixed &ob1, const Fixed &ob2)
{
    if (ob1.toFloat() != ob2.toFloat())
        return (true);
    return (false);
}

Fixed &Fixed::operator++(void)
{
    this->value += 1;
    return *this;
}

Fixed &Fixed::operator--(void)
{
    this->value -= 1;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &ob1, Fixed &ob2)
{
    if (ob1 < ob2)
        return (ob1);
    else
        return (ob2);
}

const Fixed &Fixed::min(const Fixed &ob1, const Fixed &ob2)
{
    if (ob1 < ob2)
        return (ob1);
    else
        return (ob2);
}

Fixed &Fixed::max(Fixed &ob1, Fixed &ob2)
{
    if (ob1 > ob2)
        return (ob1);
    else
        return (ob2);
}

const Fixed &Fixed::max(const Fixed &ob1, const Fixed &ob2)
{
    if (ob1 > ob2)
        return (ob1);
    else
        return (ob2);
}
