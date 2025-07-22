/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:15:05 by masase            #+#    #+#             */
/*   Updated: 2025/07/22 17:44:05 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    nb = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
    this->nb = nb;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb)
{
    this->nb = nb;
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
    this->nb = obj.nb;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
    this->nb = obj.getRawBits();
    return *this;
    std::cout << "Copy assignment operator called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;    
    return (this->nb);
}

void Fixed::setRawBits(int const raw)
{
    this->nb = raw;
}

float Fixed::toFloat(void) const
{
    this->nb = this.nb
}

int Fixed::toInt(void) const
{

}
