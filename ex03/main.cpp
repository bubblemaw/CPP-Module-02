/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:35:06 by masase            #+#    #+#             */
/*   Updated: 2025/07/28 18:57:56 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
    if(bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(50.1f, 50.1f)))
        std::cout << "UEEEEE C'est DEDANSSSSS" << std::endl;
    else
                std::cout << "OHHHHHHHHHHHH :(" << std::endl;
    if(bsp(Point(0, 0), Point(0, 5), Point(5, 0), Point(1, 1)))
        std::cout << "UEEEEE C'est DEDANSSSSS" << std::endl;
    else
                std::cout << "OHHHHHHHHHHHH :(" << std::endl;                
    return (0);
}