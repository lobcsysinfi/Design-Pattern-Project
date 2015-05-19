//op.h
//output processor
#include "Abstract_Factory.h"
#include "actions.h"
#include "DataStructure.h"
#ifndef op_H_H_
#define op_H_H_
class op{
private:
	DataStructure *ds;               //DataStructure pointer
public:
	store_pin *p1;                   //action1
	store_balance *p2;               //action2
	prompt_for_PIN *p3;              //action3
	display_menu *p4;                //action4
	incorrect_pin_msg *p5;           //action5
	too_many_attempts_msg *p6;       //action6
	make_deposit *p7;                //action7
	make_withdraw *p8;               //action8
	penalty *p9;                     //action9
	eject_card *p10;                 //action10
	display_balance *p11;            //action11
	void store_pin1();               //methods
	void store_balance1();
	void prompt_for_PIN1();
	void display_menu1();
	void incorrect_pin_msg1();
	void too_many_attempts_msg1();
	void MakeDeposit1();
	void MakeWithdraw1();
	void Penalty1();
	void eject_card1();
	void DisplayBalance1();
	void create1();
	void initialize(Abstract_Factory *a);
	void set_ds(DataStructure &d);
	//void set_actions_ds(DataStructure &d);
};
#endif