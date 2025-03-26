/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:26:05 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/11 14:21:45 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

//CONSTRUCTORS
AAnimal::AAnimal( void ) {
    std::cout << "AAnimal default constructor called" << std::endl;
    this->_type = "";
}

AAnimal::AAnimal( const AAnimal& other ) {
    std::cout << "AAnimal copy constror called" << std::endl;
    *this = other;
}

AAnimal::AAnimal ( std::string type ) : _type( type ) {
    std::cout << "AAnimal protected constructor called" << std::endl;
}

//DESTRUCTOR
AAnimal::~AAnimal ( void ) {
    std::cout << "AAnimal destructor called" << std::endl;
}

//ASSIGNMENT OPERATOR
AAnimal& AAnimal::operator=( const AAnimal& other ) {
    std::cout << "AAnimal assignment operator called" << std::endl;
    this->_type = other.getType();
    return (*this);
}

std::string AAnimal::getType( void ) const {
    return (this->_type);
}

void AAnimal::makeSound( void ) const {
    std::cout << "AAnimal: * random animal sound *" << std::endl;
}
