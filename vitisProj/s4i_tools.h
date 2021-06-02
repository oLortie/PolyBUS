/*
 * s4i_tools.h
 *
 *  Created on: 21 f�vr. 2020
 *      Author: francoisferland
 */

#ifndef SRC_S4I_TOOLS_H_
#define SRC_S4I_TOOLS_H_

#define S4I_NUM_SWITCHES	4

void			s4i_init_hw();
int 			s4i_is_cmd_sws(char *buf);
int             s4i_is_cmd_respiration(char *buf);
unsigned int 	s4i_get_sws_state();


#endif /* SRC_S4I_TOOLS_H_ */
