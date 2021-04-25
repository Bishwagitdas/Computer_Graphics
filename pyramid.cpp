#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

#include<math.h>
# define PI           3.14159265358979323846

void pyramids()
{
    glClearColor(0.5f, 1.0f, 1.0f, 0.0f);//light blue; // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(8.5);

	glBegin(GL_QUADS);

	glColor3ub(220, 118, 51); // Red
	glVertex2f(-1.0, -1.0f);    // x, y
	glVertex2f(1.0f, -1.0f);    // x, y
	glVertex2f(1.0f, -0.33f);    // x, y
	glVertex2f(-1.0f, -0.33f);    // x, y

	glEnd();


    glScalef(0.9 , 0.7, 0);
    glBegin(GL_POLYGON);
    glColor3ub(186, 74, 0);
    glVertex3f(-0.45, -0.5, 0.4);
    glVertex3f(0.4, -0.5, 0);
    glVertex3f(0, 0.4, 0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(211, 84, 0);
    glVertex3f(0.0, -0.5, 0.4);
    glVertex3f(0.4, -0.5, 0);
    glVertex3f(0, 0.4, 0);
    glEnd();


    glTranslatef(0.5, 0.0, 0.0);

    glBegin(GL_POLYGON);
    glColor3ub(186, 74, 0);
    glVertex3f(-0.45, -0.5, 0.4);
    glVertex3f(0.4, -0.5, 0);
    glVertex3f(0, 0.4, 0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(211, 84, 0);
    glVertex3f(0.0, -0.5, 0.4);
    glVertex3f(0.4, -0.5, 0);
    glVertex3f(0, 0.4, 0);
    glEnd();

    glTranslatef(-1.0, 0.0, 0.0);

    glBegin(GL_POLYGON);
    glColor3ub(186, 74, 0);
    glVertex3f(-0.45, -0.5, 0.4);
    glVertex3f(0.4, -0.5, 0);
    glVertex3f(0, 0.4, 0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211, 84, 0);
    glVertex3f(0.0, -0.5, 0.4);
    glVertex3f(0.4, -0.5, 0);
    glVertex3f(0, 0.4, 0);
    glEnd();


    glFlush();
}

void display()
{
    pyramids();

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
