#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed 
{
    private:
        int _fixedPointNum;
        static const int _fractionalBitsNum = 8;

    public:
        Fixed();
        Fixed(const Fixed& src);
        Fixed& operator=(const Fixed& other);
        Fixed(const int);
        Fixed(const float);
        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        
        bool    operator<(const Fixed& obj) const;
        bool    operator>(const Fixed& obj) const;
        bool    operator<=(const Fixed& obj) const;
        bool    operator>=(const Fixed& obj) const;
        bool    operator==(const Fixed& obj) const;
        bool    operator!=(const Fixed& obj) const;

        Fixed    operator+(const Fixed& obj) const;
        Fixed    operator-(const Fixed& obj) const;
        Fixed    operator/(const Fixed& obj) const;
        Fixed    operator*(const Fixed& obj) const;
    //pre-increment
        Fixed&    operator++();
        Fixed&    operator--();
    //post-increment
        Fixed    operator++(int);
        Fixed    operator--(int);

        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);

};

std::ostream& operator<<(std::ostream& output, const Fixed& src);

#endif