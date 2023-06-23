#include "utils.h"

CSVData read_csv(const std::string &_filepath, char _separator = ',') throw(std::runtime_error)
{
    std::ifstream file(_filepath);

    if (!file.is_open())
        throw std::runtime_error("Could not open file");

    std::string line;
    CSVData parsedCsv;

    try
    {
        // Read the file line by line
        while (std::getline(file, line))
        {
            std::vector<int64_t> parsedRow;
            std::istringstream lineStream(line);
            std::string token;

            // Parse each line, splitting by commas
            while (std::getline(lineStream, token, _separator))
            {
                try
                {
                    // Convert the token to an integer
                    int64_t value = std::stoll(token);
                    parsedRow.push_back(value);
                }
                catch (const std::invalid_argument &)
                {
                    // Handle invalid integer conversion
                    throw std::runtime_error("Invalid integer value in CSV");
                }
                catch (const std::out_of_range &)
                {
                    // Handle out-of-range integer conversion
                    throw std::runtime_error("Integer value out of range in CSV");
                }
            }

            parsedCsv.push_back(parsedRow);
        }
    }
    catch (const std::exception &)
    {
        file.close();
        throw; // Re-throw any other exceptions
    }

    file.close();
    return parsedCsv;
}