#ifndef V3D_H
#define V3D_H

#include <math.h>

/*
Type definitions
*/

typedef struct {    // 3d vector type
   double x, y, z;
} v3d_t;

typedef struct {
  v3d_t plv1, plv2, plv3;
} v3d_plane_t;

/*
Function declarations
*/

void v3d_add(v3d_t *v1, v3d_t *v2, v3d_t *vresult);  // Add two vectors

void v3d_sub(v3d_t *v1, v3d_t *v2, v3d_t *vresult);  // Subtract two vectors

double v3d_mag(v3d_t *v1);  // Return magnitude (absolute value) of one vector

double v3d_dot(v3d_t *v1, v3d_t *v2);  // Return dot product of two vectors

void v3d_cross(v3d_t *v1, v3d_t *v2, v3d_t * vresult);   // Cross product of two vectors

double v3d_angle(v3d_t *v1, v3d_t *v2);  // Return angle between two vectors (in radians)

void v3d_plane_normal(v3d_plane_t * plane1, v3d_t * vresult); // Find plane norm and write to vresult

double v3d_plane_angle_of_intersection(v3d_plane_t * plane1, v3d_plane_t * plane2);

double v3d_dist_point_to_plane(v3d_plane_t * plane1, v3d_t * point);

#endif  // V3D_H
