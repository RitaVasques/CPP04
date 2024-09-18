/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:17:23 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/12 17:22:52 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//CONSTRUCTORS
Ice::Ice ( void ) : AMateria( "ice" ) {
    //std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& other ) {
    //std::cout << "Ice copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
Ice::~Ice( void ) {
    //std::cout << "Ice destructor called" << std::endl;
}

//ASSIGNMENT OPERATOR
Ice& Ice::operator=( const Ice& other ) {
    AMateria::operator= ( other );
    return (*this);
}

Ice* Ice::clone() const {
    Ice* ice = new Ice;
    return (ice);
}

void Ice::use( ICharacter& target ) {
    std::cout << GREEN << "* shoots an ice bolt at " << target.getName() << " *" << RESET << std::endl; 
}