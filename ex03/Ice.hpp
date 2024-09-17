/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:07:24 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/12 11:12:48 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria {
    public:
        Ice( void );
        Ice( const Ice& other );
        ~Ice( void );
        
        Ice& operator=( const Ice& other );
        
        Ice* clone() const;
        void use( ICharacter& target );
};

#endif