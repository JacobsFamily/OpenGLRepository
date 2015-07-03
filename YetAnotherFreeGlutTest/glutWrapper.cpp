/*
 * glutWrapper.cpp
 *
 *  Created on: Jun 5, 2015
 *      Author: owner
 */

#include "glutWrapper.h"
#include <glut.h>

void glutWrapper::keyboard(unsigned char key, int x, int y)
{
	switch (key)
	  {
	    case '\x1B':
	      exit(EXIT_SUCCESS);
	      break;
	  }
}

void glutWrapper::display()
{
	  glClear(GL_COLOR_BUFFER_BIT);


/* red square and green square and blue square and white square*/
	  glColor3f(1.0f, 0.0f, 0.0f);
	  glBegin(GL_POLYGON);
	    glVertex2f(0.0f, 0.0f);
	    glVertex2f( 0.25f, 0.0f);
	    glVertex2f( 0.25f,  0.25f);
	    glVertex2f( 0.0f,  0.25f);
	  glEnd();


	  glColor3f(0.0f, 1.0f, 0.0f);
	  glBegin(GL_POLYGON);
		glVertex2f(0.0f, 0.0f);
		glVertex2f( -0.25f, 0.0f);
		glVertex2f( -0.25f,  -0.25f);
		glVertex2f( 0.0f,  -0.25f);
	  glEnd();

	  glColor3f(0.0f, 0.0f, 1.0f);
	  glBegin(GL_POLYGON);
		glVertex2f(0.0f, 0.0f);
		glVertex2f( 0.25f, 0.0f);
		glVertex2f( 0.25f,  -0.25f);
		glVertex2f( 0.0f,  -0.25f);
	  glEnd();

	  glColor3f(1.0f, 1.0f, 1.0f);
	  glBegin(GL_POLYGON);
		glVertex2f(0.0f, 0.0f);
		glVertex2f( -0.25f, 0.0f);
		glVertex2f( -0.25f,  0.25f);
		glVertex2f( 0.0f,  0.25f);
	  glEnd();

	  glFlush();
}



