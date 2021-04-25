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


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);
	// Draw a Red 1x1 Square centered at origin


	//Ground - 1st row - From the left

    glScalef(2, 2, 0);
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(194.0f, 152.0f, 94.0f); // Red
	glVertex2f(-0.20f, -0.16f);    // x, y
	glVertex2f(-0.10f, -0.16f);    // x, y
	glVertex2f(-0.15f, -0.08f);    // x, y
	glVertex2f(-0.20f, -0.16f);    // x, y

	glEnd();

	glTranslatef(0.10, 0, 0);
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glVertex2f(-0.20f, -0.16f);    // x, y
	glVertex2f(-0.10f, -0.16f);    // x, y
	glVertex2f(-0.15f, -0.08f);    // x, y
	glVertex2f(-0.20f, -0.16f);    // x, y

	glEnd();

	glTranslatef(0.10, 0, 0);
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad// Red
	glVertex2f(-0.20f, -0.16f);    // x, y
	glVertex2f(-0.10f, -0.16f);    // x, y
	glVertex2f(-0.15f, -0.08f);    // x, y
	glVertex2f(-0.20f, -0.16f);    // x, y

	glEnd();

	glTranslatef(0.10, 0, 0);
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glVertex2f(-0.20f, -0.16f);    // x, y
	glVertex2f(-0.10f, -0.16f);    // x, y
	glVertex2f(-0.15f, -0.08f);    // x, y
	glVertex2f(-0.20f, -0.16f);    // x, y

	glEnd();

	//Ground - 2nd row - From the Right

	glTranslatef(-0.05, 0.08, 0);
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glVertex2f(-0.20f, -0.16f);    // x, y
	glVertex2f(-0.10f, -0.16f);    // x, y
	glVertex2f(-0.15f, -0.08f);    // x, y
	glVertex2f(-0.20f, -0.16f);    // x, y

	glEnd();

	glTranslatef(-0.10, 0, 0);
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glVertex2f(-0.20f, -0.16f);    // x, y
	glVertex2f(-0.10f, -0.16f);    // x, y
	glVertex2f(-0.15f, -0.08f);    // x, y
	glVertex2f(-0.20f, -0.16f);    // x, y

	glEnd();

	glTranslatef(-0.10, 0, 0);
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glVertex2f(-0.20f, -0.16f);    // x, y
	glVertex2f(-0.10f, -0.16f);    // x, y
	glVertex2f(-0.15f, -0.08f);    // x, y
	glVertex2f(-0.20f, -0.16f);    // x, y

	glEnd();

	//Ground - 3rd row - From the Left

	glTranslatef(0.05, 0.08, 0);
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glVertex2f(-0.20f, -0.16f);    // x, y
	glVertex2f(-0.10f, -0.16f);    // x, y
	glVertex2f(-0.15f, -0.08f);    // x, y
	glVertex2f(-0.20f, -0.16f);    // x, y

	glEnd();

	glTranslatef(0.10, 0, 0);
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glVertex2f(-0.20f, -0.16f);    // x, y
	glVertex2f(-0.10f, -0.16f);    // x, y
	glVertex2f(-0.15f, -0.08f);    // x, y
	glVertex2f(-0.20f, -0.16f);    // x, y

	glEnd();

    //Top row

	glTranslatef(-0.05, 0.08, 0);
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glVertex2f(-0.20f, -0.16f);    // x, y
	glVertex2f(-0.10f, -0.16f);    // x, y
	glVertex2f(-0.15f, -0.08f);    // x, y
	glVertex2f(-0.20f, -0.16f);    // x, y

	glEnd();
	glLoadIdentity();

	glBegin(GL_TRIANGLES);
	glColor3ub(122, 79, 37);             // Each set of 4 vertices form a quad
	glVertex2f(0.0f, 0.32f);    // x, y
	glVertex2f(0.40f, -0.32f);    // x, y
	glVertex2f(0.50f, -0.24f);    // x, y
	glVertex2f(0.40f, -0.32f);    // x, y

	glEnd();

	//pyramid-shadow
	 /*glScalef(1.5, 1.5, 0);
	glBegin(GL_TRIANGLES);
	glColor3ub(122, 79, 37);             // Each set of 4 vertices form a quad
	glVertex2f(0.0f, 0.16f);    // x, y
	glVertex2f(0.20f, -0.16f);    // x, y
	glVertex2f(0.25f, -0.12f);    // x, y
	glVertex2f(0.20f, -0.16f);    // x, y

	glEnd();*/

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}


