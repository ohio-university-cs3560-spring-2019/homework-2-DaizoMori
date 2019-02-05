/*****

Daizo Mori
CS3560
second.cc
Description : this is the second file that function is written.  In here, input_output function is written.

******/

#include<string>
#include "header.h"

void input_output(std::string &input, std::string &target, std::string &output){

	size_t position = input.find(target);
	size_t length = target.length();

	while(position != std::string::npos){
		input.replace(position, length, output);
		position = input.find(target);
	}

}