/*
 * CBLinuxProject.h
 *
 *  Created on: 28/12/2011
 *      Author: arturo
 */

#pragma once

#include "baseProject.h"

class CBWinProject: public baseProject  {
public:
	CBWinProject(std::string target):baseProject(target){};

	bool createProjectFile();
	bool loadProjectFile();
	bool saveProjectFile();

	void addSrc(const fs::path & srcName, const fs::path & folder, SrcType type=DEFAULT);
	void addInclude(std::string includeName);
	void addLibrary(const LibraryBinary & lib);

//	std::string getName();
//	fs::path getPath();

	static std::string LOG_NAME;

private:

};
