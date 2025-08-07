/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:02:35 by masase            #+#    #+#             */
/*   Updated: 2025/08/05 13:50:46 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float vector_cross(vector a, vector b)
{
	float cross = a.x * b.y - a.y * b.x;
	return (cross);
}

Tnode  *binary_tree(vector *tab_t, vector *tab_p, int i, Tnode *node)
{
	if (i > 2)
		return (node);
	if  (vector_cross(tab_t[i], tab_p[i]) > 0)
	{	
		node->left = new Tnode;
		binary_tree(tab_t, tab_p, i + 1,node->left);
	}
	else if (vector_cross(tab_t[i], tab_p[i]) < 0)
	{
		node->right = new Tnode;
		binary_tree(tab_t, tab_p, i + 1,node->right);
	}
	return (node);
}

bool is_inside_left(Tnode *node, int depth)
{
	if (!node)
		return (false);
	if (depth > 2)
		return true;
	if (node->left)
		return is_inside_left(node->left, depth + 1);
	return (false);
}

bool is_inside_right(Tnode *node, int depth)
{
	if (!node)
		return (false);
	if (depth > 2)
		return true;
	if (node->right)
		return is_inside_right(node->right, depth + 1);
	return (false);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool result = false;
	Tnode *node = new Tnode;
	vector ab;
    vector bc;
    vector ca;
	vector ap;
	vector bp;
	vector cp;

    ab.x = b.get_x() - a.get_x();
    ab.y = b.get_y() - a.get_y();

    bc.x = c.get_x() - b.get_x();
    bc.y = c.get_y() - b.get_y();

    ca.x = a.get_x() - c.get_x();
    ca.y = a.get_y() - c.get_y();	
	
    ap.x = point.get_x() - a.get_x();
    ap.y = point.get_y() - a.get_y();

    bp.x = point.get_x() - b.get_x();
    bp.y = point.get_y() - b.get_y();

    cp.x = point.get_x() - c.get_x();
    cp.y = point.get_y() - c.get_y();

	vector tab_t[3] = {ab, bc, ca};
	vector tab_p[3] = {ap, bp, cp};

	node  = binary_tree(tab_t, tab_p, 0, node);
	if (is_inside_left(node, 0))
		return (true);
	if (is_inside_right(node, 0))
		return (true);		
	return (false);
}