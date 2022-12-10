#pragma once
#include <fstream>
#include "Area_graph.h"

class Graph
{
public:
	void inicialize(std::ofstream& file, float xmax, float ymax, int dotx, int doty);

	void inicialize1(std::ofstream& file, float xmax, float ymax, int dotx, int doty);

	void inicialize3d(std::ofstream& file, float xmax, float ymax, float zmax, int type = 1);

	void inicializeLog(std::ofstream& file, int wmin, int wmax, int dbmin, int dbmax, float fimin, float fimax);
	
	void drop(std::ofstream& file, int graph_num = 0);

	void pix(float y, float x, std::ofstream& file, int graph_num = 0, int R = 0, int G = 0, int B = 0);

	void pix1(float y, float x, std::ofstream& file, int graph_num = 0, int R = 0, int G = 0, int B = 0);

	void pix3d(float x, float y, float z, std::ofstream& file, int graph_num = 0, int M = 0, int R = 0, int G = 0, int B = 0);

	void randarea3d(float h, std::ofstream& file);

	void save_arae(std::ofstream& file);

	void delet_area();

private:
	char* buffer = new char[54], * bufferw = new char[3];

	Area_graph area;

	int i, j, k, tx[4], ty[4], typ[4], txp[4], subnumber, sdot, x, y, minus, xmax, ymax, zmax, type;

	float output, wmin, wmax, dbmin, dbmax, fimin, fimax, min, max, fm;

	void Number(int number, std::ofstream& file, int x, int y, int zero = 0);

	void Floatnumber(float number, int dot, std::ofstream& file, int x, int y);

};



