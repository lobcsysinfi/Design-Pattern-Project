//Abstract_Factory.h
//use the abstract factory pattern
#include "actions.h"
#include "DataStructure.h"
#ifndef Abstract_Factory_H_H_
#define Abstract_Factory_H_H_
class Abstract_Factory{                      //abstract class
public:
	virtual store_pin* get_store_pin()=0;
	virtual store_balance* get_store_balance()=0;
	virtual make_deposit* get_make_deposit()=0;
	virtual make_withdraw* get_make_withdraw()=0;
	virtual penalty* get_penalty()=0;
	virtual display_balance* get_display_balance()=0;
	virtual prompt_for_PIN* get_prompt_for_PIN()=0;
	virtual display_menu* get_display_menu()=0;
	virtual incorrect_pin_msg* get_incorrect_pin_msg()=0;
	virtual too_many_attempts_msg* get_too_many_attempts_msg()=0;
	virtual eject_card* get_eject_card()=0;
};
class AF1 :public Abstract_Factory{           //AF1 class
private:
	/*DataStructure &ds;                        //DataStructure
	store_pin *a1;                            //action class pointers
	store_balance *a2;
	make_deposit *a3;
	make_withdraw *a4;
	penalty *a5;
	display_balance *a6;
	prompt_for_PIN *a7;
	display_menu *a8;
	incorrect_pin_msg *a9;
	too_many_attempts_msg *a10;
	eject_card *a11;*/
public:
	AF1();
	~AF1();
	store_pin* get_store_pin();               //get action class object
	store_balance* get_store_balance();
	make_deposit* get_make_deposit();
	make_withdraw* get_make_withdraw();
	penalty* get_penalty();
	display_balance* get_display_balance();
	prompt_for_PIN* get_prompt_for_PIN();
	display_menu* get_display_menu();
	incorrect_pin_msg* get_incorrect_pin_msg();
	too_many_attempts_msg* get_too_many_attempts_msg();
	eject_card* get_eject_card();
};
class AF2 :public Abstract_Factory{             //AF2 class
private:
	/*DataStructure &ds;
	store_pin *a1;
	store_balance *a2;
	make_deposit *a3;
	make_withdraw *a4;
	penalty *a5;
	display_balance *a6;
	prompt_for_PIN *a7;
	display_menu *a8;
	incorrect_pin_msg *a9;
	too_many_attempts_msg *a10;
	eject_card *a11;*/
public:
	AF2();
	~AF2();
	store_pin* get_store_pin();
	store_balance* get_store_balance();
	make_deposit* get_make_deposit();
	make_withdraw* get_make_withdraw();
	penalty* get_penalty();
	display_balance* get_display_balance();
	prompt_for_PIN* get_prompt_for_PIN();
	display_menu* get_display_menu();
	incorrect_pin_msg* get_incorrect_pin_msg();
	too_many_attempts_msg* get_too_many_attempts_msg();
	eject_card* get_eject_card();
};
class AF3 :public Abstract_Factory{               //AF3 class
private:
	/*DataStructure &ds;
	store_pin *a1;
	store_balance *a2;
	make_deposit *a3;
	make_withdraw *a4;
	penalty *a5;
	display_balance *a6;
	prompt_for_PIN *a7;
	display_menu *a8;
	incorrect_pin_msg *a9;
	too_many_attempts_msg *a10;
	eject_card *a11;*/
public:
	AF3();
	~AF3();
	store_pin* get_store_pin();
	store_balance* get_store_balance();
	make_deposit* get_make_deposit();
	make_withdraw* get_make_withdraw();
	penalty* get_penalty();
	display_balance* get_display_balance();
	prompt_for_PIN* get_prompt_for_PIN();
	display_menu* get_display_menu();
	incorrect_pin_msg* get_incorrect_pin_msg();
	too_many_attempts_msg* get_too_many_attempts_msg();
	eject_card* get_eject_card();
};
#endif