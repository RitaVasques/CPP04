/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:45:15 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 12:48:16 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//CONSTRUCTORS 
WrongCat::WrongCat( void ) : WrongAnimal ( "WrongCat" ) {
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& other) : WrongAnimal ( other ) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
WrongCat::~WrongCat( void ) {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& other) {
    std::cout << "WrongCat assignment operator called" << std::endl;
    WrongAnimal::operator=( other );
    return (*this);
}

void WrongCat::makeSound( void ) const {
    std::cout << this->_type << ": MEOW!" << std::endl;
}