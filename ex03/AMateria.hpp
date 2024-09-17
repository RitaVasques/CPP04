/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:37:04 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/12 15:59:33 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria( const std::string& type );
		AMateria( const AMateria& other );
		virtual ~AMateria( void );
		
		AMateria& operator=( const AMateria& other );
		
		std::string const & getType( void ) const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif