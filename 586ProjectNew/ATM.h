//ATM.h   contains ATM classes

#include <stdio.h>   
#include <string>
#include "MDA_EFSM.h"
#include "DataStructure.h"
using namespace std;
#ifndef ATM_H_H_
#define ATM_H_H_
class ATM1{                               //ATM1
public:
	MDA_EFSM *m;                         //MDA_EFSM pointer
	DataStructure *ds;                   //DataStructure pointer
	void create();                       //ATM1 methods
	void card(int x, string y);
	void deposit(int d);
	void withdraw(int w);
	void pin(string x);
	void exit();
	void balance();
	void lock(string x);
	void unlock(string x);
	ATM1();
	~ATM1();
};

class ATM2{                                //ATM2
public:  
	MDA_EFSM *m;                           //MDA_EFSM pointer
	DataStructure *ds;                     //DataStructure pointer
	void create();                         //ATM2 METHODS
	void CARD(float x, int y);
	void DEPOSIT(float d);
	void WITHDRAW(float w);
	void PIN(int x);
	void EXIT();
	void BALANCE();
	ATM2();
	~ATM2();
};

class ATM3{                                //ATM3
public:
	MDA_EFSM *m;                           //MDA_EFSM pointer
	DataStructure *ds;                     //DataStructure pointer
	void create();                         //ATM3 methods
	void card(int x, int y);
	void deposit(int d);
	void withdraw(int w);
	void pin(int x);
	void exit();
	void balance();
	void lock();
	void unlock();
	ATM3();
	~ATM3();
};
#endif