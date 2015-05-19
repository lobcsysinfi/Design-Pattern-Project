//action.cpp

#include "actions.h"
#include<string>
#include <iostream>
#include<cstdio>
using namespace std;
store_pin_1::store_pin_1(){}
store_pin_2::store_pin_2(){}
store_balance_1::store_balance_1() {}
store_balance_2::store_balance_2() {}

void store_pin_1::storePin(DataStructure *ds){              //implement storePin()
	string s = ds->get_temp_string_y();
	ds->set_string_pn(s);
}
void store_pin_2::storePin(DataStructure *ds){              //implement storePin()
	int s = ds->get_temp_y();
	ds->set_pn(s);
}
void store_balance_1::storeBalance(DataStructure *ds){      //implement storeBalance()
	int s = ds->get_temp_x();
	ds->set_b(s);
}
void store_balance_2::storeBalance(DataStructure *ds){      //implement storeBalance()
	float s = ds->get_temp_float_x();
	//cout << s<<endl;
	ds->set_b(s);

}
prompt_for_PIN::prompt_for_PIN(){}                       //constructors
display_menu::display_menu(){}
incorrect_pin_msg::incorrect_pin_msg(){}
too_many_attempts_msg::too_many_attempts_msg(){}
eject_card::eject_card(){}
make_deposit_1::make_deposit_1(){}
make_deposit_2::make_deposit_2(){}
make_withdraw_1::make_withdraw_1(){}
make_withdraw_2::make_withdraw_2() {}
penalty_1::penalty_1(){}
penalty_2::penalty_2() {}
penalty_3::penalty_3() {}
display_balance_1::display_balance_1() {}
display_balance_2::display_balance_2() {}
void prompt_for_PIN::promptForPin(){                 //implement promptForPin()
	cout << "please input the pin!" << endl;
}

void display_menu::displayMenu(){                   //implement displayMenu()
	cout << "The functions:" << endl;
	cout << "Deposit" << endl;
	cout << "withdraw" << endl;
	cout << "lock" << endl;
	cout << "unlock" << endl;
	cout << "exit" << endl;
}

void incorrect_pin_msg::incorrectPinMsg(){          //implement incorrectPinMsg()
	cout << "incorrect pin!" << endl;
}

void too_many_attempts_msg::tooManyAttemptsMsg(){    //implement tooManyAttemptsMsg()
	cout << "too many attempts!" << endl;
}

void eject_card::ejectCard(DataStructure *ds){                        //implement ejectCard()
	ds->set_b(0);
	ds->set_pn(0);
	cout << "Card has been ejected! return to idle state"<<endl;
}
/*void eject_card::set_ds(DataStructure &d){           
	ds = d;
}*/
void make_deposit_1::makeDeposit(DataStructure *ds){                  //implement makeDeposit()
	int d = ds->get_temp_d();
	int b = ds->get_b();
	ds->set_b( b + d );
	cout << "Make deposit successfully!" << endl;
}
void make_deposit_2::makeDeposit(DataStructure *ds){                   //implement makeDeposit()
	float d = ds->get_temp_float_d();
	float ba = ds->get_float_b();
	//cout << (double)d<<endl;
	//cout << (double)ba << endl;
	ds->set_b( float(ba + d));
	cout << "Make deposit successfully!" << endl;
}
void make_withdraw_1::makeWithdraw(DataStructure *ds){                 //implement makeWithdraw()
	//cout<<"slkdvjnwiojhofwif"<<endl;
	int ba=ds->get_b();
	int w=ds->get_temp_w();
	ds->set_b( ba - w );
	cout << "Make withdraw successfully!" << endl;
}
void make_withdraw_2::makeWithdraw(DataStructure *ds){
	float ba=ds->get_float_b();
	float w=ds->get_temp_float_w();
	ds->set_b( ba - w );
	cout << "Make withdraw successfully!" << endl;
}
void penalty_1::Penalty(DataStructure *ds){                           //implement Penalty()
	ds->set_b(ds->get_b()-10);
}
void penalty_2::Penalty(DataStructure *ds){
	ds->set_b(ds->get_float_b() - 20);
}
void penalty_3::Penalty(DataStructure *ds){
	ds->set_b(ds->get_b() - 0);
}
/*void store_balance_1::set_ds(DataStructure &d){
	ds = d;
}
void store_balance_2::set_ds(DataStructure &d){
	ds = d;
}
void store_pin_1::set_ds(DataStructure &d){
	ds = d;
}
void store_pin_2::set_ds(DataStructure &d){
	ds = d;
}
void penalty_1::set_ds(DataStructure &d){
	ds = d;
}
void penalty_2::set_ds(DataStructure &d){
	ds = d;
}
void penalty_3::set_ds(DataStructure &d){
	ds = d;
}
void make_withdraw_1::set_ds(DataStructure &d){
	ds = d;
}
void make_withdraw_2::set_ds(DataStructure &d){
	ds = d;
}
void make_deposit_1::set_ds(DataStructure &d){
	ds = d;
}
void make_deposit_2::set_ds(DataStructure &d){
	ds = d;
}
void display_balance_1::set_ds(DataStructure &d){
	ds = d;
}
void display_balance_2::set_ds(DataStructure &d){
	ds = d;
}*/
void display_balance_1::displayBalance(DataStructure *ds){           //implement displayBalance()
	cout << "Your balance is " << endl;
	cout << ds->get_b() << endl;
}
void display_balance_2::displayBalance(DataStructure *ds){           //implement displayBalance()
	cout << "Your balance is " << endl;
	cout << ds->get_float_b() << endl;
}