//
//    Spherical Subdivision/Wavelet library
//    
//    Copyright (C) 2014 - 2018 Rhys Hawkins
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//

#ifndef vertex3_h
#define vertex3_h

typedef struct _vertex3 vertex3_t;
struct _vertex3 {
  double x, y, z;
  
  int depth;
  int parent;
  int children[4];

  int v[2];
  int f[2];
  int e[4];

  int n[6];

  double area;
};

void
vertex3_initialize(vertex3_t *v);

double
vertex3_dot(const vertex3_t *a,
	    const vertex3_t *b);

void
vertex3_subtract(const vertex3_t *a,
		 const vertex3_t *b,
		 vertex3_t *m);

void
vertex3_midpoint(const vertex3_t *a,
		 const vertex3_t *b,
		 vertex3_t *m);

int
vertex3_normalize(vertex3_t *a);

void
vertex3_transform(vertex3_t *a,
		  double *matrix);

int
vertex3_add_child(vertex3_t *a,
		  int ci);

int
vertex3_add_neighbor(vertex3_t *v,
		     int ni);

void
vertex3_cross(double x1, double y1, double z1,
	      double x2, double y2, double z2,
	      double *nx, double *ny, double *nz);

void
vertex3_sphtocart(double lon, double lat,
		  double *x, double *y, double *z);

void
vertex3_carttosph(double x, double y, double z,
		  double *lon, double *lat);

int
vertex3_midpoint_plane(const vertex3_t *a,
		       const vertex3_t *b,
		       double pa, double pb, double pc, double pd);

double
vertex3_determinant(const vertex3_t *a,
		    const vertex3_t *b,
		    const vertex3_t *c);


#endif /* vertex3_h */
