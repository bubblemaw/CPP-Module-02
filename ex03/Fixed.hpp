/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:14:13 by masase            #+#    #+#             */
/*   Updated: 2025/07/28 18:57:16 by maw              ###   ########.fr       */
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
        int value;
        static const int bit = 8;
    public:
        Fixed(const int value);
        Fixed(const float value);
        Fixed();
        Fixed(const Fixed& obj);
        ~Fixed();
        const Fixed &operator=(const Fixed &obj);
        friend std::ostream &operator<<(std::ostream &out, const Fixed &obj);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        friend Fixed operator+(const Fixed &ob1, const Fixed &ob2);
        friend Fixed operator-(const Fixed &ob1, const Fixed &ob2);
        friend Fixed operator*(const Fixed &ob1, const Fixed &ob2);
        friend Fixed operator/(const Fixed &ob1, const Fixed &ob2);
        friend bool operator>(const Fixed &ob1, const Fixed &ob2);
        friend bool operator<(const Fixed &ob1, const Fixed &ob2);
        friend bool operator>=(const Fixed &ob1, const Fixed &ob2);
        friend bool operator<=(const Fixed &ob1, const Fixed &ob2);
        friend bool operator==(const Fixed &ob1, const Fixed &ob2);
        friend bool operator!=(const Fixed &ob1, const Fixed &ob2);
        Fixed &operator++(); //prefix
        Fixed &operator--(); //prefix
        Fixed operator++(int); //postfix
        Fixed operator--(int); //postfix
        static Fixed &min(Fixed &ob1, Fixed &ob2);
        static const Fixed &min(const Fixed &ob1,  const Fixed &ob2);
        static Fixed &max(Fixed &ob1, Fixed &ob2);
        static const Fixed &max(const Fixed &ob1,  const Fixed &ob2);        
};

#endif