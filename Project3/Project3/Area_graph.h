#pragma once
#include <math.h>
#include <iostream>
#include <fstream>

class Area_graph
{
public:
	
	float r = 0, D = 5.0 / 1900.0;
	float** hight;

	void rand_Area(float h);

	void hight_save(std::ofstream& file);

	void color_Area(std::ofstream& file);

private:

	int i, j, l = 2048, count, clr;

	char* buffer = new char[54], * bufferw = new char[3];

	float hmin = 50, hmax = -50, del;

	void center(int line);

	void board(int line);
};

