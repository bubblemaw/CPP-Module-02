/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:14:13 by masase            #+#    #+#             */
/*   Updated: 2025/07/27 18:07:26 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <ostream>
# include <cmath>

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
        friend std::ostream &operator<<(std::ostream &out, const Fixed &obj);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;       
};

#endif