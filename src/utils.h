#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <stdexcept>

using CSVData = std::vector<std::vector<std::string>>;

CSVData read_csv(std::string &_filepath) throw(std::runtime_error);

#endif // UTILS_H
