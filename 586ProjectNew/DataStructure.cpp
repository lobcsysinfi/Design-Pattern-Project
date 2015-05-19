//DataStructure.cpp
//implement DataStructure.h
//get data or set data methods
#include "DataStructure.h"
DataStore1::DataStore1(){                

}
DataStore2::DataStore2(){
	b2 = 0;
}
DataStore3::DataStore3(){

}
int DataStore1::get_temp_x(){             //get_temp_x method
	return temp_x;                        //return temp_x
}
void DataStore1::set_temp_x(int x){
	temp_x = x;
}
string DataStore1::get_temp_string_y(){
	return temp_y;
}
void DataStore1::set_temp_string_y(string y){
	temp_y = y;
}
int DataStore1::get_temp_d(){
	return temp_d;
}
void DataStore1::set_temp_d(int d){
	temp_d = d;
}
int DataStore1::get_b(){
	return b;
}
void DataStore1::set_b(int balance){
	b = balance;
}
string DataStore1::get_string_pn(){
	return pn;
}
void DataStore1::set_string_pn(string pin){
	pn = pin;
}
int DataStore1::get_temp_w(){
	return temp_w;
}
void DataStore1::set_temp_w(int w){
	temp_w = w;
}
float DataStore1::get_temp_float_x(){ return 0; }
float DataStore1::get_float_b(){ return 0; }
float DataStore1::get_temp_float_d(){ return 0; }
float DataStore1::get_temp_float_w(){ return 0; }
int DataStore1::get_temp_y(){ return 0; }
int DataStore1::get_pn(){ return 0; }
float DataStore2::get_temp_float_x(){
	return temp_x;
}
void DataStore2::set_temp_x(float x){
	temp_x = x;
}
int DataStore2::get_temp_y(){
	return temp_y;
}
void DataStore2::set_temp_y(int y){
	temp_y = y;
}
float DataStore2::get_temp_float_d(){
	return temp_d;
}
void DataStore2::set_temp_float_d(float d){
	temp_d = d;
}
float DataStore2::get_temp_float_w(){
	return temp_w;
}
void DataStore2::set_temp_float_w(float w){
	temp_w = w;
}
float DataStore2::get_float_b(){
	return b2;
}
void DataStore2::set_b(float balance){
	b2 = balance;
}
int DataStore2::get_pn(){
	return pn;
}
void DataStore2::set_pn(int pin){
	pn = pin;
}
string DataStore2::get_temp_string_y(){ return 0; };
int DataStore2::get_temp_x(){ return 0; };
int DataStore2::get_temp_d(){ return 0; };
int DataStore2::get_b(){ return 0; };
string DataStore2::get_string_pn(){ return 0; };
int DataStore2::get_temp_w(){ return 0; };
int DataStore3::get_temp_x(){
	return temp_x;
}
void DataStore3::set_temp_x(int x){
	temp_x = x;
}
int DataStore3::get_temp_y(){
	return temp_y;
}
void DataStore3::set_temp_y(int y){
	temp_y = y;
}
int DataStore3::get_temp_d(){
	return temp_d;
}
void DataStore3::set_temp_d(int d){
	temp_d = d;
}
int DataStore3::get_temp_w(){
	return temp_w;
}
void DataStore3::set_temp_w(int w){
	temp_w = w;
}
int DataStore3::get_b(){
	return b;
}
void DataStore3::set_b(int balance){
	b = balance;
}
int DataStore3::get_pn(){
	return pn;
}
void DataStore3::set_pn(int pin){
	pn = pin;
}
string DataStore3::get_temp_string_y(){ return 0; };
float DataStore3::get_temp_float_x(){ return 0; };
float DataStore3::get_float_b(){ return 0; };
string DataStore3::get_string_pn(){ return 0; };
float DataStore3::get_temp_float_w(){ return 0; };
float DataStore3::get_temp_float_d(){ return 0; };