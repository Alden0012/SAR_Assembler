#ifndef Assembler_HPP
#define Assembler_HPP
#include <cstdint>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
struct Instruction{
	string Opcode;
	uint16_t Operand;
};
class Assembler{
	vector<uint16_t> OutCode;
	vector<Instruction> InCode;
	uint8_t OpMap(string Index);
	uint8_t IndexMap(string Index);
	public:
		void Load();
		void Assemble();
		void Out(); 
};
#endif