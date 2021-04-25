#include<windows.h>
#include<cstdio>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<math.h>
# define PI           3.14159265358979323846

GLfloat i = 0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.01f;
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.01f;
GLfloat position3 = 0.1f;
GLfloat speed3 = 0.1f;
GLfloat position4 = 0.1f;
GLfloat speed4 = 0.1f;

void Idle()
{
    glutPostRedisplay();
}

void update(int value) {

    if(position >1.5)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);



}


void update2(int value) {

    if(position2 <-1.0)
        position2 = +1.0f;

    position2 -= speed2;

	glutPostRedisplay();


	glutTimerFunc(100, update2,0);

}

void update3(int value) {
    if(position3 <-1.0)

    position3 = +1.0f;

    position3 -= speed3;

	glutPostRedisplay();

	glutTimerFunc(100, update3, 0);
}

void update4(int value) {
    if(position4 <-1.0)

    position4 = 1.0f;

    position4 -= speed4;

	glutPostRedisplay();

	glutTimerFunc(100, update4, 0);
}


void display()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);              // ground green
	glColor3ub(97, 106, 107); // Red
	glVertex2f(-1.0f, 0.0f);    // x, y
    glVertex2f(1.0f, 0.0f);
    glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);    // x, y

	glEnd();


	glBegin(GL_QUADS);              // TREE1
	glColor3ub(171, 178, 185); // Red
	glVertex2f(-0.83f, -0.9f);    // x, y
    glVertex2f(-0.87f, -0.9f);
    glVertex2f(-0.87f, -0.7f);
	glVertex2f(-0.83f, -0.7f);    // x, y

	glEnd();


	glBegin(GL_TRIANGLES);              // TREE1
	glColor3ub(34, 153, 84); // Red
	glVertex2f(-1.0f, -0.7f);    // x, y
    glVertex2f(-0.7f, -0.7f);
    glVertex2f(-0.85f, -0.5f);


	glEnd();


	glBegin(GL_QUADS);              // HOUSE1
	glColor3ub(214, 137, 16); // Red
	glVertex2f(-0.2f, -0.9f);    // x, y
    glVertex2f(-0.6f, -0.9f);
    glVertex2f(-0.6f, -0.62f);
	glVertex2f(-0.2f, -0.62f);    // x, y

	glEnd();


	glBegin(GL_TRIANGLES);              // HOUSE1
	glColor3ub(44, 62, 80); // Red
	glVertex2f(-0.6f, -0.62f);    // x, y
    glVertex2f(-0.2f, -0.62f);
    glVertex2f(-0.4f, -0.45f);


	glEnd();


    glBegin(GL_QUADS);              // house
	glColor3ub(214, 137, 16); // Red
	glVertex2f(0.0f, -0.9f);    // x, y
    glVertex2f(0.4f, -0.9f);
    glVertex2f(0.4f, -0.2f);
	glVertex2f(0.0f, -0.2f);    // x, y

	glEnd();



    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(.8,.8,0);
    glRotatef(i,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_TRIANGLES);              // blade left
	glColor3f(0.92f, 0.92f, 0.85f); // Red
	glVertex2f(-0.025f, 0.0f);    // x, y
	glVertex2f(0.025f, 0.0f);    // x, y
	glVertex2f(-0.18f, -0.18f);
    glEnd();
    glPopMatrix();
    i+=0.01f;

    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(.8,.8,0);
    glRotatef(i,0,0.0,0.1);//i=how many degree you want to rotate around an axis
    glBegin(GL_TRIANGLES);              // blade right
	glColor3f(0.92f, 0.92f, 0.85f); // Red
	glVertex2f(-0.025f, 0.0f);    // x, y
	glVertex2f(0.025f, 0.0f);    // x, y
	glVertex2f(0.2f, -0.18f);
	glEnd();
    glPopMatrix();
    i+=0.01f;



    glPushMatrix(); //glPushMatrix copies the top matrix and pushes it onto the stack, while glPopMatrix pops the top matrix off the stack
    glTranslatef(.8,.8,0);
    glRotatef(i,0,0.0,0.1);//i=how many degree you want to rotate around an axis
	glBegin(GL_TRIANGLES);              // blade up
	glColor3f(0.92f, 0.92f, 0.85f); // Red
	glVertex2f(-0.025f, 0.0f);    // x, y
	glVertex2f(0.025f, 0.0f);    // x, y
	glVertex2f(-0.06f, 0.18f);
	glEnd();
    glPopMatrix();
    i+=0.01f;


    glBegin(GL_QUADS);              // wildmills
	glColor3ub(236, 240, 241); // Red
	glVertex2f(0.79f, 0.35f);    // x, y
    glVertex2f(0.83f, 0.35f);
    glVertex2f(0.83f, 0.77f);
	glVertex2f(0.79f, 0.77f);    // x, y

	glEnd();


	GLfloat x=.2f; GLfloat y=.8f; GLfloat radius =.08f;
	int i;
	int lineAmount = 15; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
    glColor3ub(249, 231, 159 );
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();





	glLineWidth(6.5);
	// Draw a Red 1x1 Square centered at origin

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(153, 163, 164); // Red
	glVertex2f(-1.0f, 0.1f);    // x, y
	glVertex2f(1.0f, 0.1f);    // x, y

	glEnd();

    glBegin(GL_QUADS);

	glColor3ub(29, 131, 72); // Red
	glVertex2f(-1.0, 0.09f);    // x, y
	glVertex2f(1.0f, 0.09f);    // x, y
	glVertex2f(1.0f, -0.1f);    // x, y
	glVertex2f(-1.0f, -0.1f);

	glEnd();


	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(153, 163, 164); // Red
	glVertex2f(-1.0f, -0.1f);    // x, y
	glVertex2f(1.0f, -0.1f);    // x, y

	glEnd();










    glBegin(GL_QUADS);

	glColor3ub(29, 131, 72); // Red
	glVertex2f(-1.0, 0.11f);    // x, y
	glVertex2f(1.0f, 0.11f);    // x, y
	glVertex2f(1.0f, 0.4f);    // x, y
	glVertex2f(-1.0f, 0.4f);

	glEnd();


	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

	glBegin(GL_QUADS);

	glColor3ub(135, 54, 0 ); // Red
	glVertex2f(0.0, 0.11f);    // x, y
	glVertex2f(0.25f, 0.11f);    // x, y
	glVertex2f(0.25f, 0.20f);    // x, y
	glVertex2f(0.0f, 0.20f);    // x, y

	glEnd();


	glBegin(GL_QUADS);

	glColor3ub(46, 134, 193 ); // Red
	glVertex2f(0.28, 0.11f);    // x, y
	glVertex2f(0.38f, 0.11f);    // x, y
	glVertex2f(0.38f, 0.16f);    // x, y
	glVertex2f(0.28f, 0.20f);    // x, y

	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(1, 9, 9); // Red
	glVertex2f(0.25f, 0.13f);    // x, y
	glVertex2f(0.28f, 0.13f);    // x, y

	glEnd();


    glPopMatrix();

    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);

    glBegin(GL_QUADS);

    glColor3ub(46, 134, 193 ); // Red
	glVertex2f(0.65, -0.1f);    // x, y
	glVertex2f(1.0f, -0.1f);    // x, y
	glVertex2f(1.0f, 0.02f);    // x, y
	glVertex2f(0.65f, 0.02f);    // x, y

	glEnd();


	glBegin(GL_QUADS);

	glColor3ub(46, 134, 193 ); // Red
	glVertex2f(0.6, -0.03f);    // x, y
	glVertex2f(0.65f, -0.03f);    // x, y
	glVertex2f(0.65f, -0.06f);    // x, y
	glVertex2f(0.6f, -0.06f);    // x, y

	glEnd();

    glBegin(GL_QUADS);

	glColor3ub(186, 74, 0); // Red
	glVertex2f(0.5, 0.02f);    // x, y
	glVertex2f(0.6f, 0.04f);    // x, y
	glVertex2f(0.6f, -0.1f);    // x, y
	glVertex2f(0.5f, -0.1f);    // x, y


	glEnd();


	glPopMatrix();

	glBegin(GL_QUADS);

	glColor3ub(186, 74, 0); // Red
	glVertex2f(0.5, -0.9f);    // x, y
	glVertex2f(0.9f, -0.9f);    // x, y
	glVertex2f(0.9f, -0.25f);    // x, y
	glVertex2f(0.5f, -0.25f);    // x, y

	glEnd();


	//rain
	  glLineWidth(1.0);
	  glPushMatrix();
	  glTranslatef(position3, 0.0f, 0.0f);
      glBegin(GL_LINES);
      glColor3f(1,1,1);
      glVertex2f(-0.8,1);
      glVertex2f(-.8,.9);
      glVertex2f(-.8,.7);
      glVertex2f(-.8,.6);
      glVertex2f(-.8,.4);
      glVertex2f(-.8,.3);
      glVertex2f(-.8,.2);
      glVertex2f(-.8,.1);
      glVertex2f(-.8,.0);
      glVertex2f(-.8,-.1);
      glVertex2f(-.8,-.2);
      glVertex2f(-.8,-.3);
      glVertex2f(-.8,-.4);
      glVertex2f(-.8,-.5);
      glVertex2f(-.8,-.6);
      glVertex2f(-.8,-.7);


      glVertex2f(-0.4,1);
      glVertex2f(-.4,.9);
      glVertex2f(-.4,.7);
      glVertex2f(-.4,.6);
      glVertex2f(-.4,.4);
      glVertex2f(-.4,.3);
      glVertex2f(-.4,.2);
      glVertex2f(-.4,.1);
      glVertex2f(-.4,.0);
      glVertex2f(-.4,-.1);
    glVertex2f(-.4,-.2);
      glVertex2f(-.4,-.3);
      glVertex2f(-.4,-.4);
      glVertex2f(-.4,-.5);
      glVertex2f(-.4,-.6);
      glVertex2f(-.4,-.7);
      glVertex2f(-.4,-.8);
      glVertex2f(-.4,-.9);

        glVertex2f(0,1);
      glVertex2f(0,.9);
      glVertex2f(0,.7);
      glVertex2f(0,.6);
      glVertex2f(0,.4);
      glVertex2f(0,.3);
      glVertex2f(0,.2);
      glVertex2f(0,.1);
      glVertex2f(0,.0);
      glVertex2f(0,-.1);
      glVertex2f(0,-.2);
      glVertex2f(0,-.3);
      glVertex2f(0,-.4);
      glVertex2f(0,-.5);
      glVertex2f(0,-.6);
      glVertex2f(0,-.7);
      glVertex2f(0,-.8);
      glVertex2f(0,-.9);



       glVertex2f(0.4,1);
      glVertex2f(.4,.9);
      glVertex2f(.4,.7);
      glVertex2f(.4,.6);
      glVertex2f(.4,.4);
      glVertex2f(.4,.3);
      glVertex2f(.4,.2);
      glVertex2f(.4,.1);
      glVertex2f(.4,.0);
      glVertex2f(.4,-.1);
    glVertex2f(.4,-.2);
      glVertex2f(.4,-.3);
      glVertex2f(.4,-.4);
      glVertex2f(.4,-.5);
      glVertex2f(.4,-.6);
      glVertex2f(.4,-.7);
      glVertex2f(.4,-.8);
      glVertex2f(.4,-.9);
     glEnd();
     glPopMatrix();

     glLineWidth(1.0);

     glPushMatrix();
     glTranslatef(position4,0.0f, 0.0f);
     glBegin(GL_LINES);

      //2nd row

      glVertex2f(-.6,.7);
      glVertex2f(-.6,.6);
      glVertex2f(-.6,.4);
      glVertex2f(-.6,.3);
      glVertex2f(-.6,.2);
      glVertex2f(-.6,.1);
      glVertex2f(-.6,.0);
      glVertex2f(-.6,-.1);
      glVertex2f(-.6,-.2);
      glVertex2f(-.6,-.3);
      glVertex2f(-.6,-.4);
      glVertex2f(-.6,-.5);
      glVertex2f(-.6,-.6);
      glVertex2f(-.6,-.7);
      glVertex2f(-.6,-.8);
      glVertex2f(-.6,-.9);







      glVertex2f(-0.2,1);
      glVertex2f(-.2,.9);
      glVertex2f(-.2,.7);
      glVertex2f(-.2,.6);
      glVertex2f(-.2,.4);
      glVertex2f(-.2,.3);
      glVertex2f(-.2,.2);
      glVertex2f(-.2,.1);
      glVertex2f(-.2,.0);
      glVertex2f(-.2,-.1);
      glVertex2f(-.2,-.2);
      glVertex2f(-.2,-.3);
      glVertex2f(-.2,-.4);
      glVertex2f(-.2,-.5);
      glVertex2f(-.2,-.6);
      glVertex2f(-.2,-.7);
      glVertex2f(-.2,-.8);
      glVertex2f(-.2,-.9);

      glVertex2f(0.2,1);
      glVertex2f(0.2,.9);
      glVertex2f(0.2,.7);
      glVertex2f(0.2,.6);
      glVertex2f(0.2,.4);
      glVertex2f(0.2,.3);
      glVertex2f(0.2,.2);
      glVertex2f(0.2,.1);
      glVertex2f(0.2,.0);
      glVertex2f(0.2,-.1);
      glVertex2f(0.2,-.2);
      glVertex2f(0.2,-.3);
      glVertex2f(0.2,-.4);
      glVertex2f(0.2,-.5);
      glVertex2f(0.2,-.6);
      glVertex2f(0.2,-.7);
      glVertex2f(0.2,-.8);
      glVertex2f(0.2,-.9);
      glVertex2f(0.8,1);
      glVertex2f(.8,.9);
      glVertex2f(.8,.7);
      glVertex2f(.8,.6);
      glVertex2f(.8,.4);
      glVertex2f(.8,.3);
      glVertex2f(.8,.2);
      glVertex2f(.8,.1);
      glVertex2f(.8,.0);
      glVertex2f(.8,-.1);
      glVertex2f(.8,-.2);
      glVertex2f(.8,-.3);
      glVertex2f(.8,-.4);
      glVertex2f(.8,-.5);
      glVertex2f(.8,-.6);
      glVertex2f(.8,-.7);


      glVertex2f(.6,.7);
      glVertex2f(.6,.6);
      glVertex2f(.6,.4);
      glVertex2f(.6,.3);
      glVertex2f(.6,.2);
      glVertex2f(.6,.1);
      glVertex2f(.6,.0);
      glVertex2f(.6,-.1);
      glVertex2f(.6,-.2);
      glVertex2f(.6,-.3);
      glVertex2f(.6,-.4);
      glVertex2f(.6,-.5);
      glVertex2f(.6,-.6);
      glVertex2f(.6,-.7);
      glVertex2f(.6,-.8);
      glVertex2f(.6,-.9);
      glEnd();
      glPopMatrix();


    glFlush();
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{	speed += 0.01f;
			}
if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.01f;   }
glutPostRedisplay();}



void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
case 'a':
    speed = 0.0f;
    break;
case 'w':
    speed = 0.1f;
    break;
glutPostRedisplay();
	}}

void SpecialInput(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:

 speed = 0.5f;
break;

case GLUT_KEY_DOWN:
  speed = 0.1f;
  break;

case GLUT_KEY_LEFT:
break;

case GLUT_KEY_RIGHT:
break;
}
glutPostRedisplay();
}





void handleMouse2(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{	speed2 -= 0.01f;
			}
if (button == GLUT_RIGHT_BUTTON)
	{speed2 += 0.01f;   }
glutPostRedisplay();}



void handleKeypress2(unsigned char key, int x, int y) {
	switch (key) {
case 'b':
    speed2 = 0.0f;
    break;
case 'c':
    speed2 = 0.1f;
    break;
glutPostRedisplay();
	}}



void SpecialInput2(int key, int x, int y)
{
switch(key)
{
case GLUT_KEY_UP:

 speed2 = 0.5f;
break;

case GLUT_KEY_DOWN:
  speed2 = 0.1f;
  break;

case GLUT_KEY_LEFT:
break;

case GLUT_KEY_RIGHT:
break;
}
glutPostRedisplay();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(100, update2, 0);
    glutTimerFunc(100, update3, 0);
    glutTimerFunc(100, update4, 0);
    glutIdleFunc(Idle);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    glutSpecialFunc(SpecialInput);
    glutMainLoop();
    return 0;}

