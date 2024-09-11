/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:23:24 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/11 14:10:50 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"

class Brain {
    public:
        Brain( void );
        Brain( const Brain& other );
        ~Brain( void );

        Brain& operator=( const Brain& other );
        
        void        setIdea( std::string idea );
		int			getNbrIdeas( void ) const;
		std::string getIdea( int index ) const;
        
		Brain* copy( void ) const;
		void printBrain( void ) const;
    private:
        std::string _ideas[100];
		int			_nbrIdeas;
};

#endif