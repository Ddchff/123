#pragma once
#include <math.h>
#include <iostream>

class LA
{
public:
	float V, g, Teta, Psi, nxa, nya, nza, x, y, z, target[2];

	void initialization(float V0, float g0, float Teta0, float Psi0, float nya0, float nxa, float x0, float y0, float z0, float k0);

	void step_integ(float h, float t, float dedt, float dfdt, int com = 0);

	float gainR(float serch_x, float serch_y, float search_z);

	float gaine(float serch_x, float serch_y);

	float gainf(float serch_x, float serch_z);

	void gainVetarget(float dr, float de, float e, float r, int det);

private:

	int k;
	float K1, K2, K3, K4;
	float real, D1 = 150, D2 = 0.1, r;
	float dv, dTt, dpsi;

	float RKstep(float t, float y, float h, LA* LA, float (LA::* F)(float t, float y));

	float dV(float t, float tV);
	
	float dTeta(float t, float tTeta);

	float dPsi(float t, float tPsi);

	float dx(float t, float tx);

	float dy(float t, float ty);

	float dz(float t, float tz);
};