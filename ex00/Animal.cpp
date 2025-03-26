/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:40:49 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 13:20:10 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//CONSTRUCTORS
Animal::Animal( void ) {
    std::cout << "Animal defualt constructor called" << std::endl;
    this->_type = "";
}

Animal::Animal( const Animal& other ) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal::Animal( std::string type ) {
    std::cout << "Protected Animal constructor called" << std::endl;
    this->_type = type;
}

//DESTRUCTOR
Animal::~Animal( void ) {
    std::cout << "Animal destructor called" << std::endl;
}

//ASSIGNMENT OPERATOR
Animal& Animal::operator=( const Animal& other ) {
    std::cout << "Animal assignment operator called" << std::endl;
    this->_type = other.getType();
    return (*this);
}

std::string Animal::getType( void ) const {
    return (this->_type);
}

void Animal::makeSound( void ) const {
    std::cout << "Animal: * random animal sound *" << std::endl;
}