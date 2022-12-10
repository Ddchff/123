#include "Area_graph.h"

void Area_graph::rand_Area(float h)
{
	hight = new float* [2049];
	for (i = 0; i < 2049; ++i)
	{
		hight[i] = new float[2049];
	}

	hight[0][0] = h;
	r = 2 * D * static_cast<float>(rand() - RAND_MAX / 2) / RAND_MAX;
	hight[2048][0] = hight[0][0] - l * r;
	r = 2 * D * static_cast<float>(rand() - RAND_MAX / 2) / RAND_MAX;
	hight[0][2048] = hight[0][0] - l * r;
	r = 2 * D * static_cast<float>(rand() - RAND_MAX / 2) / RAND_MAX;
	hight[2048][2048] = (hight[2048][0] + hight[2048][0]) / 2 - l * r;

	l /= 2;

	while (l >= 1)
	{
		center(l);
		board(l);

		l /= 2;
	}
}

void Area_graph::hight_save(std::ofstream& file)
{
	buffer[0] = 66, buffer[1] = 77, buffer[2] = 58, buffer[3] = 56, buffer[4] = 192, buffer[5] = 0, buffer[6] = 0, buffer[7] = 0, buffer[8] = 0, buffer[9] = 0, buffer[10] = 54;
	buffer[11] = 0, buffer[12] = 0, buffer[13] = 0, buffer[14] = 40, buffer[15] = 0, buffer[16] = 0, buffer[17] = 0, buffer[18] = 1, buffer[19] = 8, buffer[20] = 0, buffer[21] = 0;
	buffer[22] = 1, buffer[23] = 8, buffer[24] = 0, buffer[25] = 0, buffer[26] = 1, buffer[27] = 0, buffer[28] = 24, buffer[29] = 0, buffer[30] = 0, buffer[31] = 0, buffer[32] = 0;
	buffer[33] = 0, buffer[34] = 4, buffer[35] = 56, buffer[36] = 192, buffer[37] = 0, buffer[38] = 0, buffer[39] = 0, buffer[40] = 0, buffer[41] = 0, buffer[42] = 0, buffer[43] = 0;
	buffer[44] = 0, buffer[45] = 0, buffer[46] = 0, buffer[47] = 0, buffer[48] = 0, buffer[49] = 0, buffer[50] = 0, buffer[51] = 0, buffer[52] = 0, buffer[53] = 0, buffer[54] = 0;

	file.write(buffer, 54);

	for (i = 0; i < 2049; ++i)
		for (j = 0; j < 2049; ++j)
		{
			if (hight[i][j] > hmax)
				hmax = hight[i][j];
			if (hight[i][j] < hmin)
				hmin = hight[i][j];
		}

	del = hmax - hmin;

	for (i = 0; i < 2049; ++i)
	{
		for (j = 0; j < 2049; ++j)
		{
			clr = (hight[i][j] - hmin) / del * 255;
			bufferw[0] = clr, bufferw[1] = clr, bufferw[2] = clr;
			file.seekp(54 + 6148 * i + 3 * j);
			file.write(bufferw, 3);
		}
		bufferw[0] = 255;
		file.write(bufferw, 1);
	}
}

void Area_graph::color_Area(std::ofstream& file)
{
}

void Area_graph::center(int line)
{
	i = line;
	
	while (i < 2048)
	{
		j = line;

		while (j < 2048)
		{
			r = 2 * D * static_cast<float>(rand() - RAND_MAX / 2) / RAND_MAX;
			hight[i][j] = (hight[i - line][j - line] + hight[i - line][j + line] + hight[i + line][j - line] + hight[i + line][j + line]) / 4 + r * line;

			j += 2 * line;
		}

		i += 2 * line;
	}
}

void Area_graph::board(int line)
{
	i = line;
	
	while (i < 2048)
	{
		j = line;

		while (j < 2048)
		{
			if ((i + 2 * line) < 2048)
			{
				r = 2 * D * static_cast<float>(rand() - RAND_MAX / 2) / RAND_MAX;
				hight[i + line][j] = (hight[i][j] + hight[i + line][j + line] + hight[i + line][j - line] + hight[i + line * 2][j]) / 4 + r * line;
			}
			else
			{
				r = 2 * D * static_cast<float>(rand() - RAND_MAX / 2) / RAND_MAX;
				hight[i + line][j] = (hight[i][j] + hight[i + line][j + line] + hight[i + line][j - line]) / 3 + r * line;
			}

			if ((j + 2 * line) < 2048)
			{
				r = 2 * D * static_cast<float>(rand() - RAND_MAX / 2) / RAND_MAX;
				hight[i][j + line] = (hight[i][j] + hight[i + line][j + line] + hight[i - line][j + line] + hight[i][j + 2 * line]) / 4 + r * line;
			}
			else
			{
				r = 2 * D * static_cast<float>(rand() - RAND_MAX / 2) / RAND_MAX;
				hight[i][j + line] = (hight[i][j] + hight[i + line][j + line] + hight[i - line][j + line]) / 3 + r * line;
			}

			if (i == line)
			{
				r = 2 * D * static_cast<float>(rand() - RAND_MAX / 2) / RAND_MAX;
				hight[i - line][j] = (hight[i][j] + hight[i - line][j - line] + hight[i - line][j + line]) / 3 + r * line;
			}

			if (j == line)
			{
				r = 2 * D * static_cast<float>(rand() - RAND_MAX / 2) / RAND_MAX;
				hight[i][j - line] = (hight[i][j] + hight[i - line][j - line] + hight[i + line][j - line]) / 3 + r * line;
			}

			j += 2 * line;
		}

		i += 2 * line;
	}
}
