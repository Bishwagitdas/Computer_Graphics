#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(22.0);
glBegin(GL_LINE_LOOP);
glVertex2i(208, 427);//Add x
glVertex2i(303, 332);//Add x
glVertex2i(396, 435);//
glVertex2i(362, 277);
glVertex2i(451, 185);

glVertex2i(336, 188);
glVertex2i(302, 035);
glVertex2i(267, 187);
glVertex2i(153, 184);
glVertex2i(241, 273);
glEnd();
glFlush ();
}
void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(640.0, 0.0, 480.0, 0.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (100, 150);
glutCreateWindow ("Lab Task");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
