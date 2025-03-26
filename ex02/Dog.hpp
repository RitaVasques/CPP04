/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:45:52 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/11 14:25:10 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
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