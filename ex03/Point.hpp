/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:02:22 by masase            #+#    #+#             */
/*   Updated: 2025/07/28 21:02:24 by masase           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class   Point
{
    private:
        Fixed const _x;
        Fixed const _y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &obj);
        Point &operator=(const Point &obj);
        ~Point(); 
};

#endif