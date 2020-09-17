#ifndef __eeprom__
#define __eeprom__

static unsigned int size_eeprom = 512;
static unsigned char eeprom[] __attribute__((aligned(16))) = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcf, 0xff, 0x10, 0x1f, 0x7f, 0xff, 0xff, 0xff, 
	0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x81, 0x01, 0x01, 0x03, 0x01, 
	0x01, 0x01, 0x01, 0x81, 0x00, 0x67, 0x64, 0x64, 0x79, 0x97, 0x67, 0x72, 0x65, 0x65, 0x76, 0x77, 
	0x6b, 0x79, 0x65, 0x65, 0x41, 0x44, 0xfb, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xcf, 0xff, 0x10, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 
	0x7f, 0x7f, 0x7f, 0x81, 0x01, 0x01, 0x03, 0x01, 0x01, 0x01, 0x01, 0x81, 0x00, 0x67, 0x64, 0x64, 
	0x79, 0x97, 0x67, 0x72, 0x65, 0x65, 0x76, 0x77, 0x6b, 0x79, 0x65, 0x65, 0x41, 0x44, 0xfb, 0x13, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xcf, 0xff, 0x10, 0x1f, 0x7f, 0xff, 0xff, 0xff, 
	0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x81, 0x01, 0x00, 0x03, 0x01, 
	0x01, 0x01, 0x01, 0x81, 0x00, 0x67, 0x64, 0x64, 0x79, 0x97, 0x67, 0x72, 0x65, 0x65, 0x76, 0x77, 
	0x6b, 0x79, 0x65, 0x65, 0x41, 0x44, 0xfa, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xcf, 0xff, 0x10, 0x1f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0x7f, 
	0x7f, 0x7f, 0x7f, 0x81, 0x01, 0x00, 0x03, 0x01, 0x01, 0x01, 0x01, 0x81, 0x00, 0x67, 0x64, 0x64, 
	0x79, 0x97, 0x67, 0x72, 0x65, 0x65, 0x76, 0x77, 0x6b, 0x79, 0x65, 0x65, 0x41, 0x44, 0xfa, 0x13, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x41, 0x44, 0x85, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x44, 0x85, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x41, 0x44, 0x85, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x44, 0x85, 0x00, 
	0x00, 0x00, 0x00, 0xf7, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x4b, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x49, 0x48, 0x15, 0x06, 
	0x00, 0x00, 0x00, 0xf7, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x4b, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x49, 0x48, 0x15, 0x06, 
};

#endif