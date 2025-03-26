/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:51:31 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/12 17:22:23 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//CONSTRUCTORS
Cure::Cure ( void ) : AMateria( "cure" ) {
    //std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& other ) {
    //std::cout << "Cure copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
Cure::~Cure( void ) {
    //std::cout << "Cure destructor called" << std::endl;
}

//ASSIGNMENT OPERATOR
Cure& Cure::operator=( const Cure& other ) {
    AMateria::operator= ( other );
    return (*this);
}

Cure* Cure::clone() const {
    Cure* cure = new Cure;
    return (cure);
}

void Cure::use( ICharacter& target ) {
    std::cout << GREEN << "* heals " << target.getName() << "'s wounds *" << RESET << std::endl; 
}