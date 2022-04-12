#pragma once
#include <Windows.h>
#include <string>
#include <iostream>
#include <Wininet.h>
#include <string>
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "wininet.lib")
using namespace std;

class WEB {
private:
	string replaceAll(string subject, const string& search, const string& replace);
public:
	string DownloadString(string URL);
	void CheckVersion(string version);
	int Perse();
};