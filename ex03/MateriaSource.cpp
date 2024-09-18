/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:27:50 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/17 09:58:06 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

//CONSTRUCTOR
MateriaSource::MateriaSource( void ) {
    //std::cout << "MateriaSource defautl construstor called" << std::endl;
     for (int i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

MateriaSource::MateriaSource( const MateriaSource& other ) {
    //std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
MateriaSource::~MateriaSource() {
    //std::cout << "MateriaSaurce destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

MateriaSource& MateriaSource::operator=( const MateriaSource& other ) {
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
	    if (other._inventory[i])
            this->_inventory[i] = other._inventory[i]->clone();
    }
    return (*this); 
}

void MateriaSource::learnMateria( AMateria *m ) {
    
    int i = 0;
    
    while (this->_inventory[i])
        i++;
    if (!m)
    {
        std::cout << RED << "No materia to learn" << RESET << std::endl;
        return ;
    }
    if (i >= 4)
    {
        std::cout << RED << "Cannot learn materia, inventory is full" << RESET << std::endl;
        return ;
    }
    this->_inventory[i] = m;
    std::cout << GREEN << this->_inventory[i]->getType() << ": acknowledged" << RESET << std::endl;
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
	
    int i = 0;
    
    while (this->_inventory[i] && this->_inventory[i]->getType() != type && i < 4)
        i++;
    if (i < 4 && this->_inventory[i])
    {
        std::cout << GREEN << this->_inventory[i]->getType() << ": was created" << RESET << std::endl;
			return (this->_inventory[i]->clone());
    }
    std::cout << RED << type << ": was not created" << RESET << std::endl;      
    return (NULL);
}
