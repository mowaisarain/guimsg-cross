/*
 * main.cpp
 *
 *  Created on: Jun 13, 2017
 *      Author: mowais
 */
#include "guimsg.hpp"

using namespace std;


int main()
{
	guimsg::message newMsgBox;
	newMsgBox.setContent("Hello World");
	newMsgBox.setTitle("My Message");
	newMsgBox.setType(guimsg::msgType::INFO);
	newMsgBox.setBtntype(guimsg::buttonType::OK);
	return newMsgBox.show();
}



