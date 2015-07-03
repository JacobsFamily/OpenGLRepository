/*
 * Main.cpp
 *
 *  Created on: Jun 5, 2015
 *      Author: owner
 */

//============================================================================
// Name        : freeglutTest.cpp
// Author      : Vincent Jacobs
// Version     :
// Copyright   : Your copyright notice
// Description : GLUT Test, Ansi-style
//============================================================================

#include <iostream>
#include "glutWrapper.h"
#include <GL/glut.h>
using namespace std;

int main(int argc, char** argv) {
	  glutInit(&argc, argv);
	  glutCreateWindow("GLUT Test");
	  glutKeyboardFunc(&(glutWrapper::keyboard));
	  glutDisplayFunc(&(glutWrapper::display));
	  glutMainLoop();

	  return EXIT_SUCCESS;
	return 0;
}



