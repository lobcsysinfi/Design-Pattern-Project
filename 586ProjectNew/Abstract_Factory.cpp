//Abstract_Factory.cpp
//
#include "Abstract_Factory.h"
#include<iostream>

AF1::AF1(){}     //constructors
AF1::~AF1(){}   
AF2::AF2() {}
AF2::~AF2() {}
AF3::AF3() {}
AF3::~AF3() {}

store_pin* AF1::get_store_pin(){               //get store_pin object
	
	return new store_pin_1;
}
store_balance* AF1::get_store_balance(){        //get store_balance object

	return new store_balance_1;
}
make_deposit* AF1::get_make_deposit(){
	
	return new make_deposit_1;
}
make_withdraw* AF1::get_make_withdraw(){
	
	return new make_withdraw_1;
}
penalty* AF1::get_penalty(){

	return new penalty_1;
}
display_balance* AF1::get_display_balance(){

	return new display_balance_1;
}
prompt_for_PIN* AF1::get_prompt_for_PIN(){

	return new prompt_for_PIN;
}
display_menu* AF1::get_display_menu(){

	return new display_menu;
}
incorrect_pin_msg* AF1::get_incorrect_pin_msg(){

	return new incorrect_pin_msg;
}
too_many_attempts_msg* AF1::get_too_many_attempts_msg(){

	return new too_many_attempts_msg;
}
eject_card* AF1::get_eject_card(){

	return new eject_card;
}
store_pin* AF2::get_store_pin(){        //////
               
	return new store_pin_2;
}
store_balance* AF2::get_store_balance(){

	return new store_balance_2;
}
make_deposit* AF2::get_make_deposit(){

	return new make_deposit_2;
}
make_withdraw* AF2::get_make_withdraw(){

	return new make_withdraw_2;
}
penalty* AF2::get_penalty(){

	return new penalty_2;
}
display_balance* AF2::get_display_balance(){

	return new display_balance_2;
}
prompt_for_PIN* AF2::get_prompt_for_PIN(){

	return new prompt_for_PIN;
}
display_menu* AF2::get_display_menu(){

	return new display_menu;
}
incorrect_pin_msg* AF2::get_incorrect_pin_msg(){

	return new incorrect_pin_msg;
}
too_many_attempts_msg* AF2::get_too_many_attempts_msg(){

	return new too_many_attempts_msg;
}
eject_card* AF2::get_eject_card(){

	return new eject_card;
}
store_pin* AF3::get_store_pin(){   

	return new store_pin_2;
}
store_balance* AF3::get_store_balance(){

	return new store_balance_1;
}
make_deposit* AF3::get_make_deposit(){

	return new make_deposit_1;
}
make_withdraw* AF3::get_make_withdraw(){

	return new make_withdraw_1;
}
penalty* AF3::get_penalty(){

	return new penalty_3;
}
display_balance* AF3::get_display_balance(){

	return new display_balance_1;
}
prompt_for_PIN* AF3::get_prompt_for_PIN(){

	return new prompt_for_PIN;
}
display_menu* AF3::get_display_menu(){

	return new display_menu;
}
incorrect_pin_msg* AF3::get_incorrect_pin_msg(){

	return new incorrect_pin_msg;
}
too_many_attempts_msg* AF3::get_too_many_attempts_msg(){

	return new too_many_attempts_msg;
}
eject_card* AF3::get_eject_card(){

	return new eject_card;
}