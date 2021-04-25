#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<math.h>

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);

	glBegin(GL_QUADS);
	glColor3ub(204,0,0); // Red
	glVertex2f(-1.0f, -0.75f);    // x, y
	glVertex2f(1.0f, -0.75f);// x, y
	glVertex2f(1.0f, -1.0f);// x, y
	glVertex2f(-1.0f, -1.0f);// x, y
    glEnd();


    glBegin(GL_QUADS);
	glColor3ub(255,255,0); // Red
	glVertex2f(-1.0f, -0.5f);    // x, y
	glVertex2f(1.0f, -0.5f);// x, y
	glVertex2f(1.0f, -0.75f);// x, y
	glVertex2f(-1.0f, -0.75f);// x, y
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(153,255,255); // Red
	glVertex2f(-1.0f, -0.25f);    // x, y
	glVertex2f(1.0f, -0.25f);// x, y
	glVertex2f(1.0f, -0.5f);// x, y
	glVertex2f(-1.0f, -0.5f);// x, y
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,0,127); // Red
	glVertex2f(-1.0f, 0.0f);    // x, y
	glVertex2f(1.0f, 0.0f);// x, y
	glVertex2f(1.0f, -0.25f);// x, y
	glVertex2f(-1.0f, -0.25f);// x, y
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0,0,255); // Red
	glVertex2f(-1.0f, 0.25f);    // x, y
	glVertex2f(1.0f, 0.25f);// x, y
	glVertex2f(1.0f, 0.0f);// x, y
	glVertex2f(-1.0f, 0.0f);// x, y
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0,255,0); // Red
	glVertex2f(-1.0f, 0.5f);    // x, y
	glVertex2f(1.0f, 0.5f);// x, y
	glVertex2f(1.0f, 0.25f);// x, y
	glVertex2f(-1.0f, 0.25f);// x, y
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(127,127,127); // Red
	glVertex2f(-1.0f, 0.75f);    // x, y
	glVertex2f(1.0f, 0.75f);// x, y
	glVertex2f(1.0f, 0.5f);// x, y
	glVertex2f(-1.0f, 0.5f);// x, y
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(51,255,255); // Red
	glVertex2f(-1.0f, 1.0f);    // x, y
	glVertex2f(1.0f, 1.0f);// x, y
	glVertex2f(1.0f, 0.75f);// x, y
	glVertex2f(-1.0f, 0.75f);// x, y
    glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(300, 300);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
