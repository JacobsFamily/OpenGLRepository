/*
 * glutWrapper.h
 *
 *  Created on: Jun 5, 2015
 *      Author: owner
 */

#ifndef GLUTWRAPPER_H_
#define GLUTWRAPPER_H_

class glutWrapper {
public:
	glutWrapper();
	static void display(void);
	static void keyboard(unsigned char key, int x, int y);
};


#endif /* GLUTWRAPPER_H_ */
