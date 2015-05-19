//op.cpp

#include "op.h"
#include<iostream>

void op::store_pin1(){                //implement store_pin1 method
	p1->storePin(ds);                   //invoke storePin() in p1
}
void op::store_balance1(){
	p2->storeBalance(ds);               //p2->storeBalance();
}
void op::prompt_for_PIN1(){
	p3->promptForPin();               //use the promptForPin method in p3
}
void op::display_menu1(){
	p4->displayMenu();
}
void op::incorrect_pin_msg1(){
	p5->incorrectPinMsg();
}
void op::too_many_attempts_msg1(){
	p6->tooManyAttemptsMsg();
}
void op::MakeDeposit1(){
	p7->makeDeposit(ds);
}
void op::MakeWithdraw1(){
	p8->makeWithdraw(ds);
}
void op::Penalty1(){
	p9->Penalty(ds);
}
void op::eject_card1(){
	p10->ejectCard(ds);
}
void op::DisplayBalance1(){
	p11->displayBalance(ds);
}
void op::create1(){}
void op::initialize(Abstract_Factory *a){            //initialize the pointers 
	p1 = (store_pin *)(a->get_store_pin());
	p2 = (store_balance *)(a->get_store_balance());
	p3 = (prompt_for_PIN *)(a->get_prompt_for_PIN());
	p4 = (display_menu *)(a->get_display_menu());
	p5 = (incorrect_pin_msg *)(a->get_incorrect_pin_msg());
	p6 = (too_many_attempts_msg *)(a->get_too_many_attempts_msg());
	p7 = (make_deposit *)(a->get_make_deposit());
	p8 = (make_withdraw *)(a->get_make_withdraw());
	p9 = (penalty *)(a->get_penalty());
	p10 = (eject_card *)(a->get_eject_card());
	p11 = (display_balance *)(a->get_display_balance());
}

void op::set_ds(DataStructure &d){                  //set DataStructure pointer
	ds = &d;
}