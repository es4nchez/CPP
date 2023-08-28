#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <map>



class  Bitcoin
{

public:

	Bitcoin();
	Bitcoin(const Bitcoin &brc);
	Bitcoin &operator=(const Bitcoin &brc);
	~Bitcoin();

	void	loadDatabase();
    void    loadFile(std::string filePath);

private:

	std::map<std::string, double> db;
    bool isDateFormat(const std::string& date);
	bool isValueFormat(const std::string& value);
	void getBcValue(std::string date, std::string value);
};


#endif