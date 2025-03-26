/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:49:19 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/11 14:12:51 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//CONSTRUCTOR
Dog::Dog( void ) {
    std::cout << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog( const Dog& other ) : Animal( other ), _brain( new Brain() ) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
Dog::~Dog( void ) {
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

//ASSIGNMENT OPERATOR
Dog& Dog::operator=( const Dog& other ) {
    std::cout << "Dog assignment operator called" << std::endl;
    Animal::operator=( other );
    if (this->_brain)
        delete this->_brain;
    this->_brain = other._brain->copy();
    return (*this);
}

void Dog::makeSound( void ) const {
    std::cout << GREEN << this->_type << ": WOOF, WOOF!" << RESET << std::endl;
}

Brain* Dog::getBrain( void ) const {
    return (this->_brain);
}
