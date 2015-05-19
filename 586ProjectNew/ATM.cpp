//ATM.cpp      implement ATM classes
//Input processor
#include <stdio.h> 
#include<iostream>
#include "ATM.h"

using namespace std;
ATM1::ATM1(){}
ATM1::~ATM1(){}
void ATM1::create(){          //implement ATM1 methods
	m->create();
}
void ATM1::card(int x,string y){
	ds->set_temp_x(x);               //store x in temporary data store
	ds->set_temp_string_y(y);        //store y in temporary data store
	m->card();                       //invoke the method in MDA_EFSM
}
void ATM1::deposit(int d){
	ds->set_temp_d(d);
	int b = ds->get_b();
	if (b + d >= 1000){
		m->DepositAboveMin();        //invoke the method in MDA_EFSM
	}
	else{
		m->DepositBelowMin();
	}
}
void ATM1::withdraw(int w){
	ds->set_temp_w(w);
	int b = ds->get_b();
	if (( b - w) >=1000){
		m->WithdrawAboveMin();
	}
	else{
		if (b - w > 0){
			m->WithdrawBelowMin();
		}
	}
	
}
void ATM1::pin(string x){
	string pn = ds->get_string_pn();
	if (x == pn){                           //if pin is correct
		if (ds->get_b() < 1000){            //if balance is smaller than 1000
			m->CorrectPinBelowMin();        
		}
		else{                               //balance is not smaller than 1000
			m->CorrectPinAboveMin();
		}
	}
	else{
		m->IncorectPin(3);
	}
}
void ATM1::balance(){
	m->balance();
}
void ATM1::lock(string x){
	string pn = ds->get_string_pn();
	if (x == pn){                           //if pin is correct
		m->lock();                          //lock
	}
}
void ATM1::unlock(string x){
	string pn = ds->get_string_pn();
	if (x == pn){
		if (ds->get_b() < 1000){
			m->unlockBelowMin();
		}
		else{
			m->unlockAboveMin();
		}
	}
}
void ATM1::exit(){
	m->exit();
}

ATM2::ATM2(){}
ATM2::~ATM2(){}
void ATM2::create(){                         //implement ATM2 methods
	m->create();
}
void ATM2::CARD(float x, int y){            
	ds->set_temp_x(x);                       //store x in temp data store
	ds->set_temp_y(y);                       //store y in temp data store
	m->card();
}
void ATM2::PIN(int x){
	int pn = ds->get_pn();
	if (x == pn){
		if (ds->get_float_b() < 500){
			m->CorrectPinBelowMin();
		}
		else{
			m->CorrectPinAboveMin();
		}
	}
	else{
		m->IncorectPin(2);
	}
}
void ATM2::DEPOSIT(float d){
	ds->set_temp_float_d(d);
	float b = ds->get_float_b();
	if ( b + d < 500){
		m->DepositBelowMin();
	}
	else{
		m->DepositAboveMin();
	}
}
void ATM2::WITHDRAW(float w){
	ds->set_temp_float_w(w);
	float b = ds->get_float_b();
	if ( b - w >= 500){
		m->WithdrawAboveMin();
	}
	else{
		if ( b - w > 0){
			m->WithdrawBelowMin();
		}
	}
}
void ATM2::BALANCE(){
	m->balance();
}
void ATM2::EXIT(){
	m->exit();
}
ATM3::ATM3(){}
ATM3::~ATM3(){}
void ATM3::create(){                     //ATM3 Methods implementation
	m->create();
}
void ATM3::card(int x, int y){
	ds->set_temp_x(x);                   //store x in temp data store
	ds->set_temp_y(y);                   //store y in temp data store
	m->card();
}
void ATM3::pin(int x){
	int pn = ds->get_pn();
	if ( pn == x){
		if (ds->get_b() < 100){          //if balance is smaller than 100
			m->CorrectPinBelowMin(); 
		}
		else{
			m->CorrectPinAboveMin();
		}
	}
	else{
		m->IncorectPin(2);               //pin is wrong
	}
}
void ATM3::deposit(int d){               
	ds->set_temp_d(d);
	int b = ds->get_b();
	if ( b + d < 100){
		m->DepositBelowMin();
	}
	else{
		m->DepositAboveMin();
	}
}void ATM3::withdraw(int w){
	ds->set_temp_w(w);
	int b = ds->get_b();
	if ( b - w >= 100){
		m->WithdrawAboveMin();
	}
	else{
		if (b - w > 0){
			m->WithdrawBelowMin();
		}
	}
}
void ATM3::lock(){
	m->lock();
}
void ATM3::unlock(){
	int b = ds->get_b();
	if ( b < 100){
		m->unlockBelowMin();
	}
	else{
		m->unlockAboveMin();
	}
}
void ATM3::exit(){
	m->exit();
}
void ATM3::balance(){
	m->balance();
}