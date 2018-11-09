#include <iostream>
#include "registers.h"
//#include "cartridge.h"
//#include "cpu.h"
unsigned char cartmem[0x20000];


void loadROM()
{
	FILE *f;
	f = fopen("Tetris.gb", "rb");
	fread(cartmem, 1,0x20000, f);
	fclose(f);
}

using namespace std;

int main()
{
	registers reg;

	cout << sizeof(reg.a);

	loadROM();



}	