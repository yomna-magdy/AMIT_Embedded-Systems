/*
 * SWITCH_interface.h
 *
 * Created: 4/20/2025 5:57:22 PM
 *  Author: yomna
 */ 


#ifndef SWITCH_INTERFACE_H_
#define SWITCH_INTERFACE_H_

#define SWITCH_PRESSED             1
#define SWITCH_NOT_PRESSED         2

#define SWITCH_FORWARD_CONNECTION  0
#define SWITCH_REVERSE_CONNECTION  1


               /********************APIS PORT TYPES*********************/


void Switch_voidInit              (u8 copy_u8SwitchPort, u8 copy_u8SwitchPin);
void Switch_voidGitSwitchState    (u8 copy_u8SwitchPort, u8 copy_u8SwitchPin, u8 copy_u8SwitchConnectionType, u8* copy_pu8SwitchState);
void Switch_voidInitPullUpResist  (u8 copy_u8SwitchPort, u8 copy_u8SwitchPin, u8 copy_u8SwitchConnectionType);
 




#endif /* SWITCH_INTERFACE_H_ */