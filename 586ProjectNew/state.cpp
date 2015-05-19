//state.cpp
//implement methods in state.h

#include "state.h"
#include "MDA_EFSM.h"
#include <iostream>
void idle::card(){                           //card() method
	attempts=0;
	operations->store_pin1();
	operations->store_balance1();
	operations->prompt_for_PIN1();
}
void check_pin::IncorrectPin(int max){         //IncorrectPin method
	if (attempts < max){
		operations->incorrect_pin_msg1();
		attempts=attempts + 1;
	}
	else{
		operations->incorrect_pin_msg1();
		operations->too_many_attempts_msg1();
		operations->eject_card1();
	}
}
void check_pin::CorrectPinBelowMin(){
	operations->display_menu1();            //invoke display_munu method
}
void check_pin::CorrectPinAboveMin(){
	operations->display_menu1();   
}
void ready::WithdrawAboveMin(){
	operations->MakeWithdraw1();            //invoke makewithdraw method
}
void ready::DepositAboveMin(){
	operations->MakeDeposit1();             //invoke makedeposit method
}
void ready::balance(){
	operations->DisplayBalance1();
}
void ready::lock(){
}
void ready::exit(){
	operations->eject_card1();
}
void ready::WithdrawBelowMin(){
	operations->MakeWithdraw1();
	operations->Penalty1();              //invoke op::penalty()
}
void locked::unlockAboveMin(){
}
void locked::unlockBelowMin(){
}
void overdrawn::DepositBelowMin(){
	operations->MakeDeposit1();
	operations->Penalty1();
}
void overdrawn::balance(){                //invoke displayBalance in op
	operations->DisplayBalance1();
}
void overdrawn::lock(){
}
void overdrawn::DepositAboveMin(){
	operations->MakeDeposit1();           //invoke displayBalance in op
}
void overdrawn::exit(){
	operations->eject_card1();
}