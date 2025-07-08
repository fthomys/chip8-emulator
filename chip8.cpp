#include "chip8.h"

#include <fstream>
#include <ios>
#include <iosfwd>


void Chip8::LoadROM(const char *filename) {
    std::ifstream romfile(filename, std::ios::binary | std::ios::ate);

    if (romfile.is_open()) {
        std::streampos size = romfile.tellg();
        char* buffer = new char[size];
        romfile.seekg(0, std::ios::beg);
        romfile.read(buffer, size);
        romfile.close();

        for (int i = 0; i < size; i++) {
            memory[START_ADDRESS + i] = static_cast<uint8_t>(buffer[i]);
        }

        delete[] buffer;
    }
}
