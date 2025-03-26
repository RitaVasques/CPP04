/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:17:44 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 13:32:57 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//CONSTRUCTORS
WrongAnimal::WrongAnimal( void ) : _type( "WrongAnimal") {
    std::cout << "WrongAnimal defualt constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other ) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type) {
    std::cout << "Protected WrongAnimal constructor called" << std::endl;
}

//DESTRUCTOR
WrongAnimal::~WrongAnimal( void ) {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

//ASSIGNMENT OPERATOR
WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other ) {
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    this->_type = other.getType();
    return (*this);
}

std::string WrongAnimal::getType( void ) const {
    return (this->_type);
}

void WrongAnimal::makeSound( void ) const {
    std::cout << this->_type << ": * random animal sound *" << std::endl;
}