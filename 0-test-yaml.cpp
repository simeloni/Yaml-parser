/*
compile
c++ -o 0-test-yaml -lyaml-cpp 0-test-yaml.cpp

run
./0-test-yaml
*/

#include<iostream>
#include"yaml-cpp/yaml.h"

int main() {

	YAML::Node lineup = YAML::Load("{1B: Prince Fielder, 2B: Rickie Weeks, LF: Ryan Braun}");
	for(YAML::const_iterator it=lineup.begin();it!=lineup.end();++it) {
		std::cout << "Playing at " << it->first.as<std::string>() << " is " << it->second.as<std::string>() << "\n";
	}

	lineup["RF"] = "Corey Hart";
	lineup["C"] = "Jonathan Lucroy";
	assert(lineup.size() == 5);

	return 0 ;
}
