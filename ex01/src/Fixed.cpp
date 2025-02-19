#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixedPointNum(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_fixedPointNum = other.getRawBits();
    return *this;
}

Fixed::Fixed(const int)
{

}

Fixed::Fixed(const float)
{

}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointNum;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointNum = raw;
}

float   Fixed::toFloat(void) const
{

}

int     Fixed::toInt(void) const
{
    
}