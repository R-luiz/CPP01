
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

void verifyInput(std::string filename, std::string s1, std::string s2) {
	if (filename.empty()) {
		std::cerr << "Filename cannot be empty." << std::endl;
		exit(1);
	}

	if (s1.empty()) {
		std::cerr << "String1 cannot be empty." << std::endl;
		exit(1);
	}

	if (s2.empty()) {
		std::cerr << "String2 cannot be empty." << std::endl;
		exit(1);
	}
	if (s1 == s2) {
		std::cerr << "String1 and String2 cannot be the same." << std::endl;
		exit(1);
	}
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

	verifyInput(filename, s1, s2);

    std::ifstream ifs(filename.c_str());
    if (!ifs || ifs.is_open())
	{
        std::cerr << "Error opening file for reading." << std::endl;
        return 1;
    }

    std::ofstream ofs((filename + ".replace").c_str());
    if (!ofs) {
        std::cerr << "Error opening file for writing." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(ifs, line)) {
        std::size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        ofs << line << std::endl;
    }
	ifs.close();
	ofs.close();
    return 0;
}