#pragma once
#include <string>
#include <iostream>

using namespace std;


class Encryption {
public:
	std::string GetLocalAppdata();
	std::string GetAppdata();
	std::string GetDigital();
	std::string GetCitizenFX();
	std::string GetDiscordRPC();
	std::string GetDiscordCanaryRPC();
	std::string GetRemovingFivemAuthFiles();
	std::string GetFilesOrDirectories();
	std::string GetWarningMessageNoFiles();
	std::string GetBlockingXbox();
	std::string GetMachineGuidRegEdit();
	std::string GetProfileGuidRegEdit();
	std::string GetHosts();
	std::string GetCredits();
};