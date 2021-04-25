#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);
	glPointSize(7.5);
	// Draw a Red 1x1 Square centered at origin

	glBegin(GL_LINES) ;       // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	  glVertex2f(1.0,0.0);
    glVertex2f(-1.0,0.0);
    glEnd();

    glBegin(GL_LINES) ;       // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.0,1.0);
    glVertex2f(0.0,-1.0);
	glEnd();

	glBegin(GL_QUADS) ;       // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(0.1,0.1);
    glVertex2f(0.5,0.1);
    glVertex2f(0.5,0.5);
    glVertex2f(0.1,0.5);
	glEnd();

	glBegin(GL_LINES) ;       // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.6,0.1);
    glVertex2f(-0.1,0.1);
    glVertex2f(-0.1,0.1);
    glVertex2f(-0.3,0.3);
    glVertex2f(-0.3,0.3);
    glVertex2f(-0.6,0.1);
    glEnd();

    glBegin(GL_POINTS) ;       // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 1.0f);
    glVertex2f(-0.6,-0.4);
    glEnd();

    glBegin(GL_TRIANGLES) ;       // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.1,-0.1);
    glVertex2f(0.3,-0.6);
    glVertex2f(0.6,-0.1);
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
