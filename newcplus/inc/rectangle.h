/*
 * rectangle.h
 *
 *  Created on: 27-May-2018
 *      Author: punith
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#pragma once

class Rectangle {
public:
	int get_area()
	{
		return _width*_height;
	}
	int _width;
	int _height;
};

#endif /* RECTANGLE_H_ */
