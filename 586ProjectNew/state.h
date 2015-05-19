//state.h
//use the state pattern
//state classes: idle, check_pin, ready, locked, overdrawn
#include "op.h"

#ifndef state_H_H_
#define state_H_H_
class MDA_EFSM;
class state{
public:
	op *operations;                     //op pointer
	int attempts;                       
	virtual void card(){};              //abstract methods
	virtual void IncorrectPin(int max){};
	virtual void CorrectPinBelowMin(){};
	virtual void CorrectPinAboveMin(){};
	virtual void deposit(){};
	virtual void DepositAboveMin(){};
	virtual void DepositBelowMin(){};
	virtual void exit(){};
	virtual void balance(){};
	virtual void WithdrawAboveMin(){};
	virtual void WithdrawBelowMin(){};
	virtual void lock(){};
	virtual void unlockAboveMin(){};
	virtual void unlockBelowMin(){};
};

class idle :public state{           //idle class 
public:
	//idle(MDA_EFSM mda,op o);
	void card();
};
class check_pin :public state{       //check_pin class
public:
	//check_pin();
	void IncorrectPin(int max);
	void CorrectPinAboveMin();
	void CorrectPinBelowMin();

};
class ready :public state{          //ready class
public:
	//ready();
	void WithdrawAboveMin();        //implement some methods 
	void DepositAboveMin();
	void balance();
	void lock();
	void exit();
	void WithdrawBelowMin();

};
class locked :public state{         //locked class
public:
	//locked();
	void unlockAboveMin();
	void unlockBelowMin();
};
class overdrawn :public state{       //overdrawn class
public:
	//overdrawn();
	void DepositBelowMin();
	void balance();
	void lock();
	void DepositAboveMin();
	void exit();
};
#endif