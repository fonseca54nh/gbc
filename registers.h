struct registers
{
  union
  {
    struct
	  {
		  unsigned char a;
		  unsigned char f;
	  };
  };
  unsigned short af;
 
union
  {
  	struct
  	{
	   	unsigned char b;
		  unsigned char c;
	  };
  };
  unsigned short bc;
 
 union
  {
  	struct
	  {
		  unsigned char d;
		  unsigned char e;
	  };
  };
  unsigned short de;
 
 union
  {
  	struct
  	{
	   	unsigned char h;
		  unsigned char l;
	  };
  };
  unsigned short hl;

  unsigned short pc;
  unsigned short sp;

};

#define FLAG_Z 7
#define FLAG_N 6
#define FLAG_H 5
#define FLAG_C 4
