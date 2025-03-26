/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:21:21 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/12 18:38:27 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {
	public:
		Character( void );
		Character( std::string name );
		Character( const Character& other );
		~Character( void );
		
		Character& operator=( const Character& other );
		
		std::string const & getName( void ) const;
		AMateria* getInventory( int idx ) const;
		
		void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
		
	private:
		AMateria* _inventory[4];
		std::string _name;
};

#endif