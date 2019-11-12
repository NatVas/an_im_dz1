#include "my_image.h"
#include <fstream>
#include <iostream>
#include <Windows.h>


int main()
{
	const char* file_name = "RGB_CFA.bmp";
	const char* file_name_load = "5_6.bmp";
	my_image BPM_IMAGE(file_name);
	BPM_IMAGE.Make_better();
	BPM_IMAGE.Load_to_file(file_name_load);
}