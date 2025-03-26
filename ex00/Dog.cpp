/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:40:57 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 12:44:09 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//CONSTRUCTORS 
Dog::Dog( void ) : Animal ( "Dog" ) {
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog& other) : Animal ( other ) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
Dog::~Dog( void ) {
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=( const Dog& other) {
    std::cout << "Dog assignment operator called" << std::endl;
    Animal::operator=( other );
    return (*this);
}

void Dog::makeSound( void ) const {
    std::cout << this->_type << ": WOOF, WOOF!" << std::endl;
}