#include "utils.h"

CSVData read_csv(std::string &_filepath) throw(std::runtime_error)
{
    std::ifstream file(_filepath);

    if (!file.is_open())
        throw std::runtime_error("Could not open file");

    std::string line;
    std::vector<std::vector<std::string>> parsedCsv;

    while (std::getline(file, line))
    {
        std::vector<std::string> parsedRow;
        std::istringstream lineStream(line);
        std::string token;

        while (std::getline(lineStream, token, ','))
        {
            parsedRow.push_back(token);
        }

        parsedCsv.push_back(parsedRow);
    }

    file.close();
    return parsedCsv;
}