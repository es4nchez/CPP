#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin()
{
 
}

Bitcoin::Bitcoin(const Bitcoin &btc) {(*this) = btc;}

Bitcoin &Bitcoin::operator=(const Bitcoin &btc) 
{
	if (this != &btc)
	{
		this->db = btc.db;
	}
	return (*this);
}


Bitcoin::~Bitcoin() { }

void	Bitcoin::loadDatabase()
{
    std::string line;
    std::ifstream   file;
    // char	*endd = NULL;

    file.open("data.csv");
    file.ignore(19);
    while (getline(file, line))
        this->db[line.substr(0, 10)] = std::stod(line.substr(11, line.size()));

}

void    Bitcoin::loadFile(std::string filePath)
{
    std::ifstream   file;
    std::string     line;

    file.open(filePath);
    file.ignore(13);
    while (getline(file, line))
    {
        if (this->isDateFormat(line.substr(0, 10)))
        {
            if (isValueFormat(line.substr(12, line.size())))
                this->getBcValue(line.substr(0, 10), line.substr(12, line.size()));
            else
                std::cout << "Error: Not a number between 0 and 1000" << std::endl;
        }
        else
            std::cout << "Error: bad input => " << line.substr(0, 10) << std::endl;
    }      

}

void    Bitcoin::getBcValue(std::string date, std::string value)
{
    std::map<std::string, double>::iterator it;

    if (this->db.find(date) != this->db.end())
        std::cout << date << " => " << value << " = " << (std::stod(value) * this->db[date]) << std::endl;
    else
     {
        it = db.lower_bound(date);
        if (it == db.begin())
        {
            std::cout << "Error: Provided date is before the first date in database" << std::endl;
        }
        else
        {
            --it;
            std::cout << date << " => " << value << " = " << (std::stod(value) * it->second) << std::endl;
        }
     }
}

bool    Bitcoin::isValueFormat(const std::string& value)
{
    if (std::stod(value) < 0 || std::stod(value) > 1000)
        return false;
    return true;
}

bool    Bitcoin::isDateFormat(const std::string& date) {
    if (date.size() != 10)
        return false;
    for (int i = 0; i < 10; i++)
    {
        if (i == 4 || i == 7) {
            continue;
        }
        if (!isdigit(date[i]))
            return false;
    }
    if (date[4] != '-' || date[7] != '-')
        return false;
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));
    if(1000 <= year && year <= 3000)
    {
        if(( month == 1 || month == 3 || month == 5 || month == 7|| month == 8||month == 10 || month == 12) && day > 0 && day <= 31)
            return true;
        else if((month == 4 || month == 6 || month == 9|| month == 11) && day > 0 && day <= 30)
            return true;
        else if(month == 2)
        {
            if((year % 400 == 0 || (year % 100 != 0 && year % 4 ==0)) && day > 0 && day <= 29)
                return true;
            else if(!(day > 0 && day <= 28))
                return false;
            else
                return true;
        }
        else
            return false;
    }
    else
        return false;
    return true;
}