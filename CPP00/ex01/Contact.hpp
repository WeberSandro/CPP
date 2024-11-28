/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanweber <sanweber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:53:44 by sanweber          #+#    #+#             */
/*   Updated: 2024/11/13 14:41:43 by sanweber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
    bool set_contact(const std::string& fn, const std::string& ln, const std::string& nn, const std::string& pn, const std::string& ds);
    void display_full() const;
    void display_summary(int index) const;

private:
	std::string truncate(const std::string& str) const;
};

#endif
