#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <stdexcept>

using CSVData = std::vector<std::vector<int64_t>>;

CSVData read_csv(const std::string &_filepath, char _separator = ',') throw(std::runtime_error);

#endif // UTILS_H
