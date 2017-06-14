/*
 * gtk_msg.cpp
 *
 *  Created on: Jun 13, 2017
 *      Author: mowais
 */


#include "gtk_msg.hpp"
#include "guimsg.hpp"
#include "gtk/gtk.h"


int msgShow(guimsg::message * msg){

	GtkMessageType gtk_msgtype;
	GtkButtonsType gtk_btntype;
	GtkDialogFlags gtk_flags = GTK_DIALOG_MODAL;

	switch( msg->getType() ){
	case guimsg::msgType::INFO:
		gtk_msgtype = GTK_MESSAGE_INFO;
		break;
	case guimsg::msgType::WARNING:
		gtk_msgtype = GTK_MESSAGE_WARNING;
		break;
	case guimsg::msgType::ERROR:
		gtk_msgtype = GTK_MESSAGE_ERROR;
		break;
	case guimsg::msgType::QUESTION:
		gtk_msgtype = GTK_MESSAGE_QUESTION;
		break;
	}

	switch( msg->getBtntype() ){
	case guimsg::buttonType::OK:
		gtk_btntype = GTK_BUTTONS_OK;
		break;
	case guimsg::buttonType::CANCEL:
		gtk_btntype = GTK_BUTTONS_CANCEL;
		break;
	case guimsg::buttonType::OKCANCEL:
		gtk_btntype = GTK_BUTTONS_OK_CANCEL;
		break;
	case guimsg::buttonType::YESNO:
		gtk_btntype = GTK_BUTTONS_YES_NO;
		break;
	default:
		gtk_btntype = GTK_BUTTONS_NONE;
	}

	GtkWidget *message_dialog;
	message_dialog = gtk_message_dialog_new	( 	NULL,
												gtk_flags,
												gtk_msgtype,
												gtk_btntype,
												NULL
											);
	gtk_widget_show_all (message_dialog);

	return 0;
};

