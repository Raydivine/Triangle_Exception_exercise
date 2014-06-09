#ifndef Triangle_H
#define Triangle_H

typedef enum {ERR_NO_ERROR, 
			  ERR_DIVIDE_IS_NOT_STRICTLY_POSITIVE, 
			  ERR_NOT_TRIANGLE
			 } ErrorCode;


int areLengthAllStictlyPositive(int side1, int side2, int side3);	
int isTriangleNotValid (int side1, int side2, int side3);					 
						 
						 
#endif // Triangle_H
