#include "Spoofer.h"
#include "encryption.h"
#include "WEB.h"

Encryption encyption = Encryption();
WEB web = WEB();

void Spoofing::Initialize() {
	web.CheckVersion("2.0");
	web.Perse();
	GetFiveM();
	RemoveFiles();
	RemoveXboxAuth();
	ChangeRegEdit();
	runexe();
}

int Spoofing::RemoveFiles() {
	char* localappdata = getenv(encyption.GetLocalAppdata().c_str());
	char* appdata = getenv(encyption.GetAppdata().c_str());
	std::string digitalpath = localappdata;
	digitalpath += encyption.GetDigital().c_str();
	std::string citizenfxpath = appdata;
	citizenfxpath += encyption.GetCitizenFX().c_str();
	std::string discordpath = appdata;
	discordpath += encyption.GetDiscordRPC().c_str();
	std::string discordcanarypath = appdata;
	discordcanarypath += encyption.GetDiscordCanaryRPC().c_str();
	std::cout << "\x1B[31m[\033[0m\x1B[33m!\033[0m\x1B[31m]\033[0m "<< encyption.GetRemovingFivemAuthFiles().c_str() << std::endl;
	Spoofing::files += std::filesystem::remove_all(citizenfxpath);
	Spoofing::files += std::filesystem::remove_all(digitalpath);
	Spoofing::files += std::filesystem::remove_all(discordpath);
	Spoofing::files += std::filesystem::remove_all(discordcanarypath);
	std::cout << "\x1B[31m[\033[0m\x1B[32m!\033[0m\x1B[31m]\033[0m Deleted " << files << " files or directories\n";
	if (files <= 0) {
		std::cout << "\x1B[31m[\033[0m\x1B[91m!\033[0m\x1B[31m]\033[0m "<< encyption.GetWarningMessageNoFiles().c_str() << std::endl;;
	}
	return files;
}

bool Spoofing::RemoveXboxAuth() {
	char* windir = getenv("WINDIR");
	std::string hosts = windir;
	hosts += encyption.GetHosts().c_str();
	std::cout << "\x1B[31m[\033[0m\x1B[33m!\033[0m\x1B[31m]\033[0m " << encyption.GetBlockingXbox().c_str() << std::endl;


	if (!CheckWord((char*)hosts.c_str(), (char*)"xboxlive.com")) {
		std::ofstream outfile;
		outfile.open(hosts, std::ios_base::app); // append instead of overwrite
		outfile << "127.0.0.1 xboxlive.com";
		outfile.close();
		std::cout << "\x1B[31m[\033[0m\x1B[32m!\033[0m\x1B[31m]\033[0m \"xboxlive.com\" blocked" << std::endl;
	}
	else {
		std::cout << "\x1B[31m[\033[0m\x1B[91m!\033[0m\x1B[31m]\033[0m \"xboxlive.com\" is already blocked, skipping" << std::endl;
	}
	if (!CheckWord((char*)hosts.c_str(), (char*)"user.auth.xboxlive.com")) {
		std::ofstream outfile;
		outfile.open(hosts, std::ios_base::app); // append instead of overwrite
		outfile << "\n127.0.0.1 user.auth.xboxlive.com";
		outfile.close();
		std::cout << "\x1B[31m[\033[0m\x1B[32m!\033[0m\x1B[31m]\033[0m \"user.auth.xboxlive.com\" blocked" << std::endl;
	}
	else {
		std::cout << "\x1B[31m[\033[0m\x1B[91m!\033[0m\x1B[31m]\033[0m \"user.auth.xboxlive.com\" is already blocked, skipping" << std::endl;

	}
	if (!CheckWord((char*)hosts.c_str(), (char*)"presence-heartbeat.xboxlive.com")) {
		std::ofstream outfile;
		outfile.open(hosts, std::ios_base::app); // append instead of overwrite
		outfile << "\n127.0.0.1 presence-heartbeat.xboxlive.com";
		outfile.close();
		std::cout << "\x1B[31m[\033[0m\x1B[32m!\033[0m\x1B[31m]\033[0m \"presence-heartbeat.xboxlive.com\" blocked" << std::endl;
	}
	else {
		std::cout << "\x1B[31m[\033[0m\x1B[91m!\033[0m\x1B[31m]\033[0m \"presence-heartbeat.xboxlive.com\" is already blocked, skipping" << std::endl;

	}
	return true;
}


void Spoofing::ChangeRegEdit() {
	std::string value = newUUID();
	//std::string value2 = newUUID();
	std::thread([&] {
		std::string cmdtoexec = encyption.GetMachineGuidRegEdit().c_str();
		cmdtoexec += value;
		//std::string cmdtoexec2 = encyption.GetProfileGuidRegEdit().c_str();
		//cmdtoexec2 += value2;
		system(cmdtoexec.c_str());
		//system(cmdtoexec2.c_str()); crashing
	}).detach();
	std::cout << "\x1B[31m[\033[0m\x1B[32m!\033[0m\x1B[31m]\033[0m GUID changed to: " << value << std::endl;
	//std::cout << "\x1B[31m[\033[0m\x1B[32m!\033[0m\x1B[31m]\033[0m Profile GUID changed to: " << value2 << std::endl;
}



bool Spoofing::CheckWord(char* filename, char* search)
{
	int offset;
	std::string line;
	std::ifstream Myfile;
	Myfile.open(filename);

	if (Myfile.is_open())
	{
		while (!Myfile.eof())
		{
			getline(Myfile, line);
			if ((offset = line.find(search, 0)) != std::string::npos)
			{
				return true;
			}
		}
		Myfile.close();
	}

	return false;
}


void Spoofing::GetFiveM() {
	std::cout << "\x1B[31m[\033[0m\x1B[33m!\033[0m\x1B[31m]\033[0m Please, select FiveM application data folder! " << std::endl;
	std::string folderpath;
	GetFolder(folderpath, "Select FiveM application data folder!");
	std::string cache = folderpath;
	cache += "\\cache";
	std::string ros_profilespath = folderpath;
	ros_profilespath += "\\cache\\game\\ros_profiles";
	std::string priv = folderpath;
	priv += "\\cache\\priv";
	std::string asifive = folderpath;
	asifive += "\\asi-five.dll";
	uintmax_t delfiles = 0;

	if (exists_test3(cache)) {
		delfiles += std::filesystem::remove_all(ros_profilespath);
		delfiles += std::filesystem::remove_all(priv);
		delfiles += std::filesystem::remove_all(asifive);
		std::cout << "\x1B[31m[\033[0m\x1B[33m!\033[0m\x1B[31m]\033[0m Removing FiveM game files... (to initialize update) " << std::endl;
		std::cout << "\x1B[31m[\033[0m\x1B[32m!\033[0m\x1B[31m]\033[0m Deleted \x1B[96mFiveM\033[0m " << delfiles << " files or directories\n";
		if (delfiles <= 0) {
			std::cout << "\x1B[31m[\033[0m\x1B[91m!\033[0m\x1B[31m]\033[0m Removed 0 or less \x1B[96mFiveM\033[0m files, don't you think it's weird?" << std::endl;
		}
	}
	else {
		std::cout << "\x1B[31m[\033[0m\x1B[91m!\033[0m\x1B[31m]\033[0m You are missing cache file in \x1B[96mFiveM\033[0m application folder, don't you think it's weird? | SKIPPING" << std::endl;
	}


}

void Spoofing::runexe()  /* Runs the hwid spoofer script */
{
	int result = system("C:\\Windows\\Temp\\ConsoleApp1.exe");
	std::cout << "\x1B[31m[\033[0m\x1B[32m!\033[0m\x1B[31m]\033[0m HWID SPOOFED"<< std::endl;
}

/* This functions below is not mine :) (FROM STACKOVERFLOW XD)*/

std::string Spoofing::newUUID()
{
	static std::random_device              rd;
	static std::mt19937                    gen(rd());
	static std::uniform_int_distribution<> dis(0, 15);
	static std::uniform_int_distribution<> dis2(8, 11);

	std::stringstream ss;
	int i;
	ss << std::hex;
	for (i = 0; i < 8; i++) {
		ss << dis(gen);
	}
	ss << "-";
	for (i = 0; i < 4; i++) {
		ss << dis(gen);
	}
	ss << "-4";
	for (i = 0; i < 3; i++) {
		ss << dis(gen);
	}
	ss << "-";
	ss << dis2(gen);
	for (i = 0; i < 3; i++) {
		ss << dis(gen);
	}
	ss << "-";
	for (i = 0; i < 12; i++) {
		ss << dis(gen);
	};
	return ss.str();
}

bool Spoofing::GetFolder(std::string& folderpath,
	const char* szCaption,
	HWND hOwner)
{
	bool retVal = false;

	// The BROWSEINFO struct tells the shell 
	// how it should display the dialog.
	BROWSEINFO bi;
	memset(&bi, 0, sizeof(bi));

	bi.ulFlags = BIF_USENEWUI;
	bi.hwndOwner = hOwner;
	bi.lpszTitle = szCaption;

	// must call this if using BIF_USENEWUI
	::OleInitialize(NULL);

	// Show the dialog and get the itemIDList for the 
	// selected folder.
	LPITEMIDLIST pIDL = ::SHBrowseForFolder(&bi);

	if (pIDL != NULL)
	{
		// Create a buffer to store the path, then 
		// get the path.
		char buffer[_MAX_PATH] = { '\0' };
		if (::SHGetPathFromIDList(pIDL, buffer) != 0)
		{
			// Set the string value.
			folderpath = buffer;
			retVal = true;
		}

		// free the item id list
		CoTaskMemFree(pIDL);
	}

	::OleUninitialize();

	return retVal;
}

inline bool Spoofing::exists_test3(const std::string& name) {
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}
}
