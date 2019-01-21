/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 13:53:10 by jdavin            #+#    #+#             */
/*   Updated: 2019/01/13 16:10:27 by jdavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include "ACharacter.hpp"


class               Enemy : public ACharacter
{
    private:

    public:
        Enemy();
        ~Enemy();
        Enemy(Enemy const &src);

	    Enemy 		    &operator=(Enemy const & src);

        void	        moveUp(void);
		void	        moveDown(void);
        int 	        move(char ***map, t_pos limit, Dashboard *board);
        void	        display(WINDOW *window);

};

#endif //ENEMY_HPP




