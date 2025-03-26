/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:17:31 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 13:14:06 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	protected:
		std::string _type;
        WrongAnimal( std::string type );
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal& other );
		~WrongAnimal( void );
		
		WrongAnimal& operator=( const WrongAnimal& other );
		
		std::string getType( void ) const;

		void makeSound( void ) const;
};

#endif