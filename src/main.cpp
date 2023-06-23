#include <iostream>
#include "utils.h"

int main()
{
    std::string filepath = "data/basic_csv.csv";
    try
    {
        CSVData data = read_csv(filepath);

        for (auto &row : data)
        {
            for (auto &col : row)
            {
                std::cout << col << " ";
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
