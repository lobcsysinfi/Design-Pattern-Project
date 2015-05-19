#include "ATM.h"
#include<iostream>
#include<stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include "DataStructure.h"
#include "Abstract_Factory.h"
#include "op.h"
#include "MDA_EFSM.h"
#include "state.h"
#include "actions.h"
using namespace std;
void main(){
	int input;
	cout << "  1. ATM-1" << endl;
	cout << "  2. ATM-2" << endl;
	cout << "  3. ATM-3" << endl;
	cout << "Select ATM:";
	cin >> input;
	if (input == 1){
		ATM1 atm1=ATM1();
		DataStructure *store1 = new DataStore1();
		AF1 AF=AF1();
		op p=op();
		p.set_ds(*store1);
		p.initialize(&AF);
		//p.set_actions_ds(store1);
		atm1.ds = store1;
		idle s1 = idle();
		check_pin s2 = check_pin();
		ready s3 = ready();
		locked s4 = locked();
		overdrawn s5 = overdrawn();
		s1.operations = &p;
		s2.operations = &p;
		s3.operations = &p;
		s4.operations = &p;
		s5.operations = &p;
		MDA_EFSM mda = MDA_EFSM(0);
		mda.s = &s1;
		mda.LS[0] = &s1;
		mda.LS[1] = &s2;
		mda.LS[2] = &s3;
		mda.LS[3] = &s4;
		mda.LS[4] = &s5;
		atm1.m = &mda;
		cout << "          ATM-1" << endl;
		cout << "                  MENU of Operations" << endl;
		cout << "          1. card(int, string)" << endl;
		cout << "          2. pin(string)" << endl;
		cout << "          3. deposit(int)" << endl;
		cout << "          4. withdraw(int)" << endl;
		cout << "          5. balance()" << endl;
		cout << "          6. exit()" << endl;
		cout << "          7. lock()" << endl;
		cout << "          8. unlock()" << endl;
		cout << "          q. Quit the demo program" << endl;
		cout << "           ATM-1 Execution" << endl;
		char ch = '1';
		int x,d,w;
		string y;
		string pin1,lockpin,unlockpin;
		while (ch != 'q') {
			cout << "  Select Operation: " << endl;
			cout << "1-card,2-pin,3-deposit,4-withdraw,5-balance,6-exit,7-lock,8-unlock" << endl;
			ch = getchar();
			//getchar();
			switch (ch) {
			case '1':  //card
				cout << "  Operation:  card(int x, string y)" << endl;
				cout << "  Enter value of the parameter x:" << endl;
				cin >> x;
				cout << "  Enter value of the parameter y:" << endl;
				cin >> y;
				atm1.card(x, y);
				break;

			case '2':  //pin
				cout << "  Operation:  pin(string x)" << endl;
				cout << "  Enter value of the parameter x" << endl;
				cin >> pin1;
				atm1.pin(pin1);
				break;

			case '3':  // deposit
				cout << "  Operation:  deposit(int d)" << endl;
				cout << "  Enter value of the parameter d:" << endl;
				cin >> d;
				atm1.deposit(d);
				break;

			case '4':  // Withdraw
				cout << "  Operation:  withdraw(int w)" << endl;
				cout << "  Enter value of the parameter w:" << endl;
				cin >> w;
				atm1.withdraw(w);
				break;

			case '5':  // Balance
				cout << "  Operation:  balance()" << endl;
				atm1.balance();
				break;

			case '6':  // exit
				cout << "  Operation:  exit()" << endl;
				atm1.exit();
				break;

			case '7':  // lock
				cout << "  Operation:  lock()" << endl;
				cout << "enter pin:";
				cin >> lockpin;
				atm1.lock(lockpin);
				break;

			case '8':  // unlock
				cout << "  Operation:  unlock()" << endl;
				cout << "enter pin:";
				cin >> unlockpin;
				atm1.unlock(unlockpin);
				break;


			};// endswitch
		}; //endwhile
	}
	//system("pause");
	if(input==2){
		ATM2 atm2=ATM2();
		DataStructure *store2 = new DataStore2();
		AF2 AF=AF2();
		op p=op();
		p.set_ds(*store2);
		p.initialize(&AF);
		//p.set_actions_ds(store1);
		atm2.ds = store2;
		idle s1 = idle();
		check_pin s2 = check_pin();
		ready s3 = ready();
		locked s4 = locked();
		overdrawn s5 = overdrawn();
		s1.operations = &p;
		s2.operations = &p;
		s3.operations = &p;
		s4.operations = &p;
		s5.operations = &p;
		MDA_EFSM mda = MDA_EFSM(0);
		mda.s = &s1;
		mda.LS[0] = &s1;
		mda.LS[1] = &s2;
		mda.LS[2] = &s3;
		mda.LS[3] = &s4;
		mda.LS[4] = &s5;
		atm2.m = &mda;
		cout << "          ATM-2" << endl;
		cout << "                  MENU of Operations" << endl;
		cout << "          1. CARD (float x, int y)" << endl;
		cout << "          2. PIN (int x)" << endl;
		cout << "          3. DEPOSIT (float d)" << endl;
		cout << "          4. WITHDRAW (float w)" << endl;
		cout << "          5. BALANCE ()" << endl;
		cout << "          6. EXIT()" << endl;
		cout << "          q. Quit the demo program" << endl;
		cout << "           ATM-2 Execution" << endl;
		char ch = '1';
		float x, d, w;
		int y;
		int pin1;
		while (ch != 'q') {
			cout << "  Select Operation: " << endl;
			cout << "1-card,2-pin,3-deposit,4-withdraw,5-balance,6-exit" << endl;
			ch = getchar();

			switch (ch) {
			case '1':  //card
				cout << "  Operation:  CARD (float x, int y)" << endl;
				cout << "  Enter value of the parameter x:" << endl;
				cin >> x;
				cout << "  Enter value of the parameter y:" << endl;
				cin >> y;
				atm2.CARD(x, y);
				break;

			case '2':  //pin
				cout << "  Operation:  pin(int x)" << endl;
				cout << "  Enter value of the parameter x" << endl;
				cin >> pin1;
				atm2.PIN(pin1);
				break;

			case '3':  // deposit
				cout << "  Operation:  deposit(float d)" << endl;
				cout << "  Enter value of the parameter d:" << endl;
				cin >> d;
				atm2.DEPOSIT(d);
				break;

			case '4':  // Withdraw
				cout << "  Operation:  withdraw(float w)" << endl;
				cout << "  Enter value of the parameter w:" << endl;
				cin >> w;
				atm2.WITHDRAW(w);
				break;

			case '5':  // Balance
				cout << "  Operation:  balance()" << endl;
				atm2.BALANCE();
				break;

			case '6':  // exit
				cout << "  Operation:  exit()" << endl;
				atm2.EXIT();
				break;

			};// endswitch
		}; //endwhile
	
	}
	if(input==3){
		ATM3 atm3=ATM3();
		DataStructure *store3 = new DataStore3();
		AF3 AF=AF3();
		op p=op();
		p.set_ds(*store3);
		p.initialize(&AF);
		//p.set_actions_ds(store1);
		atm3.ds = store3;
		idle s1 = idle();
		check_pin s2 = check_pin();
		ready s3 = ready();
		locked s4 = locked();
		overdrawn s5 = overdrawn();
		s1.operations = &p;
		s2.operations = &p;
		s3.operations = &p;
		s4.operations = &p;
		s5.operations = &p;
		MDA_EFSM mda = MDA_EFSM(0);
		mda.s = &s1;
		mda.LS[0] = &s1;
		mda.LS[1] = &s2;
		mda.LS[2] = &s3;
		mda.LS[3] = &s4;
		mda.LS[4] = &s5;
		atm3.m = &mda;
		cout << "          ATM-3" << endl;
		cout << "                  MENU of Operations" << endl;
		cout << "          1. card(int, int)" << endl;
		cout << "          2. pin(int)" << endl;
		cout << "          3. deposit(int)" << endl;
		cout << "          4. withdraw(int)" << endl;
		cout << "          5. balance()" << endl;
		cout << "          6. exit()" << endl;
		cout << "          7. lock()" << endl;
		cout << "          8. unlock()" << endl;
		cout << "          q. Quit the demo program" << endl;
		cout << "           ATM-3 Execution" << endl;
		char ch = '1';
		int x, d, w;
		int y;
		int pin1;
		while (ch != 'q') {
			cout << "  Select Operation: " << endl;
			cout << "1-card,2-pin,3-deposit,4-withdraw,5-balance,6-exit,7-lock,8-unlock" << endl;
			ch = getchar();

			switch (ch) {
			case '1':  //card
				cout << "  Operation:  card(int x, int y)" << endl;
				cout << "  Enter value of the parameter x:" << endl;
				cin >> x;
				cout << "  Enter value of the parameter y:" << endl;
				cin >> y;
				atm3.card(x, y);
				break;

			case '2':  //pin
				cout << "  Operation:  pin(int x)" << endl;
				cout << "  Enter value of the parameter x" << endl;
				cin >> pin1;
				atm3.pin(pin1);
				break;

			case '3':  // deposit
				cout << "  Operation:  deposit(int d)" << endl;
				cout << "  Enter value of the parameter d:" << endl;
				cin >> d;
				atm3.deposit(d);
				break;

			case '4':  // Withdraw
				cout << "  Operation:  withdraw(int w)" << endl;
				cout << "  Enter value of the parameter w:" << endl;
				cin >> w;
				atm3.withdraw(w);
				break;

			case '5':  // Balance
				cout << "  Operation:  balance()" << endl;
				atm3.balance();
				break;

			case '6':  // exit
				cout << "  Operation:  exit()" << endl;
				atm3.exit();
				break;

			case '7':  // lock
				cout << "  Operation:  lock()" << endl;
				atm3.lock();
				break;

			case '8':  // unlock
				cout << "  Operation:  unlock()" << endl;
				atm3.unlock();
				break;


			};// endswitch
		}; //endwhile
	}
	else{
		system("pause");
	}
}  