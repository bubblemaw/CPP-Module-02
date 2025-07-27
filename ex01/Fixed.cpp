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
    this->nb = nb;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;    
    this->nb = nb;
}

Fixed::Fixed(const Fixed& obj)
{
    std::cout << "Copy constructor called" << std::endl; 
    this->nb = obj.nb;   
    // this->nb = obj.getRawBits();
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
        // this->nb = obj.getRawBits();
    return *this;
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
    float nb = this->nb / powf(10, this->bit);
    return (nb);
}

int Fixed::toInt(void) const
{
    int nb = this->nb / powf(10, this->bit);
    return (nb);

}
