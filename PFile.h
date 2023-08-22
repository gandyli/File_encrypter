#ifndef PFILE_H
#define PFILE_H

#include <iostream>
#include <string>
#include <filesystem>

int Pcopy(const std::string &input, const std::string &output, long long p);
int Premove(const std::string &p);
std::string Pgetfullpath(const std::string &argv, std::string path);
std::string Pgetinpath(const std::string &path);
std::string Pgetinpath(const std::string &argv, const std::string &path);

#endif