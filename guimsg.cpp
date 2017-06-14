/*
 * guimsg.cpp
 *
 *  Created on: Jun 13, 2017
 *      Author: mowais
 */

#include "guimsg.hpp"

#if defined ___LINUX___
#include "gtk_msg.hpp"
#elif defined ___WINDOWS___
#include "windows.h"
#endif



guimsg::message::message(){
	//Default Constructor
};

guimsg::message::message(std::string title, std::string content, msgType type){
	//Full Constructor
	this->title = title;
	this->content = content;
	this->type = type;
};

guimsg::message::message(std::string content){
	//One argument Constructor
	this->content = content;
};


int guimsg::message::show(){
	//call platform specific implementation
	return msgShow(this);
};





