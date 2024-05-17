#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <fstream>


class Harl
{
	private:
		struct	_mood
		{
			std::string level;
			void	(Harl::*ptr_function)(void);
		};
		_mood mood[4];
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif