/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<math.h>
# define PI           3.14159265358979323846

void display(void)
{
/* clear all pixels */
glClear (GL_COLOR_BUFFER_BIT);
/* draw white polygon (rectangle) with corners at
* (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
*/
glColor3f(1.0, 1.0, 1.0);


	glLineWidth(3.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(153, 163, 164); // Red
	glVertex2f(0.0f, 0.075f);    // x, y
	glVertex2f(1.0f, 0.075f);    // x, y

	glEnd();
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(153, 163, 164); // Red
	glVertex2f(0.0f, 0.1f);    // x, y
	glVertex2f(1.0f, 0.1f);    // x, y

	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(52, 152, 219 ); // Red
	glVertex2f(0.25f, 0.13f);    // x, y
	glVertex2f(0.28f, 0.13f);    // x, y

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(52, 152, 219); // Red
	glVertex2f(0.0, 0.11f);    // x, y
	glVertex2f(0.25f, 0.11f);    // x, y
	glVertex2f(0.25f, 0.20f);    // x, y
	glVertex2f(0.0f, 0.20f);    // x, y

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(165, 105, 189); // Red
	glVertex2f(0.28, 0.11f);    // x, y
	glVertex2f(0.40f, 0.11f);    // x, y
	glVertex2f(0.40f, 0.14f);    // x, y
	glVertex2f(0.28f, 0.20f);    // x, y

	glEnd();



	glBegin(GL_QUADS);

	glColor3f(0.0f, 0.1f, 1.0f); // Red
	glVertex2f(0.0, 0.21f);    // x, y
	glVertex2f(0.22f, 0.21f);    // x, y
	glVertex2f(0.22f, 0.55f);    // x, y
	glVertex2f(0.0f, 0.55f);    // x, y

	glEnd();

	glBegin(GL_QUADS);

	glColor3f(1.0f, 0.0f, 1.0f); // Red
	glVertex2f(0.22, 0.21f);    // x, y
	glVertex2f(0.34f, 0.21f);    // x, y
	glVertex2f(0.34f, 0.48f);    // x, y
	glVertex2f(0.22f, 0.48f);    // x, y

	glEnd();





	glBegin(GL_QUADS);

	glColor3ub(247, 220, 111); // Red
	glVertex2f(0.34, 0.21f);    // x, y
	glVertex2f(0.45f, 0.21f);    // x, y
	glVertex2f(0.45f, 0.45f);    // x, y
	glVertex2f(0.34f, 0.45f);    // x, y

	glEnd();


	glBegin(GL_QUADS);

	glColor3ub(26, 188, 156); // Red
	glVertex2f(0.45, 0.21f);    // x, y
	glVertex2f(0.72f, 0.21f);    // x, y
	glVertex2f(0.72f, 0.42f);    // x, y
	glVertex2f(0.45f, 0.42f);    // x, y

	glEnd();

    glBegin(GL_QUADS);

	glColor3ub(244, 246, 247); // Red
	glVertex2f(0.02, 0.14f);    // x, y
	glVertex2f(0.1f, 0.14f);    // x, y
	glVertex2f(0.1f, 0.18f);    // x, y
	glVertex2f(0.02f, 0.18f);    // x, y

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(244, 246, 247); // Red
	glVertex2f(0.12, 0.14f);    // x, y
	glVertex2f(0.2f, 0.14f);    // x, y
	glVertex2f(0.2f, 0.18f);    // x, y
	glVertex2f(0.12f, 0.18f);    // x, y

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(244, 246, 247); // Red
	glVertex2f(0.29, 0.13f);    // x, y
	glVertex2f(0.33f, 0.13f);    // x, y
	glVertex2f(0.33f, 0.16f);    // x, y
	glVertex2f(0.29f, 0.16f);    // x, y

	glEnd();

	glBegin(GL_QUADS);

	glColor3f(0.0f, 0.1f, 1.0f); // Red
	glVertex2f(0.0, 0.21f);    // x, y
	glVertex2f(0.22f, 0.21f);    // x, y
	glVertex2f(0.22f, 0.55f);    // x, y
	glVertex2f(0.0f, 0.55f);    // x, y

	glEnd();

	glBegin(GL_QUADS);

	glColor3ub(52, 152, 219); // Red
	glVertex2f(0.02, 0.27f);    // x, y
	glVertex2f(0.08f, 0.27f);    // x, y
	glVertex2f(0.08f, 0.33f);    // x, y
	glVertex2f(0.02f, 0.33f);    // x, y

	glColor3ub(52, 152, 219); // Red
	glVertex2f(0.13, 0.27f);    // x, y
	glVertex2f(0.19f, 0.27f);    // x, y
	glVertex2f(0.19f, 0.33f);    // x, y
	glVertex2f(0.13f, 0.33f);    // x, y

	glColor3ub(236, 240, 241); // Red
	glVertex2f(0.02, 0.36f);    // x, y
	glVertex2f(0.08f, 0.36f);    // x, y
	glVertex2f(0.08f, 0.42f);    // x, y
	glVertex2f(0.02f, 0.42f);    // x, y

	glColor3ub(236, 240, 241); // Red
	glVertex2f(0.13, 0.36f);    // x, y
	glVertex2f(0.19f, 0.36f);    // x, y
	glVertex2f(0.19f, 0.42f);    // x, y
	glVertex2f(0.13f, 0.42f);    // x, y

	glColor3ub(249, 231, 159); // Red
	glVertex2f(0.02, 0.44f);    // x, y
	glVertex2f(0.19f, 0.44f);    // x, y
	glVertex2f(0.19f, 0.51f);    // x, y
	glVertex2f(0.02f, 0.51f);    // x, y

	glColor3f(0.0f, 0.1f, 0.0f); // Red
	glVertex2f(0.24, 0.27f);    // x, y
	glVertex2f(0.30f, 0.27f);    // x, y
	glVertex2f(0.30f, 0.33f);    // x, y
	glVertex2f(0.24f, 0.33f);    // x, y

	glColor3f(44, 62, 80); // Red
	glVertex2f(0.24, 0.35f);    // x, y
	glVertex2f(0.30f, 0.35f);    // x, y
	glVertex2f(0.30f, 0.40f);    // x, y
	glVertex2f(0.24f, 0.40f);    // x, y

	glColor3f(44, 62, 80); // Red
	glVertex2f(0.35, 0.25f);    // x, y
	glVertex2f(0.40f, 0.25f);    // x, y
	glVertex2f(0.40f, 0.36f);    // x, y
	glVertex2f(0.35f, 0.36f);    // x, y


    glColor3f(0.0f, 0.1f, 0.0f); // Red
	glVertex2f(0.47, 0.22f);    // x, y
	glVertex2f(0.55f, 0.22f);    // x, y
	glVertex2f(0.55f, 0.39f);    // x, y
	glVertex2f(0.47f, 0.39f);    // x, y

	glColor3ub(211, 84, 0); // Red
	glVertex2f(0.63, 0.22f);    // x, y
	glVertex2f(0.70f, 0.22f);    // x, y
	glVertex2f(0.70f, 0.30f);    // x, y
	glVertex2f(0.63f, 0.30f);    // x, y



	glEnd();

	GLfloat x=.03f; GLfloat y=.10f; GLfloat radius =.023f;
	int i;
	int lineAmount = 15; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	glColor3ub(231, 76, 60);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=.08f; y=.10f; radius =.023f;

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	glColor3ub(231, 76, 60);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=.13f; y=.10f; radius =.023f;

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	glColor3ub(231, 76, 60);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=.18f; y=.10f; radius =.023f;

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	glColor3ub(231, 76, 60);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=.30f; y=.10f; radius =.023f;

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	glColor3ub(231, 76, 60);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	x=.35f; y=.10f; radius =.023f;

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
	glColor3ub(231, 76, 60);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();


		x=.59f; y=.59f; radius =.11f;

	glBegin(GL_TRIANGLE_FAN);
	glVertex2f(x,y);
    glColor3f(1.0f, 0.0f, 0.0f);
		for(i = 0; i <= lineAmount;i++) {
			glVertex2f(
			    x + (radius * cos(i *  twicePi / lineAmount)),
			    y + (radius* sin(i * twicePi / lineAmount))
			);
		}
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(64, 171, 10);
	glVertex2f(0.85f, 0.35f);    // x, y
	glVertex2f(0.92f, 0.30f);    // x, y
	glVertex2f(0.92f, 0.45f);    // x, y
	glVertex2f(0.85f, 0.55f);    // x, y
	glVertex2f(0.75f, 0.35f);    // x, y
	glVertex2f(0.75f, 0.30f);    // x, y
    glEnd();

    glBegin(GL_QUADS);

	glColor3ub(93, 109, 126); // Red
	glVertex2f(0.83, 0.22f);    // x, y
	glVertex2f(0.86f, 0.22f);    // x, y
	glVertex2f(0.86f, 0.34f);    // x, y
	glVertex2f(0.83f, 0.34f);    // x, y

	glEnd();

	glTranslatef(0.0,0.45,0.0);

	glBegin(GL_POLYGON);
	glColor3ub(64, 171, 10);
	glVertex2f(0.85f, 0.35f);    // x, y
	glVertex2f(0.92f, 0.30f);    // x, y
	glVertex2f(0.92f, 0.45f);    // x, y
	glVertex2f(0.85f, 0.55f);    // x, y
	glVertex2f(0.75f, 0.35f);    // x, y
	glVertex2f(0.75f, 0.30f);    // x, y
    glEnd();

    glBegin(GL_QUADS);

	glColor3ub(93, 109, 126); // Red
	glVertex2f(0.83, 0.22f);    // x, y
	glVertex2f(0.86f, 0.22f);    // x, y
	glVertex2f(0.86f, 0.34f);    // x, y
	glVertex2f(0.83f, 0.34f);    // x, y

	glEnd();


glFlush ();
}
void init (void)
{
/* select clearing (background) color */
glClearColor (0.0, 0.0, 0.0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (350, 350);
glutInitWindowPosition (100, 100);
glutCreateWindow ("rail_station");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}
