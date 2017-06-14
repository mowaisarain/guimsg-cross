/*
 * guimsg.hpp
 *
 *  Created on: Jun 13, 2017
 *      Author: mowais
 */

#ifndef GUIMSG_HPP_
#define GUIMSG_HPP_

#include <string>

namespace guimsg{

enum class msgType {
	INFO,
	WARNING,
	QUESTION,
	ERROR
};

enum class buttonType {
	NONE,
	OK,
	CANCEL,
	YESNO,
	OKCANCEL
};

class message{
public:
	message(std::string title, std::string content, msgType type);
	message(std::string content);
	message();



	inline std::string getContent() const {
		return content;
	}

	inline void setContent(std::string content) {
		this->content = content;
	}

	inline std::string getTitle() const {
		return title;
	}

	inline void setTitle(std::string title) {
		this->title = title;
	}

	msgType getType() const {
		return type;
	}

	void setType(msgType type) {
		this->type = type;
	}

	buttonType getBtntype() const {
		return btntype;
	}

	void setBtntype(buttonType btntype = buttonType::NONE) {
		this->btntype = btntype;
	}

	int show();


private:
	std::string title = "Message Title";
	std::string content = "Message Content";
	msgType type = msgType::INFO ;
	buttonType btntype = buttonType::NONE;


};//Class guimsg

}//namespace guimsg




#endif /* GUIMSG_HPP_ */
