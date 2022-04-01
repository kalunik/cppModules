//
// Created by Waif Jonathon on 3/24/22.
//

#include <iostream>
#include <fstream>

int	main(int ac, char **av) {
	if (ac != 4){
		std::cout << "Need more arguments (give 3 args)" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string		filename = av[1],
					oldStr = av[2],
					newStr = av[3];

	std::ifstream	ifs(filename);
	if (!ifs.is_open()){
		std::cerr << "Couldn't open to read" << filename << std::endl;
		return (EXIT_FAILURE);
	}

	std::ofstream	ofs(filename + ".replace");
	if (!ofs.is_open()){
		ifs.close();
		std::cerr << "Couldn't open to write " << filename + ".replace" << std::endl;
		return (EXIT_FAILURE);
	}

	std::string		txt;
	for (std::string buf; std::getline(ifs, buf);){
		txt += buf;
		if (!ifs.eof())
			txt += "\n";
	}

	std::string	tmp;
	for (size_t pos; 1;){
		pos = txt.find(oldStr);
		if (pos != std::string::npos){
			tmp = txt.substr(0, pos);
			tmp += newStr;
			tmp += txt.substr(pos + oldStr.length(), txt.length());
			txt = tmp;
		}
		else
			break;
	}

	ofs << txt;
	ifs.close();
	ofs.close();
	return (EXIT_SUCCESS);
}