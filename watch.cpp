#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846

GLfloat j = 0.0f;
GLfloat k = 0.0f;
GLfloat l = 0.0f;


void Idle()
{
    glutPostRedisplay();
}

  void handleMouse (int button, int state, int x, int y)
    {
        if (button == GLUT_LEFT_BUTTON)
        {
            j = 0.0f;
            k = 0.0f;
            l = 0.0f;

        }

        glutPostRedisplay();

    }


void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	int i;


	GLfloat x=0.0f; GLfloat y=0.0f; GLfloat radius =.66f;
	int triangleAmount = 24;


	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0, 1.0, 1.0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


    glPushMatrix();
    glRotatef(j,0.0,0.0,0.1);
    glLineWidth(2);

	glBegin(GL_LINES);
	glColor3ub(241, 196, 15);
	glVertex2f(0.0,0.0);
	glVertex2f(0.0, 0.6);

	glEnd();

	glPopMatrix();
	 j-=0.01f;

	 glLoadIdentity();



	glPushMatrix();
    glRotatef(k,0.0,0.0,0.1);
	glLineWidth(2.5);

	glBegin(GL_LINES);
	glColor3ub(186, 37, 0);
	glVertex2f(0.0,0.0);
	glVertex2f(0.45, 0.0);

	glEnd();

	glPopMatrix();
	k -=0.001f;



	glPushMatrix();
    glRotatef(l,0.0,0.0,0.1);
	glLineWidth(4);

	glBegin(GL_LINES);
	glColor3ub(43, 0, 186);
	glVertex2f(0.0,0.0);
	glVertex2f(-0.35, 0);

	glEnd();
    glPopMatrix();
	 l-=0.0001f;


	glFlush();


}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("analog clock");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMouseFunc(handleMouse);
	glutIdleFunc(Idle);
	glutMainLoop();
	return 0;
}

