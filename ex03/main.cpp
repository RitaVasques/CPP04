/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:15:54 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/17 10:21:32 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void) {

    std::cout << "[TEST MATERIA]" << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        AMateria* ice = new Ice();
        AMateria* cure = new Cure();
      
        src->learnMateria( ice );
        ice = src->createMateria( "ice" );
        src->learnMateria( cure );
        cure = src->createMateria( "cure" );
        src->learnMateria( ice );
        ice = src->createMateria( "ice" );
        src->learnMateria( cure );
        cure = src->createMateria( "cure" );
		src->learnMateria( ice );
       
        ice = src->createMateria( "fire" );

        delete src;
        delete ice;
        delete cure;
    }
    std::cout << std::endl;
    std::cout << "[TEST SUBJECT]" << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice()); 
        src->learnMateria(new Cure());
        
        ICharacter* me = new Character("me");
        
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        
        ICharacter* bob = new Character("bob"); 
        
        me->use(0, *bob);
        me->use(1, *bob);
        
        delete bob; 
        delete me; 
        delete src;
    }
    std::cout << std::endl;
    std::cout << "[TEST SEVERAL]" << std::endl;
    {
        IMateriaSource* src = new MateriaSource();
        ICharacter* jo = new Character("Jo");
        ICharacter* bob = new Character("bob"); 
        AMateria* tmp1;
        
        src->learnMateria(new Ice()); 
        src->learnMateria(new Cure());
        
        tmp1 = src->createMateria("ice");
        jo->equip(tmp1);
        tmp1 = src->createMateria("cure");
        jo->equip(tmp1);
        tmp1 = src->createMateria("ice");
        jo->equip(tmp1);
        tmp1 = src->createMateria("cure");
        jo->equip(tmp1);
        tmp1 = src->createMateria("ice");
        jo->equip(tmp1);

		jo->unequip(-1);
		
        jo->use(0, *bob);
        jo->use(1, *bob);
		jo->unequip(1);
        jo->use(2, *bob);
        jo->use(3, *bob);
        jo->use(4, *bob);
        jo->use(-2, *bob);
        jo->use(20, *bob);
    
        delete bob;
        delete jo;
        delete src;
    }
        
    return 0;
}
