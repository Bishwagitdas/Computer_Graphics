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
 void display()
 {
    glClearColor(1.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(110.0);

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // Red
    glVertex2f(-.4f, -1.0f);    // x, y
    glVertex2f(-.4f, 1.0f);

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // Red
    glVertex2f(-1.0f, 0.0f);    // x, y
    glVertex2f(1.0f, 0.0f);
    glEnd();

    glFlush();

    glLineWidth(13.5);

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(0.0f, 0.0f, 1.0f); // Red
    glVertex2f(-.4f, -1.0f);    // x, y
    glVertex2f(-.4f, 1.0f);

    glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(0.0f, 0.0f, 1.0f); // Red
    glVertex2f(-1.0f, 0.0f);    // x, y
    glVertex2f(1.0f, 0.0f);
    glEnd();

    glFlush();
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
