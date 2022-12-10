#include <iostream>
#include <fstream>
#include "Graph.h"
#include "LA.h"

int main()
{
    Graph yx;
    LA Object, Target;
    float T = 0, h = 0.01, t;
    float x1 = 0, y1 = 0, z1 = 0;
    
    std::ofstream file1("y(x).bmp");
    std::ofstream file2("map.bmp");

    yx.inicialize3d(file1, 950, 10, 950);

    Object.initialization(5, 9.8, 0, 0, 1, 0, 0, 5, 0, 4);

	Target.initialization(0.1, 9.8, 0, 0, 1, 0, 400, 6, 400, 0);

    yx.randarea3d(-5, file1);

    yx.save_arae(file2);

	for (t = 0; t < T; t += h)
    {
		Object.step_integ(h, t, 0, 0);

		yx.pix3d(Object.x, Object.y, Object.z, file1, 0, 0, 255);
		yx.pix3d(Target.x, Target.y, Target.z, file1, 1, 0, 0, 0,255);
    }

    yx.delet_area();
    file1.close();

    return 1;
}
