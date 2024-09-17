/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:54:39 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/12 14:26:03 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria( AMateria* ) = 0;
		virtual AMateria* createMateria( std::string const & type ) = 0;
};

#endif