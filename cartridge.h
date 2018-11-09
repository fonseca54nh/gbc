

void loadROM()
{
	FILE *f;
	f = fopen("Tetris.gb", "rb");
	fread(cartmem, 1,0x20000, f);
	fclose(f);
}