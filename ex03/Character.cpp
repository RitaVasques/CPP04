/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:36:14 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/17 10:05:14 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

//CONSTRUCTORS
Character::Character( void ) : _name( "" ) {
    //std::cout << "Character default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

Character::Character( std::string name ) : _name( name ) {
    //std::cout << "Character constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = 0;
}

Character::Character( const Character& other ) {
    //std::cout << "Character copy constructor called" << std::endl;
    *this = other;
}

//DESTRUCTOR
Character::~Character( void ) {
    //std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
            delete this->_inventory[i];
    }    
}

//ASSIGNMENT OPERATOR
Character& Character::operator=( const Character& other ) {
    this->_name = other._name;
    for (int i = 0; i < 4; i++)
        if (this->_inventory[i])
            delete this->_inventory[i];
    for (int i = 0; i < 4; i++)
        if (other._inventory[i])
            this->_inventory[i] = other._inventory[i]->clone();
     return (*this);
}

std::string const & Character::getName( void ) const {
    return (this->_name);
}

AMateria* Character::getInventory( int idx ) const {
    return (this->_inventory[idx]);
}

void Character::equip(AMateria* m) {
    
    int i = 0;
    
    while (this->_inventory[i] != 0)
        i++;
    if (!m)
    {
        std::cout << RED << "No materia to collect" << RESET << std::endl;
        return ;
    }
    else if (i >= 4)
    {
        std::cout << RED << "Cannot collect materia, inventory is full" << RESET << std::endl;
        return ;
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (!this->_inventory[i])
            {
                this->_inventory[i] = m;
                std::cout << GREEN << this->_name << " equiped with " << m->getType() << RESET << std::endl;
                return ;
            }
        }
    }
}

void Character::unequip(int idx) {
    if (idx < 0 || idx >= 4 || !this->_inventory[idx])
    {
        std::cout << RED << "No materia to unequip" << RESET << std::endl;
        return ;
    }
    std::cout << GREEN << this->_name << " unequiped the " << this->_inventory[idx]->getType() << RESET << std::endl;
    this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx >= 4 || !this->_inventory[idx])
    {
        std::cout << RED << "At this index no materia to use" << RESET << std::endl;
        return ;
    }
    this->_inventory[idx]->use(target);
}
