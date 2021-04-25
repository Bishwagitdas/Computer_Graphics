#include <windows.h>
#include <GL/glut.h>
#include <math.h>
# define PI           3.14159265358979323846

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);              //background color
	glColor3ub(133, 162, 230);
	glVertex2f(-1.0f, 1.0f);
    glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
	glEnd();

    glBegin(GL_QUADS);              //face small quad
	glColor3ub(245, 234, 193);
	glVertex2f(0.1f, 0.5f);
	glVertex2f(-0.1f, 0.5f);
	glVertex2f(-0.1f, 0.4f);
    glVertex2f(0.1f, 0.4f);
	glEnd();

	glBegin(GL_QUADS);              //face big quad
	glColor3ub(245, 234, 193);
	glVertex2f(0.1f, 0.8f);
	glVertex2f(-0.2f, 0.8f);
	glVertex2f(-0.2f, 0.5f);
    glVertex2f(0.1f, 0.5f);
	glEnd();

    glBegin(GL_QUADS);              //sunglass
	glColor3ub(0, 0, 0);
	glVertex2f(-0.25f, 0.74f);
	glVertex2f(-0.02f, 0.74f);
	glVertex2f(-0.02f, 0.69f);
    glVertex2f(-0.25f, 0.69f);
	glEnd();

	glBegin(GL_QUADS);              //sunglass left
	glColor3ub(0, 0, 0);
	glVertex2f(-0.25f, 0.74f);
	glVertex2f(-0.18f, 0.74f);
	glVertex2f(-0.18f, 0.64f);
    glVertex2f(-0.25f, 0.64f);
	glEnd();

	glBegin(GL_QUADS);              //sunglass right
	glColor3ub(0, 0, 0);
	glVertex2f(-0.12f, 0.74f);
	glVertex2f(-0.02f, 0.74f);
	glVertex2f(-0.02f, 0.64f);
    glVertex2f(-0.12f, 0.64f);
	glEnd();

	glBegin(GL_QUADS);              //hair part
	glColor3ub(0, 0, 0);
	glVertex2f(0.08f, 0.8f);
	glVertex2f(0.03f, 0.8f);
	glVertex2f(0.03f, 0.64f);
    glVertex2f(0.08f, 0.64f);
	glEnd();

	glBegin(GL_QUADS);              //hair big quad
	glColor3ub(0, 0, 0);
	glVertex2f(0.15f, 0.9f);
	glVertex2f(-0.25f, 0.9f);
	glVertex2f(-0.25f, 0.8f);
    glVertex2f(0.15f, 0.8f);
	glEnd();

	glBegin(GL_QUADS);              //hair  quad
	glColor3ub(0, 0, 0);
	glVertex2f(-0.05f, 0.97f);
	glVertex2f(-0.25f, 0.97f);
	glVertex2f(-0.25f, 0.9f);
    glVertex2f(-0.05f, 0.9f);
	glEnd();

    glBegin(GL_QUADS);              //body white part
	glColor3ub(255, 255, 255);
	glVertex2f(-0.2f, 0.4f);
    glVertex2f(-0.2f, 0.2f);
	glVertex2f(0.2f, 0.2f);
    glVertex2f(0.2f, 0.4f);
	glEnd();

	glBegin(GL_QUADS);              //body ash part
	glColor3ub(83, 86, 94);
	glVertex2f(-0.2f, 0.2f);
	glVertex2f(-0.2f, -0.05f);
	glVertex2f(0.2f, -0.05f);
    glVertex2f(0.2f, 0.2f);
	glEnd();

    glBegin(GL_QUADS);              //left coat
	glColor3ub(0, 0, 0);
	glVertex2f(-0.1f, 0.5f);
	glVertex2f(-0.15f, 0.5f);
	glVertex2f(-0.15f, 0.0f);
    glVertex2f(-0.1f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);              //geans square part
	glColor3ub(47, 98, 235);
	glVertex2f(-0.2f, -0.05f);
	glVertex2f(-0.2f, -0.18f);
    glVertex2f(0.2f, -0.18f);
    glVertex2f(0.2f, -0.05f);
	glEnd();

	glBegin(GL_QUADS);              //left leg
	glColor3ub(47, 98, 235);
	glVertex2f(-0.2f, -0.18f);
	glVertex2f(-0.2f, -0.7f);
	glVertex2f(-0.08f, -0.7f);
    glVertex2f(-0.08f, -0.18f);
	glEnd();

	glBegin(GL_QUADS);              //left leg border
	glColor3ub(143, 188, 227);
	glVertex2f(-0.2f, -0.65f);
	glVertex2f(-0.2f, -0.73f);
	glVertex2f(-0.08f, -0.73f);
    glVertex2f(-0.08f, -0.65f);
	glEnd();

	glBegin(GL_QUADS);              //left shoe small square
	glColor3ub(0, 0, 0);
	glVertex2f(-0.2f, -0.73f);
	glVertex2f(-0.2f, -0.81f);
	glVertex2f(-0.08f, -0.81f);
    glVertex2f(-0.08f, -0.73f);
	glEnd();

	glBegin(GL_QUADS);              //left shoe big square
	glColor3ub(0, 0, 0);
	glVertex2f(-0.25f, -0.81f);
	glVertex2f(-0.25f, -0.89f);
	glVertex2f(-0.08f, -0.89f);
    glVertex2f(-0.08f, -0.81f);
	glEnd();

	glBegin(GL_QUADS);              //right leg
	glColor3ub(47, 98, 235);
	glVertex2f(0.2f, -0.18f);
	glVertex2f(0.08f, -0.18f);
	glVertex2f(0.08f, -0.7f);
    glVertex2f(0.2f, -0.7f);
	glEnd();

	glBegin(GL_QUADS);              //right leg border
	glColor3ub(143, 188, 227);
	glVertex2f(0.2f, -0.65f);
	glVertex2f(0.08f, -0.65f);
	glVertex2f(0.08f, -0.73f);
    glVertex2f(0.2f, -0.73f);
	glEnd();

	glBegin(GL_QUADS);              //right shoe small square
	glColor3ub(97, 106, 107);
	glVertex2f(0.25f, -0.81f);
	glVertex2f(0.08f, -0.81f);
	glVertex2f(0.08f, -0.89f);
    glVertex2f(0.25f, -0.89f);
	glEnd();

	glBegin(GL_QUADS);              //right shoe big square
	glColor3ub(97, 106, 107);
	glVertex2f(0.2f, -0.73f);
	glVertex2f(0.08f, -0.73f);
	glVertex2f(0.08f, -0.81f);
    glVertex2f(0.2f, -0.81f);
	glEnd();

	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
