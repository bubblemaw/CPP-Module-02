/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:01:58 by masase            #+#    #+#             */
/*   Updated: 2025/08/06 21:49:09 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
    std::cout << "Default constructor called" << std::endl;
}

Point::Point(const Point &obj)
{
    std::cout << "Copy constructor called" << std::endl;     
    *this = obj;    
}

Point &Point::operator=(const Point &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;     
    return *this;
}

Point::~Point()
{
    std::cout << "Destructor called" << std::endl;    
}

float Point::get_x() const 
{
    return(_x.toFloat());
}

float Point::get_y() const 
{
    return(_y.toFloat());
}

Tnode::Tnode(): right(NULL), left(NULL) 
{
    std::cout << "Node constructor called" << std::endl;  
}


