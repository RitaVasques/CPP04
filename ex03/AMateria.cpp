/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:10:44 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/12 18:56:53 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//CONSTRUCTORS
AMateria::AMateria( void ) {
    //std::cout << "AMateria default constructor called" << std::endl;
    this->_type = "";
}

AMateria::AMateria( const std::string& type ) : _type( type ) {
    //std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria( const AMateria& other ) {
    //std::cout << "AMateria copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
AMateria::~AMateria( void ) {
    //std::cout << "AMateria destructor called" << std::endl;
}

//ASIGNMET OPERATOR
AMateria& AMateria::operator=( const AMateria& other ) {
    this->_type = other.getType();
    return (*this);
}

std::string const & AMateria::getType( void ) const {
    return (this->_type);
}
		
void AMateria::use(ICharacter& target) {
    std::cout << "Materia used on " << target.getName() << std::endl;
}