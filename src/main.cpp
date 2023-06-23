#include <iostream>
#include <string>
#include "utils.h"

int main()
{
    std::string filepath = "./data/basic_csv.csv";

    try
    {
        CSVData data = read_csv(filepath);

        // Print the parsed CSV data
        for (const auto &row : data)
        {
            for (const auto &cell : row)
            {
                std::cout << cell << " ";
            }
            std::cout << std::endl;
        }
    }
    catch (const std::runtime_error &ex)
    {
        std::cout << "Error: " << ex.what() << std::endl;
    }

    return 0;
}
