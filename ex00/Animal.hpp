/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:40:31 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 12:31:55 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	protected:
		std::string _type;
		Animal( std::string type );
	public:
		Animal( void );
		Animal( const Animal& other );
		virtual ~Animal( void );
		
		Animal& operator=( const Animal& other );
		
		std::string getType( void ) const;

		virtual void makeSound( void ) const;
};

#endif