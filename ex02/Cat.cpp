/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:06:13 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/11 14:32:12 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//CONSTRUCTORS
Cat::Cat( void ) {
    std::cout << "Cat constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat( const Cat& other ) : AAnimal( other), _brain( new Brain() ) {
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
Cat::~Cat( void ) {
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

//ASSIGNMENT OPERATOR
Cat& Cat::operator=( const Cat& other ) {
    std::cout << "Cat Assignment operator called" << std::endl;
    if ( this->_brain )
        delete this->_brain;
    this->_brain = other._brain->copy();
    return (*this);
}

void Cat::makeSound( void ) const {
    std::cout << GREEN << this->_type << ": MEOW, MEOW!" << RESET << std::endl;
}

Brain* Cat::getBrain( void ) const {
    return (this->_brain);
}
