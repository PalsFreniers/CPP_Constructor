//
// Created by mscheman on 9/6/24.
//

#ifndef CLASSINFO_H
#define CLASSINFO_H

#include <string>
#include <typeinfo>
#include "AttributeList.h"

class ClassInfo {
	private:
		std::string _name;
		bool _protected;
		AttributeList _attributes;
		void _printHelp();
		void _editAttr();
		void _printAttr();
	public:
		ClassInfo();
		const std::string &getName() const;
		void setName(const std::string &name);
		bool isProtected();
		AttributeList &getAttribute();
		void shellStart();
};


#endif //CLASSINFO_H
