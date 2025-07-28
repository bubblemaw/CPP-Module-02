/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:15:05 by masase            #+#    #+#             */
/*   Updated: 2025/07/27 18:14:08 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    nb = 0;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;   
    this->nb = nb * (1 << this->bit);
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;    
    this->nb = roundf(nb * (1 << this->bit));
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl; 
    this->nb = obj.nb;   
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->nb = obj.nb;
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
    return (this->nb);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;   
    this->nb = raw;
}

float Fixed::toFloat(void) const
{
    float nb = (float)this->nb / (1 << this->bit);
    return (nb);
}

int Fixed::toInt(void) const
{
    int nb = this->nb / (1 << this->bit);
    return (nb);
}

Fixed& Fixed::operator*(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->nb = obj.nb;
    return *this;
}
