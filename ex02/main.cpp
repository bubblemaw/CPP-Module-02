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

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) + Fixed( 2 ) );
    Fixed const c( Fixed( 5.05f ) - Fixed( 2 ) );
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;

    std::cout << b << std::endl;
    std::cout << c << std::endl;    

    // std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}

// int main( void )
// {
//     Fixed a;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl;
//     std::cout << a++ << std::endl;
//     std::cout << a << std::endl;

//     std::cout << b << std::endl;

//     std::cout << Fixed::max( a, b ) << std::endl;
//     return 0;
// }