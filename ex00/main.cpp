/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:40:05 by ritavasques       #+#    #+#             */
/*   Updated: 2024/09/10 13:39:01 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main( void ) {
	
	{
		std::cout << "[TESTING SUBJECT]" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
	
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
	
		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		std::cout << "[TESTING WRONG ANIMAL]" << std::endl;
		const WrongAnimal* metaWrong = new WrongAnimal();
		const WrongAnimal* iWrong = new WrongCat();
		
		std::cout << iWrong->getType() << " " << std::endl;
		iWrong->makeSound();
		metaWrong->makeSound();
	
		delete metaWrong;
		delete iWrong;
	}	
	return (0);
}