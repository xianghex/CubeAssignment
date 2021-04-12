//#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>
//using namespace std;

int main() {
	std::string line;
	std::vector<unsigned> vector;
	unsigned num_vars, m, n;
	//std::ifstream myfile(filename)
	std::ifstream ifs("vector.txt");
	//ifs.open("vector.txt", std::ios::in);
	if (ifs.is_open())
	{
		unsigned line_index = 0;
		while (getline(ifs, line))
		{
			//std::cout << line << std::endl;
			if (line_index == 0) { num_vars=std::stoi(line);}
			if (line_index == 1){ m = std::stoi(line);}
			if (line_index == 2){ n = std::stoi(line); }
			if (line_index == 3) 
			{
				std::stringstream ss(line);
				unsigned tmp;
				while (ss >> tmp)
				{
					vector.push_back(tmp);	
				}
			}
			line_index++;
		}
	}
	std::cout << num_vars << ";" << m << "; " << n << std::endl;
	for (std::vector<unsigned>::iterator it = vector.begin(); it != vector.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	
}