#include <windows.h>
#include <GL/glut.h>
#include <cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>>
#define PI 3.14159265358979323846

GLfloat i = 0.0f;
GLfloat speed = 0.01f;

void Idle()
{
  glutPostRedisplay();
}

void display ()
{
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
  glLineWidth(7.5);

  glPushMatrix();
  glRotatef(i, 0, 0.0, 0.1);

  glBegin(GL_QUADS);		// blade right
  glColor3ub(236, 240, 241);	// Red
  glVertex2f(-0.55f, 0.6f);	// x, y
  glVertex2f(-0.1f, 0.0f);	// x, y
  glVertex2f(0.0f, 0.1f);	// x, y
  glVertex2f(-0.48f, 0.77f);
  glEnd ();

  glPopMatrix ();
  i += speed;

  glPushMatrix();
  glRotatef(i, 0, 0.0, 0.1);

  glBegin(GL_QUADS);		// blade right
  glColor3ub(236, 240, 241);	// Red
  glVertex2f(-0.55f, -0.6f);	// x, y
  glVertex2f(-0.1f, 0.0f);	// x, y
  glVertex2f(0.0f, -0.1f);	// x, y
  glVertex2f(-0.48f, -0.77f);
  glEnd();

  glPopMatrix();
  i += speed;

  glPushMatrix();
  glRotatef(i, 0, 0.0, 0.1);

  glBegin(GL_QUADS);		// blade right
  glColor3ub(236, 240, 241);	// Red
  glVertex2f(0.77f, -0.07f);
  glVertex2f(0.85f, 0.085f);	// x, y
  glVertex2f(0.0f, 0.085f);	// x, y
  glVertex2f(0.0f, -0.077f);	// x, y
  glEnd();

  glPopMatrix();
  i += speed;

  int a;
  GLfloat x = .01f;
  GLfloat y = .01f;
  GLfloat radius = .2f;
  int triangleAmount = 20;
  GLfloat twicePi = 2.0f * PI;
  glBegin (GL_TRIANGLE_FAN);
  glColor3ub(241, 196, 15);
  glVertex2f (x, y);
  for (a = 0; a <= triangleAmount; a++)
    {
      glVertex2f (x + (radius * cos (a * twicePi / triangleAmount)),
		  y + (radius * sin (a * twicePi / triangleAmount)));
    }
  glEnd ();


  glFlush ();
}

void handleMouse (int button, int state, int x, int y)
{
  if (button == GLUT_LEFT_BUTTON)
    {
      speed += 0.001f;
    }
  if (button == GLUT_RIGHT_BUTTON)
    {
      speed -= 0.001f;
    }
  glutPostRedisplay ();
}



void handleKeypress (unsigned char key, int x, int y)
{
  switch (key)
    {
    case 'f':
      speed += 0.001f;
      break;
    case 's':
      speed -= 0.001f;
      break;
      glutPostRedisplay ();
    }
}

int main (int argc, char **argv)
{
  glutInit (&argc, argv);
  glutInitWindowSize (340, 340);
  glutCreateWindow ("FAN");
  glutDisplayFunc (display);
  glutKeyboardFunc (handleKeypress);
  glutMouseFunc (handleMouse);
  glutIdleFunc (Idle);
  glutMainLoop ();
  return 0;
}
