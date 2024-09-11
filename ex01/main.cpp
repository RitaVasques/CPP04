/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:19:17 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/11 14:12:12 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main( void ) {
    std::cout << "[SUBJECT TEST]" << std::endl;
    {
        const Animal* dog = new Dog();
        const Animal* cat = new Cat();

        delete dog;
        delete cat;
    }
    std::cout << "[TEST ANIMALS BRAINS]" << std::endl;
    {
        std::string ideas[4] = {"sleep & eat", "eat", "run & play", "play"};
        Dog dog;
        Cat cat;

        dog.getBrain()->setIdea(ideas[0]);
        cat.getBrain()->setIdea(ideas[2]);
        std::cout << RED << dog.getType() << ": " << RESET;
        dog.getBrain()->printBrain();
        std::cout << RED << cat.getType() << ": " << RESET;
        cat.getBrain()->printBrain();
    }
    std::cout << "[TEST: ANIMALS]" << std::endl;
    {
        int nbr = 4;
        Animal* animals[nbr];
        for ( int i = 0; i < nbr; i++ ) {
            if (i % 2 )
                animals[i] = new Dog();
            else
                animals[i] = new Cat();
        }
        for ( int i = 0; i < nbr; i++) {
            animals[i]->makeSound();
        }
        for ( int i = 0; i < nbr; i++ )
            delete animals[i];
    }
    return (0);
}
