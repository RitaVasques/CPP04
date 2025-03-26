/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:19:38 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/11 14:06:33 by ritavasques      ###   ########.fr       */
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
		
		Animal& operator=(const Animal& other );
		
		std::string getType( void ) const;
		virtual void makeSound( void ) const;
};

#endif