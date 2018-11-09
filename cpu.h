void registers::load(unsigned char& reg)
{
	unsigned char n = readmem(reg.pc);
	pc++;
	reg = n;


}



int ExecuteOpcode()
{
	switch(opcode)
	{
		case 0x00:
		case 0x01:
		case 0x02:
		case 0x03:
	}

}


int registers::ExecuteNextOpcode()
{
	int res = 0;
	unsigned char opcode = readmem(reg.pc); //readmem still to be implemented
	reg.pc++;
	res = ExecuteOpcode(opcode);
	return res;
}