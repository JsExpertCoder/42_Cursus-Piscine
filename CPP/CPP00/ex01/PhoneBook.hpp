/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brisly <brisly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:25:45 by brisly            #+#    #+#             */
/*   Updated: 2023/06/01 10:49:04 by brisly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        static const int MAX_CONTACTS = 8;
    
        Contact contacts[MAX_CONTACTS];
        
    public:
        PhoneBook();
        ~PhoneBook();
};

#endif