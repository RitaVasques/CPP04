/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:59:55 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/11 13:46:18 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    public:
        Cat( void );
        Cat( const Cat& other );
        ~Cat( void );
        
        Cat& operator=( const Cat& other );
        
        Brain* getBrain( void ) const;
        void makeSound( void ) const;
    private:
        Brain* _brain;
};

#endif