/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssoeno <ssoeno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 17:30:55 by ssoeno            #+#    #+#             */
/*   Updated: 2025/03/20 15:28:25 by ssoeno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int main() {
    ClapTrap claptrap("clap");
    claptrap.attack("target1");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);
    claptrap.attack("target2");
    claptrap.takeDamage(12);
    claptrap.attack("target3");
    return 0;
}
