/*
    Program to read and decode a binary file
    and print into terminal. The concept 
    will be used later for decoding binary files 
    for compressed Huffman files.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <bitset>
#include <string>

int main(int argc, char** argv)
{
    // ifstream init
    std::ifstream input(argv[1]);

    // Record binary stream
    std::vector<unsigned char> stream(std::istreambuf_iterator<char>(input), {});

    // Parse stream into bytes and store in bitset
    // Get bitset string representation and print
    for (std::size_t i = 0; i < stream.size(); i++)
    {
        std::bitset<8> bits(stream[i]);
        std::string byte = bits.to_string();
        std::cout << byte;
    }

    // Append newline
    std::cout << std::endl;    
}