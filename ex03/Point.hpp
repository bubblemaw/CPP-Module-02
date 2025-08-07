/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:02:22 by masase            #+#    #+#             */
/*   Updated: 2025/08/06 21:49:05 by maw              ###   ########.fr       */
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
        float get_x() const;
        float get_y() const;
};

typedef struct vector
{
    float x;
    float y;
}vector ;

typedef struct Tnode
{
    Tnode *right;
    Tnode *left;
    Tnode();
} Tnode;


bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif