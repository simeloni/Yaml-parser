/*
compile
c++ -o 1-test-yaml -lyaml-cpp 1-test-yaml.cpp

run
./1-test-yaml
*/

#include<iostream>
#include"yaml-cpp/yaml.h"

int main() {
/*
	YAML::Node lineup = YAML::Load("{1B: Prince Fielder, 2B: Rickie Weeks, LF: Ryan Braun}");
	for(YAML::const_iterator it=lineup.begin();it!=lineup.end();++it) {
		std::cout << "Playing at " << it->first.as<std::string>() << " is " << it->second.as<std::string>() << "\n";
	}

	lineup["RF"] = "Corey Hart";
	lineup["C"] = "Jonathan Lucroy";
	assert(lineup.size() == 5);
*/

	YAML::Node config = YAML::LoadFile("test.yaml");
	const YAML::Node& files = config["files"];
	for (YAML::const_iterator it = files.begin(); it != files.end(); ++it) {
	    const YAML::Node& file = *it;
//	for (std::size_t it = 0; it < files.size(); it++ ) {
//	    const YAML::Node& file = files[it] ;
	    std::cout << "Id: " << file["id"].as<std::string>() << std::endl ;
	    std::cout << "name: " << file["name"].as<std::string>() << std::endl ;
	    std::cout << "content: " << file["content"].as<std::string>() << std::endl ;
   	    std::cout << "par1: " << file["par1"].as<double>() << std::endl ;
	    std::cout << "par2: " << file["par2"].as<double>() << std::endl << std::endl ;
	}

	const YAML::Node& other = config["otherfile"] ;
	std::cout << "name: "  << other["name"].as<std::string>() << std::endl ;
	std::cout << "content: " << other["content"].as<std::string>() << std::endl ;
	std::cout << "par1: " << other["par1"].as<double>() << std::endl ;
	std::cout << "par2: " << other["par2"].as<double>() << std::endl << std::endl ;

	return 0 ;
}
