#include "BetterSed.hpp"


int BetterSed::setFiles(std::string filename) {

    infile.open(filename.c_str());
    if (!infile)
    {
        std::cerr << "Error: cannot open input file." << std::endl;
        return 1;
    }

    outfile.open((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error: cannot create output file." << std::endl;
        return 1;
    }

    return 0;
}

void BetterSed::replace(std::string s1, std::string s2) {

    std::string line;

    while (std::getline(infile, line))
    {
        size_t pos = 0;

        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }

        outfile << line;

        if (!infile.eof())
            outfile << '\n';
    }
}