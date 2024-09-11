/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:45:52 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/11 13:34:32 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
    public:
        Dog( void );
        Dog( const Dog& other );
        ~Dog( void );

        Dog& operator=( const Dog& other );

        Brain* getBrain( void ) const;
        void makeSound( void ) const;
    private:
        Brain* _brain;
};

#endif