/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:14:13 by masase            #+#    #+#             */
/*   Updated: 2025/07/22 17:44:02 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class   Fixed
{
    private:
        int nb;
        static const int bit = 8;
    public:
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed();
        Fixed(const Fixed& obj);
        ~Fixed();
        Fixed &operator=(const Fixed &obj);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;       
};

#endif