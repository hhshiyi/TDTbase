#ifndef daub4_lift_h
#define daub4_lift_h

/*
 * 1D Forward
 */
int
daub4_lift_forward1d_daub4(double *s,
			   int width,
			   int stride,
			   double *work);

int
daub4_lift_forward1d_daub4_step(double *s,
				int width,
				int stride,
				double *work);

/*
 * 1D Inverse
 */
int
daub4_lift_inverse1d_daub4(double *s,
			   int width,
			   int stride,
			   double *work);

int
daub4_lift_inverse1d_daub4_step(double *s,
				int width,
				int stride,
				double *work);

/*
 * 2D Forward
 */
int 
daub4_lift_forward2d_daub4(double *s, 
			   int width,
			   int height,
			   int stride,
			   double *work);

int 
daub4_lift_forward2d_daub4_step(double *s, 
				int width,
				int height,
				int stride,
				double *work);

/*
 * 2D Inverse
 */
int
daub4_lift_inverse2d_daub4(double *s,
			   int width,
			   int height,
			   int stride,
			   double *work);

int 
daub4_lift_inverse2d_daub4_step(double *s, 
				int width,
				int height,
				int stride,
				double *work);

/*
 * 3D Forward
 */
int 
daub4_lift_forward3d_daub4(double *s,
			   int width,
			   int height,
			   int depth,
			   int rowstride,
			   int slicestride,
			   double *work);

int 
daub4_lift_forward3d_daub4_step(double *s,
				int width,
				int height,
				int depth,
				int rowstride,
				int slicestride,
				double *work);

int 
daub4_lift_forward3d_daub4_2dstep(double *s,
				  int width,
				  int height,
				  int stride,
				  int rowstride,
				  double *work);


/*
 * 3D Inverse
 */
int 
daub4_lift_inverse3d_daub4(double *s,
			   int width,
			   int height,
			   int depth,
			   int rowstride,
			   int slicestride,
			   double *work);

int 
daub4_lift_inverse3d_daub4_step(double *s,
				int width,
				int height,
				int depth,
				int rowstride,
				int slicestride,
				double *work);

int 
daub4_lift_inverse3d_daub4_2dstep(double *s,
				  int width,
				  int height,
				  int stride,
				  int rowstride,
				  double *work);

#endif /* daub4_lift_h */
