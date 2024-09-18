/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:13:24 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/12 11:13:26 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
    public:
        Cure( void );
        Cure( const Cure& other );
        ~Cure( void );
        
        Cure& operator=( const Cure& other );
        
        Cure* clone() const;
        void use( ICharacter& target );
};

#endif