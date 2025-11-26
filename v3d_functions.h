#ifndef V3D_FUNCTIONS_H
#define V3D_FUNCTIONS_H

#include <math.h>

void v3d_add(v3d_t *v1, v3d_t *v2, v3d_t *vresult)  // Add two vectors
{
    vresult->x = v1->x + v2->x;
    vresult->y = v1->y + v2->y;
    vresult->z = v1->z + v2->z;
}

void v3d_sub(v3d_t *v1, v3d_t *v2, v3d_t *vresult)  // Subtract two vectors
{
    vresult->x = v1->x - v2->x;
    vresult->y = v1->y - v2->y;
    vresult->z = v1->z - v2->z;
}

double v3d_mag(v3d_t *v1)   // Return magnitude (absolute value) of one vector
{
    double j = ((v1->x * v1->x) + (v1->y*v1->y) + ((v1->z*v1->z)));
    return sqrt(j);
}

double v3d_dot(v3d_t *v1, v3d_t *v2)    // Return dot product of two vectors
{
    return (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
}

void v3d_cross(v3d_t *v1, v3d_t *v2, v3d_t * vresult)   // Cross product of two vectors
{                                                       // No return, store at vresult
    vresult->x = (v1->y * v2->z) - (v1->z * v2->y);
    vresult->y = (v1->z * v2->x) - (v1->x * v2->z);
    vresult->z = (v1->x * v2->y) - (v1->y * v2->x);
}

double v3d_angle(v3d_t *v1, v3d_t *v2)  // Return angle between two vectors (in radians)
{
    double numerator = v3d_dot(v1, v2);
    double denominator = v3d_mag(v1) * v3d_mag(v2);
    return acos(numerator / denominator);
}

void v3d_plane_normal(v3d_plane_t * plane1, v3d_t * vresult) // Find plane norm and write to vresult
{
  v3d_t t1;                                   //
  v3d_sub(&plane1->plv2, &plane1->plv1, &t1); //
  v3d_t t2;                                   // normal calc
  v3d_sub(&plane1->plv3, &plane1->plv1, &t2); //
  v3d_cross(&t1, &t2, vresult); // Return norm of plane
}






#endif  // V3D_FUNCTIONS_H
