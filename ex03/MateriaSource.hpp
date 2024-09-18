/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:28:37 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/17 09:58:12 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    public:
        MateriaSource( void );
        MateriaSource( const MateriaSource& other );
        ~MateriaSource( void );

        MateriaSource& operator=( const MateriaSource& other );
		
        void learnMateria( AMateria *m );
        AMateria* createMateria( std::string const & type );
    private:
        AMateria* _inventory[4];
};

#endif