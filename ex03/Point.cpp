/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:01:58 by masase            #+#    #+#             */
/*   Updated: 2025/07/28 21:02:08 by masase           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
{
    std::cout << "Default constructor called" << std::endl;    
}

Point::Point(const float x, const float y)
{
    std::cout << "Default constructor called" << std::endl;
    this->_x = const Fixed(x);
    this->_y = const Fixed(y);    
}

Point::Point(const Point &obj)
{
    std::cout << "Copy constructor called" << std::endl;     
    this->_x = obj._x;
    this->_x = obj._x;    
}