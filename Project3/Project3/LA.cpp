#include "LA.h"

void LA::initialization(float V0, float g0, float Teta0, float Psi0, float nya0, float nxa0, float x0, float y0, float z0, float k0)
{
	V = V0;
	g = g0;
	Teta = Teta0;
	Psi = Psi0;
	nya = nya0;
	nza = 0;
	nxa = nxa0;
	x = x0;
	y = y0;
	z = z0;
	k = k0;
}

void LA::step_integ(float h, float t, float dedt, float dfdt, int com)
{
	dv = RKstep(t, V, h, this, &LA::dV);
	dTt = RKstep(t, Teta, h, this, &LA::dTeta);
	dpsi = RKstep(t, Psi, h, this, &LA::dPsi);
	x = RKstep(t, x, h, this, &LA::dx);
	y = RKstep(t, y, h, this, &LA::dy);
	z = RKstep(t, z, h, this, &LA::dTeta);

	nxa = sin(Teta);
	nya = cos(Teta) + k * V / g * dedt * com;
	nza = cos(Teta) * k * V / g * dfdt * com;

	V = dv;
	Teta = dTt;
	Psi = dpsi;
}

float LA::dTeta(float t, float tTeta)
{
	tTeta = g / V * (nya - cos(Teta));

	return tTeta;
}

float LA::dPsi(float t, float tPsi)
{
	tPsi = -g / V * nza / cos(Teta);
	
	return tPsi;
}

float LA::dx(float t, float tx)
{
	tx = V * cos(Teta) * cos (Psi);

	return tx;
}

float LA::dy(float t, float ty)
{
	ty = V * sin(Teta);

	return ty;
}

float LA::dz(float t, float tz)
{
	tz = -V * cos(Teta) * sin(Psi);

	return tz;
}

float LA::gainR(float serch_x, float serch_y, float search_z)
{
	real = sqrt((x - serch_x) * (x - serch_x) + (y - serch_y) * (y - serch_y) + (z - search_z) * (z - search_z));
//	r = 2 * D1 * static_cast<float>(rand() - RAND_MAX / 2) / RAND_MAX;
	D1 = 0.1 * real;
	//	return detect + r * exp((real - detect) * r);
	return real;
}

float LA::gaine(float serch_x, float serch_y)
{
	real = atan2((y - serch_y), (x - serch_x));
//	r = 2 * D2 * static_cast<float>(rand() - RAND_MAX / 2) / RAND_MAX;
	//	return detect + r * exp((real - detect) * r);
	return real;
}

float LA::gainf(float serch_x, float serch_z)
{
	real = atan2((z - serch_z), (x - serch_x));
	
	return real;
}

void LA::gainVetarget(float dr, float de, float e, float r, int det)
{
	dr = dr + V * cos(e - Teta);
	de = V * sin(e - Teta) - r * de;
	target[0] = sqrt(dr * dr + de * de);
	if (det)
		target[1] = e + acos(dr / target[0]) - 2 * 3.1415926536;
	else
		target[1] = e - acos(dr / target[0]);
}

float LA::RKstep(float t, float y, float h, LA* LA, float(LA::* F)(float t, float y))
{
	K1 = h * (LA->*F)(t, y);
	K2 = h * (LA->*F)(t + h / 2.0, y + K1 / 2.0);
	K3 = h * (LA->*F)(t + h / 2.0, y + K2 / 2.0);
	K4 = h * (LA->*F)(t + h, y + K3);
	y += (K1 + 2.0 * K2 + 2.0 * K3 + K4) / 6.0;

	return y;
}

float LA::dV(float t, float tV)
{
	tV = g * (nxa - sin(Teta));
	
	return tV;
}
