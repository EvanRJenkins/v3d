#ifndef V3D_TYPES_H
#define V3DTYPES_H

#include <stdio.h>
#include <math.h>

typedef struct {    // 3d vector type
   double x, y, z;
} v3d_t;

typedef struct {
  v3d_t plv1, plv2, plv3;
} v3d_plane_t;


#endif  // V3D_TYPES_H
