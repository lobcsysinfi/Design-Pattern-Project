//MDA_EFSM.cpp
//implement the methods in MDA_EFSM
#include "MDA_EFSM.h"
#include <iostream>

MDA_EFSM::MDA_EFSM(int att){
	statenum = att;                   
}
void MDA_EFSM::create(){}
void MDA_EFSM::card(){             //card method
	LS[statenum]->card();      //invoke the card() method in state class
	statenum = 1;              //change state number
}
void MDA_EFSM::IncorectPin(int max){
	LS[statenum]->IncorrectPin(max);
	if (s->attempts == max){     //if attempts==max    return to idle state
		statenum=0; 
	}
}
void MDA_EFSM::CorrectPinBelowMin(){

	LS[statenum]->CorrectPinBelowMin();    
	statenum = 4;                 //change to overdrawn state

}
void MDA_EFSM::CorrectPinAboveMin(){
	LS[statenum]->CorrectPinAboveMin();
	statenum = 2;                 //change to ready state
}

void MDA_EFSM::DepositAboveMin(){
	LS[statenum]->DepositAboveMin();
	statenum = 2;

}
void MDA_EFSM::DepositBelowMin(){
	LS[statenum]->DepositBelowMin();
	statenum=4;
}
void MDA_EFSM::exit(){
	LS[statenum]->exit();
	statenum = 0;
}
void MDA_EFSM::balance(){
	LS[statenum]->balance();
}
void MDA_EFSM::WithdrawAboveMin(){
	LS[statenum]->WithdrawAboveMin();
	statenum=2;
}
void MDA_EFSM::WithdrawBelowMin(){
	LS[statenum]->WithdrawBelowMin();
	statenum = 4;
}
void MDA_EFSM::lock(){
	LS[statenum]->lock();
	statenum=3;
}
void MDA_EFSM::unlockAboveMin(){
	LS[statenum]->unlockAboveMin();
	statenum=2;
}
void MDA_EFSM::unlockBelowMin(){
	LS[statenum]->unlockBelowMin();
	statenum = 4;
}
