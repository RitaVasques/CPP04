/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:41:13 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 12:41:04 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//CONSTRUCTORS 
Cat::Cat( void ) : Animal ( "Cat" ) {
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat& other) : Animal ( other ) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
Cat::~Cat( void ) {
    std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=( const Cat& other) {
    std::cout << "Cat assignment operator called" << std::endl;
    Animal::operator=( other );
    return (*this);
}

void Cat::makeSound( void ) const {
    std::cout << this->_type << ": MEOW, MEOW!" << std::endl;
}