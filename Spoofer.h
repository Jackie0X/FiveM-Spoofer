#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <wchar.h>
#include <tchar.h>
#include <random>
#include <sstream>
#include <thread>
#include <Shlwapi.h>
#include <WinUser.h>
#include <ShlObj.h>


class Spoofing {
	std::uintmax_t files;
	std::uintmax_t ffiles;
public:
	void Initialize();
private:
	int RemoveFiles();
	bool RemoveXboxAuth();
	bool CheckWord(char* filename, char* search);
	void ChangeRegEdit();
	std::string newUUID();
	void GetFiveM();
	void runexe();
	bool GetFolder(std::string& folderpath, const char* szCaption = NULL, HWND hOwner = NULL);
	inline bool exists_test3(const std::string& name);
};
