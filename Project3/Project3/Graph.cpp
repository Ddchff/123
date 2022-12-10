#include "Graph.h"

void Graph::inicialize(std::ofstream& file, float xmax, float ymax, int dotx, int doty)
{
	buffer[0] = 66, buffer[1] = 77, buffer[2] = 54, buffer[3] = 27, buffer[4] = 183, buffer[5] = 0, buffer[6] = 0, buffer[7] = 0, buffer[8] = 0, buffer[9] = 0, buffer[10] = 54;
	buffer[11] = 0, buffer[12] = 0, buffer[13] = 0, buffer[14] = 40, buffer[15] = 0, buffer[16] = 0, buffer[17] = 0, buffer[18] = 208, buffer[19] = 7, buffer[20] = 0, buffer[21] = 0;
	buffer[22] = 208, buffer[23] = 7, buffer[24] = 0, buffer[25] = 0, buffer[26] = 1, buffer[27] = 0, buffer[28] = 24, buffer[29] = 0, buffer[30] = 0, buffer[31] = 0, buffer[32] = 0;
	buffer[33] = 0, buffer[34] = 0, buffer[35] = 27, buffer[36] = 183, buffer[37] = 0, buffer[38] = 0, buffer[39] = 0, buffer[40] = 0, buffer[41] = 0, buffer[42] = 0, buffer[43] = 0;
	buffer[44] = 0, buffer[45] = 0, buffer[46] = 0, buffer[47] = 0, buffer[48] = 0, buffer[49] = 0, buffer[50] = 0, buffer[51] = 0, buffer[52] = 0, buffer[53] = 0, buffer[54] = 0;

	file.write(buffer, 54);
	bufferw[0] = 255, bufferw[1] = 255, bufferw[2] = 255;

	for (i = 0; i < 4000000; i++)
		file.write(bufferw, 3);

	bufferw[0] = 100, bufferw[1] = 100, bufferw[2] = 100;

	{
		for (i = 0; i < 11; ++i)
		{
			for (j = 0; j < 1900; ++j)
			{
				file.seekp(300204 + 3 * j + 1140000 * i, std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}

		for (i = 0; i < 11; ++i)
		{
			for (j = 0; j < 1900; ++j)
			{
				file.seekp(300204 + 6000 * j + 570 * i, std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}
	}

	bufferw[0] = 0, bufferw[1] = 0, bufferw[2] = 0;

	for (i = 0; i < 1900; i++)
	{
		file.seekp(300204 + 3 * i, std::ios_base::beg);
		file.write(bufferw, 3);
	}

	for (i = 0; i < 1900; i++)
	{
		file.seekp(300204 + 6000 * i, std::ios_base::beg);
		file.write(bufferw, 3);
	}

	this->xmax = xmax;
	this->ymax = ymax;

	output = 0;
	x = 50;
	y = 53;

	for (j = 1; j < 11; ++j)
	{
		output += xmax / 10;
		x += 190;
		Floatnumber(output, dotx, file, x, y);
	}

	output = 0;
	x = 70;
	y = 52;

	for (j = 0; j < 11; ++j)
	{
		Floatnumber(output, doty, file, x, y);
		output += ymax / 10;
		y += 190;
	}

	{
		file.seekp(287883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.seekp(293883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(299883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(323883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.seekp(317883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(311883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
	}
	{
		file.seekp(11658195, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(11664198, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(11670198, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(11676201, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(11682201, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
	}
}

void Graph::inicialize1(std::ofstream& file, float xmax, float ymax, int dotx, int doty)
{
	buffer[0] = 66, buffer[1] = 77, buffer[2] = 54, buffer[3] = 27, buffer[4] = 183, buffer[5] = 0, buffer[6] = 0, buffer[7] = 0, buffer[8] = 0, buffer[9] = 0, buffer[10] = 54;
	buffer[11] = 0, buffer[12] = 0, buffer[13] = 0, buffer[14] = 40, buffer[15] = 0, buffer[16] = 0, buffer[17] = 0, buffer[18] = 208, buffer[19] = 7, buffer[20] = 0, buffer[21] = 0;
	buffer[22] = 208, buffer[23] = 7, buffer[24] = 0, buffer[25] = 0, buffer[26] = 1, buffer[27] = 0, buffer[28] = 24, buffer[29] = 0, buffer[30] = 0, buffer[31] = 0, buffer[32] = 0;
	buffer[33] = 0, buffer[34] = 0, buffer[35] = 27, buffer[36] = 183, buffer[37] = 0, buffer[38] = 0, buffer[39] = 0, buffer[40] = 0, buffer[41] = 0, buffer[42] = 0, buffer[43] = 0;
	buffer[44] = 0, buffer[45] = 0, buffer[46] = 0, buffer[47] = 0, buffer[48] = 0, buffer[49] = 0, buffer[50] = 0, buffer[51] = 0, buffer[52] = 0, buffer[53] = 0, buffer[54] = 0;

	file.write(buffer, 54);
	bufferw[0] = 255, bufferw[1] = 255, bufferw[2] = 255;

	for (i = 0; i < 4000000; i++)
		file.write(bufferw, 3);

	bufferw[0] = 100, bufferw[1] = 100, bufferw[2] = 100;

	{
		for (i = 0; i < 11; ++i)
		{
			for (j = 0; j < 1900; ++j)
			{
				file.seekp(300204 + 3 * j + 1140000 * i, std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}

		for (i = 0; i < 11; ++i)
		{
			for (j = 0; j < 1900; ++j)
			{
				file.seekp(300204 + 6000 * j + 570 * i, std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}
	}

	bufferw[0] = 0, bufferw[1] = 0, bufferw[2] = 0;

	for (i = 0; i < 1900; i++)
	{
		file.seekp(6000204 + 3 * i, std::ios_base::beg);
		file.write(bufferw, 3);
	}

	for (i = 0; i < 1900; i++)
	{
		file.seekp(300204 + 6000 * i, std::ios_base::beg);
		file.write(bufferw, 3);
	}

	this->xmax = xmax;
	this->ymax = ymax;

	output = 0;
	x = 50;
	y = 1003;

	for (j = 1; j < 11; ++j)
	{
		output += xmax / 10;
		x += 190;
		Floatnumber(output, dotx, file, x, y);
	}

	output = -ymax;
	x = 70;
	y = 53;

	for (j = 0; j < 11; ++j)
	{
		Floatnumber(output, doty, file, x, y);
		output += ymax / 5;
		y += 190;
	}

	{
		file.seekp(5987883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.seekp(5993883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(5999883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(6023883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.seekp(6017883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(6011883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
	}
	{
		file.seekp(11658195, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(11664198, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(11670198, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(11676201, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(11682201, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
	}
}

void Graph::inicialize3d(std::ofstream& file, float xmax, float ymax, float zmax, int type)
{
	buffer[0] = 66, buffer[1] = 77, buffer[2] = 54, buffer[3] = 27, buffer[4] = 183, buffer[5] = 0, buffer[6] = 0, buffer[7] = 0, buffer[8] = 0, buffer[9] = 0, buffer[10] = 54;
	buffer[11] = 0, buffer[12] = 0, buffer[13] = 0, buffer[14] = 40, buffer[15] = 0, buffer[16] = 0, buffer[17] = 0, buffer[18] = 208, buffer[19] = 7, buffer[20] = 0, buffer[21] = 0;
	buffer[22] = 208, buffer[23] = 7, buffer[24] = 0, buffer[25] = 0, buffer[26] = 1, buffer[27] = 0, buffer[28] = 24, buffer[29] = 0, buffer[30] = 0, buffer[31] = 0, buffer[32] = 0;
	buffer[33] = 0, buffer[34] = 0, buffer[35] = 27, buffer[36] = 183, buffer[37] = 0, buffer[38] = 0, buffer[39] = 0, buffer[40] = 0, buffer[41] = 0, buffer[42] = 0, buffer[43] = 0;
	buffer[44] = 0, buffer[45] = 0, buffer[46] = 0, buffer[47] = 0, buffer[48] = 0, buffer[49] = 0, buffer[50] = 0, buffer[51] = 0, buffer[52] = 0, buffer[53] = 0, buffer[54] = 0;

	file.write(buffer, 54);
	bufferw[0] = 255, bufferw[1] = 255, bufferw[2] = 255;

	for (i = 0; i < 4000000; i++)
		file.write(bufferw, 3);

	bufferw[0] = 0, bufferw[1] = 0, bufferw[2] = 0;

	if (type)
	{
		for (i = 0; i < 50; ++i)
		{
			file.seekp(3054 + 6000 * (1000 + i), std::ios_base::beg);
			file.write(bufferw, 3);
		}

		for (i = 0; i < 50; ++i)
		{
			file.seekp(3054 + 6000 * (1000 - i / 2) + 3 * static_cast<int>(i * 0.866), std::ios_base::beg);
			file.write(bufferw, 3);
		}

		for (i = 0; i < 50; ++i)
		{
			file.seekp(3054 + 6000 * (1000 - i / 2) - 3 * static_cast<int>(i * 0.866), std::ios_base::beg);
			file.write(bufferw, 3);
		}
	}
	else
	{
		for (i = 0; i < 50; ++i)
		{
			file.seekp(204 + 6000 * (1000 + i), std::ios_base::beg);
			file.write(bufferw, 3);
		}

		for (i = 0; i < 50; ++i)
		{
			file.seekp(204 + 6000 * (1000 - i / 2) + 3 * static_cast<int>(i * 0.866), std::ios_base::beg);
			file.write(bufferw, 3);
		}

		for (i = 0; i < 50; ++i)
		{
			file.seekp(204 + 6000 * (1000 + i / 2) + 3 * static_cast<int>(i * 0.866), std::ios_base::beg);
			file.write(bufferw, 3);
		}
	}

	this->xmax = xmax;
	this->ymax = ymax;
	this->zmax = zmax;
	this->type = type;

}

void Graph::inicializeLog(std::ofstream& file, int wmin, int wmax, int dbmin, int dbmax, float fimin, float fimax)
{
	buffer[0] = 66, buffer[1] = 77, buffer[2] = 54, buffer[3] = 27, buffer[4] = 183, buffer[5] = 0, buffer[6] = 0, buffer[7] = 0, buffer[8] = 0, buffer[9] = 0, buffer[10] = 54;
	buffer[11] = 0, buffer[12] = 0, buffer[13] = 0, buffer[14] = 40, buffer[15] = 0, buffer[16] = 0, buffer[17] = 0, buffer[18] = 208, buffer[19] = 7, buffer[20] = 0, buffer[21] = 0;
	buffer[22] = 208, buffer[23] = 7, buffer[24] = 0, buffer[25] = 0, buffer[26] = 1, buffer[27] = 0, buffer[28] = 24, buffer[29] = 0, buffer[30] = 0, buffer[31] = 0, buffer[32] = 0;
	buffer[33] = 0, buffer[34] = 0, buffer[35] = 27, buffer[36] = 183, buffer[37] = 0, buffer[38] = 0, buffer[39] = 0, buffer[40] = 0, buffer[41] = 0, buffer[42] = 0, buffer[43] = 0;
	buffer[44] = 0, buffer[45] = 0, buffer[46] = 0, buffer[47] = 0, buffer[48] = 0, buffer[49] = 0, buffer[50] = 0, buffer[51] = 0, buffer[52] = 0, buffer[53] = 0, buffer[54] = 0;

	file.write(buffer, 54);
	bufferw[0] = 255, bufferw[1] = 255, bufferw[2] = 255;

	for (i = 0; i < 4000000; i++)
		file.write(bufferw, 3);

	bufferw[0] = 0, bufferw[1] = 0, bufferw[2] = 0;

	for (i = 0; i < 1900; i++)
	{
		file.seekp(6000204 + 3 * i, std::ios_base::beg);
		file.write(bufferw, 3);
	}

	for (i = 0; i < 1900; i++)
	{
		file.seekp(300204 + 6000 * i, std::ios_base::beg);
		file.write(bufferw, 3);
	}

	this->wmax = wmax;
	this->dbmax = dbmax;
	this->wmin = wmin;
	this->dbmin = dbmin;
	this->fimax = fimax;
	this->fimin = fimin;

	output = 1;
	
	if (wmin > 0)
	{
		for (i = wmin; i > 0; --i)
			output *= 10;
	}
	else
	{
		for (i = wmin; i < 0; ++i)
			output /= 10;
	}
	
	x = 50;
	y = 1003;

	for (j = wmin; j < wmax; ++j)
	{
		Floatnumber(output, (- j)*(j < 0), file, x, y);
		output *= 10;
		x += 1900 / (wmax - wmin);
	}

	output = dbmin / 20 * 20;
	x = 70;
	y = 53;

	while (output < (dbmax + 20))
	{
		Floatnumber(output, 0, file, x, y);
		output += 20;
		y += 38000 / (dbmax - dbmin);
	}

	bufferw[0] = 100, bufferw[1] = 100, bufferw[2] = 100;

	if (wmin > 0)
	{
		for (i = wmin; i > 0; --i)
			min *= 10;
	}
	else
	{
		for (i = wmin; i < 0; ++i)
			min /= 10;
	}

	if (wmax > 0)
	{
		for (i = wmax; i > 0; --i)
			max *= 10;
	}
	else
	{
		for (i = wmax; i < 0; ++i)
			max /= 10;
	}

	{
		for (fm = min; fm < max; fm = fm + fm / 10)
		{
			for (j = 0; j < 1900; ++j)
			{
				file.seekp(300204 + 6000 * j + 570 * fm, std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}

		for (i = 0; i < 11; ++i)
		{
			for (j = 0; j < 1900; ++j)
			{
				file.seekp(300204 + 3 * j + 1140000 * i, std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}
	}

	{
		file.seekp(5987883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.seekp(5993883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(5999883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(6023883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.seekp(6017883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(6011883, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
	}
	{
		file.seekp(11658195, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(11664198, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(11670198, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(11676201, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.seekp(11682201, std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
	}
}

void Graph::drop(std::ofstream& file, int graph_num)
{
	ty[graph_num] = 0;
	tx[graph_num] = 0;
	txp[graph_num] = 0;
	typ[graph_num] = 0;
}

void Graph::pix(float y, float x, std::ofstream& file, int graph_num, int R, int G, int B)
{
	bufferw[2] = R, bufferw[1] = G, bufferw[0] = B;


	tx[graph_num] = static_cast<int>(x / xmax * 1900.0);
	ty[graph_num] = static_cast<int>(y / ymax * 1900.0);

	if (tx[graph_num] > 1900)
		tx[graph_num] = 1900;

	if (ty[graph_num] > 1900)
		ty[graph_num] = 1900;

	if (tx[graph_num] < 0)
		tx[graph_num] = 0;

	if (ty[graph_num] < 0)
		ty[graph_num] = 0;

	file.seekp(300204 + 3 * tx[graph_num] + 6000 * ty[graph_num], std::ios_base::beg);
	file.write(bufferw, 3);

	if (typ[graph_num] + txp[graph_num])
	{
		if (typ[graph_num] < ty[graph_num])
		{
			for (; typ[graph_num] < ty[graph_num]; ++typ[graph_num])
			{
				file.seekp(300204 + 3 * (txp[graph_num] - 0) + 6000 * typ[graph_num], std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}

		if (typ[graph_num] > ty[graph_num])
		{
			for (; typ[graph_num] > ty[graph_num]; --typ[graph_num])
			{
				file.seekp(300204 + 3 * (txp[graph_num] - 0) + 6000 * typ[graph_num], std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}

		if (txp[graph_num] < tx[graph_num])
		{
			for (; txp[graph_num] < tx[graph_num]; ++txp[graph_num])
			{
				file.seekp(300204 + 3 * txp[graph_num] + 6000 * ty[graph_num], std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}

		if (txp[graph_num] > tx[graph_num])
		{
			for (; txp[graph_num] > tx[graph_num]; --txp[graph_num])
			{
				file.seekp(300204 + 3 * txp[graph_num] + 6000 * ty[graph_num], std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}
	}

	typ[graph_num] = ty[graph_num];
	txp[graph_num] = tx[graph_num];
}

void Graph::pix1(float y, float x, std::ofstream& file, int graph_num, int R, int G, int B)
{
	bufferw[2] = R, bufferw[1] = G, bufferw[0] = B;

	tx[graph_num] = static_cast<int>(x / xmax * 1900.0);
	ty[graph_num] = static_cast<int>(y / ymax * 950.0);

	if (tx[graph_num] > 1900)
		tx[graph_num] = 1900;

	if (ty[graph_num] > 950)
		ty[graph_num] = 950;

	if (tx[graph_num] < 0)
		tx[graph_num] = 0;

	if (ty[graph_num] < -950)
		ty[graph_num] = -950;

	file.seekp(6000204 + 3 * tx[graph_num] + 6000 * ty[graph_num], std::ios_base::beg);
	file.write(bufferw, 3);

	if (typ[graph_num] + txp[graph_num])
	{
		if (typ[graph_num] < ty[graph_num])
		{
			for (; typ[graph_num] < ty[graph_num]; ++typ[graph_num])
			{
				file.seekp(6000204 + 3 * (tx[graph_num] - 1) + 6000 * typ[graph_num], std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}

		if (typ[graph_num] > ty[graph_num])
		{
			for (; typ[graph_num] > ty[graph_num]; --typ[graph_num])
			{
				file.seekp(6000204 + 3 * (tx[graph_num] - 1) + 6000 * typ[graph_num], std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}

		if (txp[graph_num] < tx[graph_num])
		{
			for (; txp[graph_num] < tx[graph_num]; ++txp[graph_num])
			{
				file.seekp(6000204 + 3 * txp[graph_num] + 6000 * ty[graph_num], std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}

		if (txp[graph_num] > tx[graph_num])
		{
			for (; txp[graph_num] > tx[graph_num]; --txp[graph_num])
			{
				file.seekp(6000204 + 3 * txp[graph_num] + 6000 * ty[graph_num], std::ios_base::beg);
				file.write(bufferw, 3);
			}
		}
	}

	typ[graph_num] = ty[graph_num];
	txp[graph_num] = tx[graph_num];
}

void Graph::pix3d(float x, float y, float z, std::ofstream& file, int graph_num, int M, int R, int G, int B)
{
	bufferw[2] = R, bufferw[1] = G, bufferw[0] = B;

	if (type)
	{
		tx[graph_num] = static_cast<int>(950 + (x / xmax * 0.866 - z / zmax * 0.866) * 950);
		ty[graph_num] = static_cast<int>(950 + (y / ymax - x / 2 / xmax - z / zmax / 2) * 950.0);
	}
	else
	{
		tx[graph_num] = static_cast<int>((x / xmax * 0.866 + z / zmax * 0.866) * 950);
		ty[graph_num] = static_cast<int>(950 + (y / ymax + x / 2 / xmax - z / zmax / 2) * 950.0);
	}

	if (tx[graph_num] > 1900)
		tx[graph_num] = 1900;

	if (ty[graph_num] > 1900)
		ty[graph_num] = 1900;

	if (tx[graph_num] < 0)
		tx[graph_num] = 0;

	if (ty[graph_num] < 0)
		ty[graph_num] = 0;

	file.seekp(300204 + 3 * tx[graph_num] + 6000 * ty[graph_num], std::ios_base::beg);
	file.write(bufferw, 3);

	if (!M)
	{
		if (typ[graph_num] + txp[graph_num])
		{
			if (typ[graph_num] < ty[graph_num])
			{
				for (; typ[graph_num] < ty[graph_num]; ++typ[graph_num])
				{
					file.seekp(300204 + 3 * (tx[graph_num] - 0) + 6000 * typ[graph_num], std::ios_base::beg);
					file.write(bufferw, 3);
				}
			}

			if (typ[graph_num] > ty[graph_num])
			{
				for (; typ[graph_num] > ty[graph_num]; --typ[graph_num])
				{
					file.seekp(300204 + 3 * (tx[graph_num] - 0) + 6000 * typ[graph_num], std::ios_base::beg);
					file.write(bufferw, 3);
				}
			}

			if (txp[graph_num] < tx[graph_num])
			{
				for (; txp[graph_num] < tx[graph_num]; ++txp[graph_num])
				{
					file.seekp(300204 + 3 * txp[graph_num] + 6000 * ty[graph_num], std::ios_base::beg);
					file.write(bufferw, 3);
				}
			}

			if (txp[graph_num] > tx[graph_num])
			{
				for (; txp[graph_num] > tx[graph_num]; --txp[graph_num])
				{
					file.seekp(300204 + 3 * txp[graph_num] + 6000 * ty[graph_num], std::ios_base::beg);
					file.write(bufferw, 3);
				}
			}
		}

		typ[graph_num] = ty[graph_num];
		txp[graph_num] = tx[graph_num];
	}
}

void Graph::randarea3d(float h, std::ofstream& file)
{
	area.rand_Area(h);

	for (i = 0; i < 2049; i += 32)
	{
		for (j = 0; j < 2049; ++j)
		{
			pix3d(i - 1024, area.hight[i][j], j - 1024, file, 0, 1);
			
		}
	}

	for (i = 0; i < 2049; i += 32)
	{
		for (j = 0; j < 2049; ++j)
		{
			pix3d(j - 1024, area.hight[j][i], i - 1024, file, 0, 1);

		}
	}
}

void Graph::save_arae(std::ofstream& file)
{
	area.hight_save(file);
}

void Graph::delet_area()
{
	delete[] area.hight;
}

void Graph::Number(int number, std::ofstream& file, int x, int y, int zero)
{
	zero /= 10;

	if (number < 0)
	{
		number *= -1;
		minus = !zero;
	}
	else
		minus = 0;

	do
	{
		i = number % 10;

		switch (i)
		{
		case 0:
		{
			file.seekp(54 + 3 * x + 6000 * y, std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 2), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 2), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 4), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			break;
		}
		case 1:
		{
			file.seekp(54 + 3 * (x + 1) + 6000 * y, std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 1) + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 1) + 6000 * (y + 2), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 1) + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 1) + 6000 * (y + 4), std::ios_base::beg);
			file.write(bufferw, 3);
			break;
		}
		case 2:
		{
			file.seekp(54 + 3 * x + 6000 * y, std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 2), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 4), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			break;
		}
		case 3:
		{
			file.seekp(54 + 3 * x + 6000 * y, std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 2), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 4), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			break;
		}
		case 4:
		{
			file.seekp(54 + 3 * (x + 2) + 6000 * y, std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 2), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 4), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 4), std::ios_base::beg);
			file.write(bufferw, 3);
			break;
		}
		case 5:
		{
			file.seekp(54 + 3 * x + 6000 * y, std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 2), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 4), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			break;
		}
		case 6:
		{
			file.seekp(54 + 3 * x + 6000 * y, std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 2), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 4), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			break;
		}
		case 7:
		{
			file.seekp(54 + 3 * (x + 2) + 6000 * y, std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 2), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 4), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			break;
		}
		case 8:
		{
			file.seekp(54 + 3 * x + 6000 * y, std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 2), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 4), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			break;
		}
		case 9:
		{
			file.seekp(54 + 3 * x + 6000 * y, std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 1), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 2), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * (x + 2) + 6000 * (y + 3), std::ios_base::beg);
			file.write(bufferw, 3);
			file.seekp(54 + 3 * x + 6000 * (y + 4), std::ios_base::beg);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			file.write(bufferw, 3);
			break;
		}
		}

		x -= 4;
		number = number / 10;

		zero /= 10;
	} while (number || zero);

	if (minus)
	{
		file.seekp(54 + 3 * x + 6000 * (y + 2), std::ios_base::beg);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
		file.write(bufferw, 3);
	}
}

void Graph::Floatnumber(float number, int dot, std::ofstream& file, int x, int y)
{
	subnumber = static_cast<int>(number);

	Number(subnumber, file, x, y);
	if (dot)
	{
		x = x + 4;
		file.seekp(54 + 3 * x + 6000 * y, std::ios_base::beg);
		file.write(bufferw, 3);
		file.seekp(54 + 3 * x + 6000 * (y - 1), std::ios_base::beg);
		file.write(bufferw, 3);
		x = x + dot * 4 - 2;
		sdot = 1;

		while (dot)
		{
			--dot;
			sdot *= 10;
		}

		subnumber = static_cast<int>((number - subnumber) * sdot);
		Number(subnumber, file, x, y, sdot);
	}
}

