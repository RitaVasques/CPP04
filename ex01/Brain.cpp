/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:23:38 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/11 14:11:23 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) : _nbrIdeas( 0 ){
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( const Brain& other ) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain::~Brain( void ) {
    std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=( const Brain& other ) {
    std::cout << "Brain assignment operator called" << std::endl;
    this->_nbrIdeas = other._nbrIdeas;
    for (int i = 0; i < _nbrIdeas; i++)
        this->_ideas[i] = other._ideas[i];
    return (*this);
}

void Brain::setIdea( std::string idea ) {
    this->_ideas[ this->_nbrIdeas % 100 ] = idea;
    this->_nbrIdeas++;
}

int Brain::getNbrIdeas( void ) const {
    return (this->_nbrIdeas);
}

std::string Brain::getIdea( int index ) const {
    if( index >= 0 && index < 100 )
        return (this->_ideas[index]);
    return (NULL);
}

Brain* Brain::copy( void ) const {
    return (new Brain(*this));
}

void Brain::printBrain( void ) const {
    for (int i = 0; i < this->_nbrIdeas; i++)
        std::cout << RED << getIdea(i) << RESET;
    std::cout << std::endl;
}
