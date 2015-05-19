#include "state.h"
using namespace std;
#ifndef MDA_EFSM_H_H_
#define MDA_EFSM_H_H_

class MDA_EFSM{             
public: 
	state *s;                 //state pointer
	state *LS[5];             //state pointer list
	MDA_EFSM(int statenum);
	void create();
	void card();
	void IncorectPin(int max);
	void CorrectPinBelowMin();
	void CorrectPinAboveMin();
	//void deposit();
	void DepositAboveMin();
	void DepositBelowMin();
	void exit();
	void balance();
	void WithdrawAboveMin();
	void WithdrawBelowMin();
	void lock();
	void unlockAboveMin();
	void unlockBelowMin();
	int statenum;               //current state number
};
#endif