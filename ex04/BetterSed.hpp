#ifndef BETTERSED_H
	#define BETTERSED_H

	#include <iostream>
	#include <fstream>
	#include <string>

	class BetterSed {
		private:
			std::ifstream infile;
			std::ofstream outfile;

		public:
			int setFiles(std::string filename);
			void replace(std::string s1, std::string s2);
	};
#endif