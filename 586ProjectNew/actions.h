//actions.h
//use strategy pattern
//part of abstract factory pattern
#include "DataStructure.h"
#ifndef actions_H_H_
#define actions_H_H_
class store_pin{                     //store_pin base class
public:
	virtual void storePin(DataStructure *ds)=0;
	//virtual void set_ds(DataStructure &d){};
};
class store_balance{                 //store_balance base class
public:
	virtual void storeBalance(DataStructure *ds)=0;
	//virtual void set_ds(DataStructure &d){};
};
class prompt_for_PIN{                //prompt_for_PIN class
public:
	prompt_for_PIN();
	~prompt_for_PIN();
	void promptForPin();
};
class display_menu{                  //display menu class
public:
	display_menu();
	~display_menu();
	void displayMenu();
};
class incorrect_pin_msg{              //incorrect_pin_msg class
public:
	incorrect_pin_msg();
	~incorrect_pin_msg();
	void incorrectPinMsg();
};
class too_many_attempts_msg{          //too_many_attempts_msg class
public:
	too_many_attempts_msg();
	~too_many_attempts_msg();
	void tooManyAttemptsMsg();
};
class make_deposit{                   //make_deposit base class
public:
	virtual void makeDeposit(DataStructure *ds)=0;
	//virtual void set_ds(DataStructure &d){};
};
class make_withdraw{                  //make_withdraw base class
public:
	virtual void makeWithdraw(DataStructure *ds)=0;
	//virtual void set_ds(DataStructure &d){};
};

class penalty{                        //penalty base class
public:
	virtual void Penalty(DataStructure *ds)=0;
	//virtual void set_ds(DataStructure &d){};
};
class eject_card{                     //////////eject_card class
private:
	//DataStructure &ds;
public:
	eject_card();
	~eject_card();
	void ejectCard(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class display_balance{                 //display_balance base class
public:
	virtual void displayBalance(DataStructure *ds)=0;
	//virtual void set_ds(DataStructure &d){};
};
class store_pin_1:public store_pin{     //store_pin  for ATM1 
private:
	//DataStructure &ds;
public:
	store_pin_1();
	~store_pin_1();
	void storePin(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class store_pin_2 :public store_pin{     //store_pin for ATM2,3 
private:
	//DataStructure &ds;
public:
	store_pin_2();
	~store_pin_2();
	void storePin(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class store_balance_1 :public store_balance{     //Store_balance for ATM1,3
private:
	//DataStructure &ds;
public:
	store_balance_1();
	~store_balance_1();
	void storeBalance(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class store_balance_2 :public store_balance{      //store_balance for ATM2
private:
	//DataStructure &ds;
public:
	store_balance_2();
	~store_balance_2();
	void storeBalance(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class make_deposit_1 :public make_deposit{      //make_deposit for ATM1,3
private:
	//DataStructure &ds;
public:
	make_deposit_1();
	~make_deposit_1();
	void makeDeposit(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class make_deposit_2 :public make_deposit{       //make_deposit for ATM2
private:
	//DataStructure &ds;
public:
	make_deposit_2();
	~make_deposit_2();
	void makeDeposit(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class make_withdraw_1 :public make_withdraw{      //make_withdraw for ATM1,3
private:
	//DataStructure &ds;
public:
	make_withdraw_1();
	~make_withdraw_1();
	void makeWithdraw(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class make_withdraw_2 :public make_withdraw{       //make_withdraw for ATM2
private:
	//DataStructure &ds;
public:
	make_withdraw_2();
	~make_withdraw_2();
	void makeWithdraw(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class penalty_1:public penalty{                    //penalty for ATM1
private:
	//DataStructure &ds;
public:
	penalty_1();
	~penalty_1();
	void Penalty(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class penalty_2 :public penalty{                    //penalty for ATM2
private:
	//DataStructure &ds;
public:
	penalty_2();
	~penalty_2();
	void Penalty(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class penalty_3 :public penalty{                    //penalty for ATM3
private:
	//DataStructure &ds;
public:
	penalty_3();
	~penalty_3();
	void Penalty(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class display_balance_1:public display_balance{      //display_balance for ATM1,3
private:
	//DataStructure &ds;
public:
	display_balance_1();
	~display_balance_1();
	void  displayBalance(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
class display_balance_2 :public display_balance{      //display_balance for ATM2
private:
	//DataStructure &ds;
public:
	display_balance_2();
	~display_balance_2();
	void displayBalance(DataStructure *ds);
	//void set_ds(DataStructure &d);
};
#endif