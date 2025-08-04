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

