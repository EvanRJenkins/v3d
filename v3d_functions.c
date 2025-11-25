/* Testing program for vector functions */

#include <stdio.h>
#include <math.h>
#include "v3d_types.h"
#include "v3d_functions.h"


int main(void)
{
    v3d_t v1 = {1.0, 0.0, 0.0};
    v3d_t v2 = {sqrt(2.0), 1.0, 1.0};
    printf("Angle: %f", v3d_angle(&v1, &v2));
    return 0;
}
