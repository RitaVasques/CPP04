/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:46:09 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/12 14:58:14 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class AMateria;

class ICharacter {
    public:
        virtual ~ICharacter( void ) {};
        virtual std::string const & getName( void ) const = 0;
        virtual void equip( AMateria* m ) = 0;
        virtual void unequip( int idx ) = 0;
        virtual void use( int idx, ICharacter& target ) = 0;
};

#endif