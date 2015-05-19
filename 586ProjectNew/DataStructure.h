//DataStructure.h
//store the data

#include<string>
using namespace std;
#ifndef DataStructure_H_H_
#define DataStructure_H_H_
class DataStructure{                      //base class
public:
	virtual int get_temp_x()=0;            //abstract methods
	virtual int get_temp_y()=0;
	virtual void set_temp_x(int x)=0;
	virtual string get_temp_string_y()=0;
	virtual float get_temp_float_x()=0;
	virtual void set_temp_x(float x)=0;
	virtual void set_temp_y(int y)=0;
	virtual int get_temp_d()=0;
	virtual void set_temp_d(int d)=0;
	virtual int get_b()=0;
	virtual float get_float_b()=0;
	virtual void set_b(int balance)=0;
	virtual void set_b(float balance)=0;
	virtual string get_string_pn()=0;
	virtual void set_pn(string pin)=0;
	virtual int get_temp_w()=0;
	virtual void set_temp_w(int w)=0;
	virtual int get_pn()=0;
	virtual void set_pn(int pin)=0;   //
	virtual void set_temp_float_w(float w)=0;
	virtual float get_temp_float_w()=0;
	virtual void set_string_pn(string pin)=0;
	virtual void set_temp_string_y(string y)=0;
	virtual void set_temp_float_d(float d)=0;
	virtual float get_temp_float_d()=0;
};

//DataStructure *dataStructure;
//*dataStructure = new DataStore1;

class DataStore1 :public DataStructure{         //DataStore1
private:
	int temp_x;                                 //temporary x
	string temp_y;                              //temporary y
	int temp_d;                                 //temporary d
	int b;                                      //balance
	string pn;                                  //pin
	int temp_w;                                 //temporary w
	//int penalty = 10;
public:
	DataStore1(); 
	~DataStore1();
	int get_temp_x();                           //get temp_x
	void set_temp_x(int x);                     //set temp_x
	string get_temp_string_y();                 //get temp_y
	void set_temp_string_y(string y);           //set temp_y
	int get_temp_d();                           //get temp_d
	void set_temp_d(int d);                     //set temp_d
	int get_b();                                //get balance
	void set_b(int balance);                    //set balance
	string get_string_pn();                     //get pn
	void set_string_pn(string pin);             //set pn
	int get_temp_w();                           //get temp_w
	void set_temp_w(int w);                     //set temp_w
	int get_temp_y();                           //pure virtual methods must be implemented
	float get_temp_float_x();
	float get_float_b();
	float get_temp_float_d();
	float get_temp_float_w();
	int get_pn();
	void set_temp_float_d(float d){}
	void set_temp_x(float x){}
	void set_temp_y(int y){}
	void set_b(float balance){}
	void set_pn(string pin){}
	void set_pn(int pin){}
	void set_temp_float_w(float w){}
};
class DataStore2:public DataStructure{          //DataStore2
private:
	float temp_x;
	int temp_y;
	float temp_d;
	float temp_w;
	float b2;
	int pn;
	//float penalty = 20;
public:
	DataStore2();
	~DataStore2();
	float get_temp_float_x();
	void set_temp_x(float x);
	int get_temp_y();
	void set_temp_y(int y);
	float get_temp_float_d();
	void set_temp_float_d(float d);
	float get_temp_float_w();
	void set_temp_float_w(float w);
	float get_float_b();
	void set_b(float balance);
	int get_pn();
	void set_pn(int pin);
	string get_temp_string_y();
	int get_temp_x();
	int get_temp_d();
	int get_b();
	string get_string_pn();
	int get_temp_w();
	void set_temp_x(int x){}
	void set_temp_d(int d){}
	void set_b(int balance){}
	void set_pn(string pin){}
	void set_temp_w(int w){}
	void set_string_pn(string pin){}
	void set_temp_string_y(string y){}
};
class DataStore3 :public DataStructure{         //DataStore3
private:
	int temp_x;
	int temp_y;
	int temp_d;
	int temp_w;
	int b;
	int pn;
	//int penalty = 0;
public:
	DataStore3();
	~DataStore3();
	int get_temp_x();
	void set_temp_x(int x);
	int get_temp_y();
	void set_temp_y(int y);
	int get_temp_d();
	void set_temp_d(int d);
	int get_temp_w();
	void set_temp_w(int w);
	int get_b();
	void set_b(int balance);
	int get_pn();
	void set_pn(int pin);
	string get_temp_string_y();
	float get_temp_float_x();
	float get_float_b();
	string get_string_pn();
	float get_temp_float_w();
	float get_temp_float_d();
	void set_temp_float_d(float d){}
	void set_temp_x(float x){}
	void set_b(float balance){}
	void set_pn(string pin){}
	void set_temp_float_w(float w){}
	void set_string_pn(string pin){}
	void set_temp_string_y(string y){}
};
#endif