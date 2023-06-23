#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <regex>

std::string readFileToString(const std::string& filePath)
{
    std::ifstream file(filePath);
    if (!file) {
        std::cerr << "Error opening file: " << filePath << std::endl;
        return "error";
    }

    std::ostringstream contentStream;
    contentStream << file.rdbuf();
    file.close();

    // Remove whitespace characters from the content
    std::string content = contentStream.str();
    content = std::regex_replace(content, std::regex("\\s+"), "");

    return contentStream.str();
}

void writeStringToFile(const std::string& filePath, const std::string& content)
{
    std::ofstream file(filePath);
    if (!file) {
        std::cerr << "Error opening file: " << filePath << std::endl;
        return;
    }

    file << content;
    file.close();

    std::cout << "String written to file: " << filePath << std::endl;
}

std::string executeAndGetOutput(const std::string& executablePath)
{
    std::ostringstream outputStream;

    // Open a pipe to execute the command
    FILE* pipe = popen(executablePath.c_str(), "r");
    if (!pipe) {
        std::cerr << "Error executing command: " << executablePath << std::endl;
        return "error";
    }

    // Read the output of the command
    constexpr int bufferSize = 128;
    char buffer[bufferSize];
    while (fgets(buffer, bufferSize, pipe)) {
        outputStream << buffer;
    }

    // Close the pipe
    pclose(pipe);

    return outputStream.str();
}
