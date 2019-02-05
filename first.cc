/*****

Daizo Mori
CS3560
first.cc
Description:This is the main file of codes.

******/

#include<iostream>
#include "header.h"
using namespace std;


int main(int argc, char const *argv[]){
	string i;
	string target = argv[1];
	string output = argv[2];

	getline(cin, i);

	while(!cin.eof()){
		input_output(i, target, output);
		cout << i << endl;
		getline(cin, i);
	}
	return 0;
}